/****************************************************************************
** Meta object code from reading C++ file 'messages.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "modules/gui/qt/dialogs/messages.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'messages.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MessagesDialog_t {
    QByteArrayData data[8];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MessagesDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MessagesDialog_t qt_meta_stringdata_MessagesDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "MessagesDialog"
QT_MOC_LITERAL(1, 15, 4), // "save"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 12), // "updateConfig"
QT_MOC_LITERAL(4, 34, 15), // "changeVerbosity"
QT_MOC_LITERAL(5, 50, 13), // "updateOrClear"
QT_MOC_LITERAL(6, 64, 10), // "tabChanged"
QT_MOC_LITERAL(7, 75, 14) // "filterMessages"

    },
    "MessagesDialog\0save\0\0updateConfig\0"
    "changeVerbosity\0updateOrClear\0tabChanged\0"
    "filterMessages"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MessagesDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    1,   46,    2, 0x08 /* Private */,
       5,    0,   49,    2, 0x08 /* Private */,
       6,    1,   50,    2, 0x08 /* Private */,
       7,    0,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void MessagesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MessagesDialog *_t = static_cast<MessagesDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->save();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: _t->updateConfig(); break;
        case 2: _t->changeVerbosity((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->updateOrClear(); break;
        case 4: _t->tabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->filterMessages(); break;
        default: ;
        }
    }
}

const QMetaObject MessagesDialog::staticMetaObject = {
    { &QVLCFrame::staticMetaObject, qt_meta_stringdata_MessagesDialog.data,
      qt_meta_data_MessagesDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MessagesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MessagesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MessagesDialog.stringdata0))
        return static_cast<void*>(const_cast< MessagesDialog*>(this));
    if (!strcmp(_clname, "Singleton<MessagesDialog>"))
        return static_cast< Singleton<MessagesDialog>*>(const_cast< MessagesDialog*>(this));
    return QVLCFrame::qt_metacast(_clname);
}

int MessagesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
