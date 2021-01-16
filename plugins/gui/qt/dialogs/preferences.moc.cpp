/****************************************************************************
** Meta object code from reading C++ file 'preferences.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "modules/gui/qt/dialogs/preferences.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'preferences.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PrefsDialog_t {
    QByteArrayData data[13];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PrefsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PrefsDialog_t qt_meta_stringdata_PrefsDialog = {
    {
QT_MOC_LITERAL(0, 0, 11), // "PrefsDialog"
QT_MOC_LITERAL(1, 12, 11), // "setAdvanced"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 9), // "setSimple"
QT_MOC_LITERAL(4, 35, 14), // "changeAdvPanel"
QT_MOC_LITERAL(5, 50, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(6, 67, 17), // "changeSimplePanel"
QT_MOC_LITERAL(7, 85, 25), // "advancedTreeFilterChanged"
QT_MOC_LITERAL(8, 111, 17), // "onlyLoadedToggled"
QT_MOC_LITERAL(9, 129, 4), // "save"
QT_MOC_LITERAL(10, 134, 6), // "cancel"
QT_MOC_LITERAL(11, 141, 5), // "reset"
QT_MOC_LITERAL(12, 147, 5) // "close"

    },
    "PrefsDialog\0setAdvanced\0\0setSimple\0"
    "changeAdvPanel\0QTreeWidgetItem*\0"
    "changeSimplePanel\0advancedTreeFilterChanged\0"
    "onlyLoadedToggled\0save\0cancel\0reset\0"
    "close"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PrefsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    1,   66,    2, 0x08 /* Private */,
       6,    1,   69,    2, 0x08 /* Private */,
       7,    1,   72,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PrefsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PrefsDialog *_t = static_cast<PrefsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setAdvanced(); break;
        case 1: _t->setSimple(); break;
        case 2: _t->changeAdvPanel((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->changeSimplePanel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->advancedTreeFilterChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->onlyLoadedToggled(); break;
        case 6: _t->save(); break;
        case 7: _t->cancel(); break;
        case 8: _t->reset(); break;
        case 9: _t->close(); break;
        default: ;
        }
    }
}

const QMetaObject PrefsDialog::staticMetaObject = {
    { &QVLCDialog::staticMetaObject, qt_meta_stringdata_PrefsDialog.data,
      qt_meta_data_PrefsDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PrefsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PrefsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PrefsDialog.stringdata0))
        return static_cast<void*>(const_cast< PrefsDialog*>(this));
    return QVLCDialog::qt_metacast(_clname);
}

int PrefsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
