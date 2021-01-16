/****************************************************************************
** Meta object code from reading C++ file 'extended.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "modules/gui/qt/dialogs/extended.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'extended.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ExtendedDialog_t {
    QByteArrayData data[9];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExtendedDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExtendedDialog_t qt_meta_stringdata_ExtendedDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ExtendedDialog"
QT_MOC_LITERAL(1, 15, 11), // "changedItem"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 17), // "currentTabChanged"
QT_MOC_LITERAL(4, 46, 10), // "saveConfig"
QT_MOC_LITERAL(5, 57, 14), // "putAudioConfig"
QT_MOC_LITERAL(6, 72, 4), // "name"
QT_MOC_LITERAL(7, 77, 5), // "value"
QT_MOC_LITERAL(8, 83, 14) // "putVideoConfig"

    },
    "ExtendedDialog\0changedItem\0\0"
    "currentTabChanged\0saveConfig\0"
    "putAudioConfig\0name\0value\0putVideoConfig"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExtendedDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       3,    1,   42,    2, 0x08 /* Private */,
       4,    0,   45,    2, 0x08 /* Private */,
       5,    2,   46,    2, 0x08 /* Private */,
       8,    2,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,    6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,    6,    7,

       0        // eod
};

void ExtendedDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ExtendedDialog *_t = static_cast<ExtendedDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changedItem((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->currentTabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->saveConfig(); break;
        case 3: _t->putAudioConfig((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 4: _t->putVideoConfig((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject ExtendedDialog::staticMetaObject = {
    { &QVLCDialog::staticMetaObject, qt_meta_stringdata_ExtendedDialog.data,
      qt_meta_data_ExtendedDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ExtendedDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExtendedDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ExtendedDialog.stringdata0))
        return static_cast<void*>(const_cast< ExtendedDialog*>(this));
    if (!strcmp(_clname, "Singleton<ExtendedDialog>"))
        return static_cast< Singleton<ExtendedDialog>*>(const_cast< ExtendedDialog*>(this));
    return QVLCDialog::qt_metacast(_clname);
}

int ExtendedDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
