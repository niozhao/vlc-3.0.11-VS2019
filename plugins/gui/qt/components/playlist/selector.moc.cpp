/****************************************************************************
** Meta object code from reading C++ file 'selector.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "modules/gui/qt/components/playlist/selector.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'selector.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PLSelItem_t {
    QByteArrayData data[7];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PLSelItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PLSelItem_t qt_meta_stringdata_PLSelItem = {
    {
QT_MOC_LITERAL(0, 0, 9), // "PLSelItem"
QT_MOC_LITERAL(1, 10, 6), // "action"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 10), // "PLSelItem*"
QT_MOC_LITERAL(4, 29, 10), // "showAction"
QT_MOC_LITERAL(5, 40, 10), // "hideAction"
QT_MOC_LITERAL(6, 51, 13) // "triggerAction"

    },
    "PLSelItem\0action\0\0PLSelItem*\0showAction\0"
    "hideAction\0triggerAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PLSelItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   37,    2, 0x0a /* Public */,
       5,    0,   38,    2, 0x0a /* Public */,
       6,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PLSelItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PLSelItem *_t = static_cast<PLSelItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->action((*reinterpret_cast< PLSelItem*(*)>(_a[1]))); break;
        case 1: _t->showAction(); break;
        case 2: _t->hideAction(); break;
        case 3: _t->triggerAction(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PLSelItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PLSelItem::*_t)(PLSelItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PLSelItem::action)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject PLSelItem::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PLSelItem.data,
      qt_meta_data_PLSelItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PLSelItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PLSelItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PLSelItem.stringdata0))
        return static_cast<void*>(const_cast< PLSelItem*>(this));
    return QWidget::qt_metacast(_clname);
}

int PLSelItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void PLSelItem::action(PLSelItem * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_PLSelector_t {
    QByteArrayData data[15];
    char stringdata0[190];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PLSelector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PLSelector_t qt_meta_stringdata_PLSelector = {
    {
QT_MOC_LITERAL(0, 0, 10), // "PLSelector"
QT_MOC_LITERAL(1, 11, 17), // "categoryActivated"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 16), // "playlist_item_t*"
QT_MOC_LITERAL(4, 47, 18), // "SDCategorySelected"
QT_MOC_LITERAL(5, 66, 9), // "setSource"
QT_MOC_LITERAL(6, 76, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(7, 93, 4), // "item"
QT_MOC_LITERAL(8, 98, 11), // "plItemAdded"
QT_MOC_LITERAL(9, 110, 13), // "plItemRemoved"
QT_MOC_LITERAL(10, 124, 15), // "inputItemUpdate"
QT_MOC_LITERAL(11, 140, 13), // "input_item_t*"
QT_MOC_LITERAL(12, 154, 10), // "podcastAdd"
QT_MOC_LITERAL(13, 165, 10), // "PLSelItem*"
QT_MOC_LITERAL(14, 176, 13) // "podcastRemove"

    },
    "PLSelector\0categoryActivated\0\0"
    "playlist_item_t*\0SDCategorySelected\0"
    "setSource\0QTreeWidgetItem*\0item\0"
    "plItemAdded\0plItemRemoved\0inputItemUpdate\0"
    "input_item_t*\0podcastAdd\0PLSelItem*\0"
    "podcastRemove"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PLSelector[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,
       4,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   62,    2, 0x08 /* Private */,
       8,    2,   65,    2, 0x08 /* Private */,
       9,    1,   70,    2, 0x08 /* Private */,
      10,    1,   73,    2, 0x08 /* Private */,
      12,    1,   76,    2, 0x08 /* Private */,
      14,    1,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, 0x80000000 | 13,    2,
    QMetaType::Void, 0x80000000 | 13,    2,

       0        // eod
};

void PLSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PLSelector *_t = static_cast<PLSelector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->categoryActivated((*reinterpret_cast< playlist_item_t*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->SDCategorySelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setSource((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->plItemAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->plItemRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->inputItemUpdate((*reinterpret_cast< input_item_t*(*)>(_a[1]))); break;
        case 6: _t->podcastAdd((*reinterpret_cast< PLSelItem*(*)>(_a[1]))); break;
        case 7: _t->podcastRemove((*reinterpret_cast< PLSelItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< playlist_item_t* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< input_item_t* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PLSelItem* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PLSelItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PLSelector::*_t)(playlist_item_t * , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PLSelector::categoryActivated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PLSelector::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PLSelector::SDCategorySelected)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject PLSelector::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_PLSelector.data,
      qt_meta_data_PLSelector,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PLSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PLSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PLSelector.stringdata0))
        return static_cast<void*>(const_cast< PLSelector*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int PLSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void PLSelector::categoryActivated(playlist_item_t * _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PLSelector::SDCategorySelected(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
