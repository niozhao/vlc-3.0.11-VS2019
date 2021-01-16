/****************************************************************************
** Meta object code from reading C++ file 'playlist_model.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "modules/gui/qt/components/playlist/playlist_model.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlist_model.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PLModel_t {
    QByteArrayData data[12];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PLModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PLModel_t qt_meta_stringdata_PLModel = {
    {
QT_MOC_LITERAL(0, 0, 7), // "PLModel"
QT_MOC_LITERAL(1, 8, 22), // "processInputItemUpdate"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 13), // "input_item_t*"
QT_MOC_LITERAL(4, 46, 18), // "processItemRemoval"
QT_MOC_LITERAL(5, 65, 11), // "i_pl_itemid"
QT_MOC_LITERAL(6, 77, 17), // "processItemAppend"
QT_MOC_LITERAL(7, 95, 17), // "i_pl_itemidparent"
QT_MOC_LITERAL(8, 113, 12), // "activateItem"
QT_MOC_LITERAL(9, 126, 16), // "playlist_item_t*"
QT_MOC_LITERAL(10, 143, 6), // "p_item"
QT_MOC_LITERAL(11, 150, 5) // "index"

    },
    "PLModel\0processInputItemUpdate\0\0"
    "input_item_t*\0processItemRemoval\0"
    "i_pl_itemid\0processItemAppend\0"
    "i_pl_itemidparent\0activateItem\0"
    "playlist_item_t*\0p_item\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PLModel[] = {

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
       1,    1,   44,    2, 0x08 /* Private */,
       1,    0,   47,    2, 0x08 /* Private */,
       4,    1,   48,    2, 0x08 /* Private */,
       6,    2,   51,    2, 0x08 /* Private */,
       8,    1,   56,    2, 0x08 /* Private */,
       8,    1,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QModelIndex,   11,

       0        // eod
};

void PLModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PLModel *_t = static_cast<PLModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->processInputItemUpdate((*reinterpret_cast< input_item_t*(*)>(_a[1]))); break;
        case 1: _t->processInputItemUpdate(); break;
        case 2: _t->processItemRemoval((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->processItemAppend((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->activateItem((*reinterpret_cast< playlist_item_t*(*)>(_a[1]))); break;
        case 5: _t->activateItem((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject PLModel::staticMetaObject = {
    { &VLCModel::staticMetaObject, qt_meta_stringdata_PLModel.data,
      qt_meta_data_PLModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PLModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PLModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PLModel.stringdata0))
        return static_cast<void*>(const_cast< PLModel*>(this));
    return VLCModel::qt_metacast(_clname);
}

int PLModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VLCModel::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_PlMimeData_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlMimeData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlMimeData_t qt_meta_stringdata_PlMimeData = {
    {
QT_MOC_LITERAL(0, 0, 10) // "PlMimeData"

    },
    "PlMimeData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlMimeData[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void PlMimeData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject PlMimeData::staticMetaObject = {
    { &QMimeData::staticMetaObject, qt_meta_stringdata_PlMimeData.data,
      qt_meta_data_PlMimeData,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PlMimeData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlMimeData::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PlMimeData.stringdata0))
        return static_cast<void*>(const_cast< PlMimeData*>(this));
    return QMimeData::qt_metacast(_clname);
}

int PlMimeData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMimeData::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
