#include <esp_now.h>
#include <WiFi.h>
#include <ArduinoJson.h>
#include <HardwareSerial.h>  // Include this library for hardware serial functionality

// Maximum size of the received JSON data
const size_t MAX_JSON_SIZE = 1024;

// Function to validate JSON data
bool isValidJson(const char *data) {
  StaticJsonDocument<MAX_JSON_SIZE> doc;
  DeserializationError error = deserializeJson(doc, data);
  return !error;
}

esp_now_peer_info_t peerInfo;

void OnDataRecv(const uint8_t *mac, const uint8_t *incomingData, int len) {
  // Buffer to hold the received JSON data
  char receivedJson[MAX_JSON_SIZE + 1]; // Add 1 for null terminator

  if (len > MAX_JSON_SIZE) {
    Serial.println("Received JSON data is too large");
    return;
  }

  memcpy(receivedJson, incomingData, len);
  receivedJson[len] = '\0';

  if (!isValidJson(receivedJson)) {
    Serial.println("Received data is not valid JSON");
    return;
  }

  StaticJsonDocument<MAX_JSON_SIZE> doc;
  DeserializationError error = deserializeJson(doc, receivedJson);
  if (error) {
    Serial.println("Failed to parse received JSON");
    return;
  }

  Serial.println("Received JSON data:");
  serializeJson(doc, Serial);
  Serial.println();

  // Send JSON data over UART
  String jsonString;
  serializeJson(doc, jsonString);
  Serial2.write(jsonString.c_str()); // Send data via Serial2
}

void setup() {
  Serial.begin(115200); // Used for debugging output
  Serial2.begin(115200, SERIAL_8N1, 16, 17); // Initialize Serial2 using GPIO16 as RX, GPIO17 as TX

  WiFi.mode(WIFI_STA);

  if (esp_now_init() != ESP_OK) {
    Serial.println("Error initializing ESP-NOW");
    return;
  }

  esp_now_register_recv_cb(OnDataRecv);

  memset(&peerInfo, 0, sizeof(peerInfo));
  if (esp_now_add_peer(&peerInfo) != ESP_OK) {
    Serial.println("Failed to add peer");
    return;
  }
}

void loop() {
  // Nothing to do in the loop
}
