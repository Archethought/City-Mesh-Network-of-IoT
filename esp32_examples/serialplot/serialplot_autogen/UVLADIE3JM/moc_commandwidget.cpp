/****************************************************************************
** Meta object code from reading C++ file 'commandwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/commandwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'commandwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CommandWidget_t {
    QByteArrayData data[12];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CommandWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CommandWidget_t qt_meta_stringdata_CommandWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CommandWidget"
QT_MOC_LITERAL(1, 14, 15), // "deleteRequested"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 14), // "CommandWidget*"
QT_MOC_LITERAL(4, 46, 10), // "thisWidget"
QT_MOC_LITERAL(5, 57, 11), // "sendCommand"
QT_MOC_LITERAL(6, 69, 7), // "command"
QT_MOC_LITERAL(7, 77, 14), // "focusRequested"
QT_MOC_LITERAL(8, 92, 15), // "onDeleteClicked"
QT_MOC_LITERAL(9, 108, 13), // "onSendClicked"
QT_MOC_LITERAL(10, 122, 14), // "onASCIIToggled"
QT_MOC_LITERAL(11, 137, 7) // "checked"

    },
    "CommandWidget\0deleteRequested\0\0"
    "CommandWidget*\0thisWidget\0sendCommand\0"
    "command\0focusRequested\0onDeleteClicked\0"
    "onSendClicked\0onASCIIToggled\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CommandWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,
       7,    0,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   51,    2, 0x08 /* Private */,
       9,    0,   52,    2, 0x08 /* Private */,
      10,    1,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QByteArray,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,

       0        // eod
};

void CommandWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CommandWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->deleteRequested((*reinterpret_cast< CommandWidget*(*)>(_a[1]))); break;
        case 1: _t->sendCommand((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: _t->focusRequested(); break;
        case 3: _t->onDeleteClicked(); break;
        case 4: _t->onSendClicked(); break;
        case 5: _t->onASCIIToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CommandWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CommandWidget::*)(CommandWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommandWidget::deleteRequested)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CommandWidget::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommandWidget::sendCommand)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CommandWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommandWidget::focusRequested)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CommandWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CommandWidget.data,
    qt_meta_data_CommandWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CommandWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CommandWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CommandWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CommandWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void CommandWidget::deleteRequested(CommandWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CommandWidget::sendCommand(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CommandWidget::focusRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
