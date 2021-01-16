/****************************************************************************
** Meta object code from reading C++ file 'pictureflow.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "modules/gui/qt/util/pictureflow.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pictureflow.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PictureFlow_t {
    QByteArrayData data[16];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PictureFlow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PictureFlow_t qt_meta_stringdata_PictureFlow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "PictureFlow"
QT_MOC_LITERAL(1, 12, 18), // "centerIndexChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 5), // "index"
QT_MOC_LITERAL(4, 38, 14), // "setCenterIndex"
QT_MOC_LITERAL(5, 53, 5), // "clear"
QT_MOC_LITERAL(6, 59, 12), // "showPrevious"
QT_MOC_LITERAL(7, 72, 8), // "showNext"
QT_MOC_LITERAL(8, 81, 9), // "showSlide"
QT_MOC_LITERAL(9, 91, 6), // "render"
QT_MOC_LITERAL(10, 98, 13), // "triggerRender"
QT_MOC_LITERAL(11, 112, 15), // "updateAnimation"
QT_MOC_LITERAL(12, 128, 15), // "backgroundColor"
QT_MOC_LITERAL(13, 144, 9), // "slideSize"
QT_MOC_LITERAL(14, 154, 10), // "slideCount"
QT_MOC_LITERAL(15, 165, 11) // "centerIndex"

    },
    "PictureFlow\0centerIndexChanged\0\0index\0"
    "setCenterIndex\0clear\0showPrevious\0"
    "showNext\0showSlide\0render\0triggerRender\0"
    "updateAnimation\0backgroundColor\0"
    "slideSize\0slideCount\0centerIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PictureFlow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       4,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   62,    2, 0x0a /* Public */,
       5,    0,   65,    2, 0x0a /* Public */,
       6,    0,   66,    2, 0x0a /* Public */,
       7,    0,   67,    2, 0x0a /* Public */,
       8,    1,   68,    2, 0x0a /* Public */,
       9,    0,   71,    2, 0x0a /* Public */,
      10,    0,   72,    2, 0x0a /* Public */,
      11,    0,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      12, QMetaType::QColor, 0x00095103,
      13, QMetaType::QSize, 0x00095103,
      14, QMetaType::Int, 0x00095001,
      15, QMetaType::Int, 0x00095103,

       0        // eod
};

void PictureFlow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PictureFlow *_t = static_cast<PictureFlow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->centerIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setCenterIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->clear(); break;
        case 3: _t->showPrevious(); break;
        case 4: _t->showNext(); break;
        case 5: _t->showSlide((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->render(); break;
        case 7: _t->triggerRender(); break;
        case 8: _t->updateAnimation(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PictureFlow::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PictureFlow::centerIndexChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        PictureFlow *_t = static_cast<PictureFlow *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->backgroundColor(); break;
        case 1: *reinterpret_cast< QSize*>(_v) = _t->slideSize(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->slideCount(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->centerIndex(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        PictureFlow *_t = static_cast<PictureFlow *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setSlideSize(*reinterpret_cast< QSize*>(_v)); break;
        case 3: _t->setCenterIndex(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject PictureFlow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PictureFlow.data,
      qt_meta_data_PictureFlow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PictureFlow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PictureFlow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PictureFlow.stringdata0))
        return static_cast<void*>(const_cast< PictureFlow*>(this));
    return QWidget::qt_metacast(_clname);
}

int PictureFlow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PictureFlow::centerIndexChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_PictureFlowPrivate_t {
    QByteArrayData data[25];
    char stringdata0[342];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PictureFlowPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PictureFlowPrivate_t qt_meta_stringdata_PictureFlowPrivate = {
    {
QT_MOC_LITERAL(0, 0, 18), // "PictureFlowPrivate"
QT_MOC_LITERAL(1, 19, 24), // "columnsAboutToBeInserted"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 6), // "parent"
QT_MOC_LITERAL(4, 52, 5), // "start"
QT_MOC_LITERAL(5, 58, 3), // "end"
QT_MOC_LITERAL(6, 62, 23), // "columnsAboutToBeRemoved"
QT_MOC_LITERAL(7, 86, 15), // "columnsInserted"
QT_MOC_LITERAL(8, 102, 14), // "columnsRemoved"
QT_MOC_LITERAL(9, 117, 11), // "dataChanged"
QT_MOC_LITERAL(10, 129, 7), // "topLeft"
QT_MOC_LITERAL(11, 137, 11), // "bottomRight"
QT_MOC_LITERAL(12, 149, 17), // "headerDataChanged"
QT_MOC_LITERAL(13, 167, 15), // "Qt::Orientation"
QT_MOC_LITERAL(14, 183, 11), // "orientation"
QT_MOC_LITERAL(15, 195, 5), // "first"
QT_MOC_LITERAL(16, 201, 4), // "last"
QT_MOC_LITERAL(17, 206, 22), // "layoutAboutToBeChanged"
QT_MOC_LITERAL(18, 229, 13), // "layoutChanged"
QT_MOC_LITERAL(19, 243, 19), // "modelAboutToBeReset"
QT_MOC_LITERAL(20, 263, 10), // "modelReset"
QT_MOC_LITERAL(21, 274, 21), // "rowsAboutToBeInserted"
QT_MOC_LITERAL(22, 296, 20), // "rowsAboutToBeRemoved"
QT_MOC_LITERAL(23, 317, 12), // "rowsInserted"
QT_MOC_LITERAL(24, 330, 11) // "rowsRemoved"

    },
    "PictureFlowPrivate\0columnsAboutToBeInserted\0"
    "\0parent\0start\0end\0columnsAboutToBeRemoved\0"
    "columnsInserted\0columnsRemoved\0"
    "dataChanged\0topLeft\0bottomRight\0"
    "headerDataChanged\0Qt::Orientation\0"
    "orientation\0first\0last\0layoutAboutToBeChanged\0"
    "layoutChanged\0modelAboutToBeReset\0"
    "modelReset\0rowsAboutToBeInserted\0"
    "rowsAboutToBeRemoved\0rowsInserted\0"
    "rowsRemoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PictureFlowPrivate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   84,    2, 0x0a /* Public */,
       6,    3,   91,    2, 0x0a /* Public */,
       7,    3,   98,    2, 0x0a /* Public */,
       8,    3,  105,    2, 0x0a /* Public */,
       9,    2,  112,    2, 0x0a /* Public */,
      12,    3,  117,    2, 0x0a /* Public */,
      17,    0,  124,    2, 0x0a /* Public */,
      18,    0,  125,    2, 0x0a /* Public */,
      19,    0,  126,    2, 0x0a /* Public */,
      20,    0,  127,    2, 0x0a /* Public */,
      21,    3,  128,    2, 0x0a /* Public */,
      22,    3,  135,    2, 0x0a /* Public */,
      23,    3,  142,    2, 0x0a /* Public */,
      24,    3,  149,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,   10,   11,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Int, QMetaType::Int,   14,   15,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    3,    4,    5,

       0        // eod
};

void PictureFlowPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PictureFlowPrivate *_t = static_cast<PictureFlowPrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->columnsAboutToBeInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->columnsAboutToBeRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->columnsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->columnsRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->dataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 5: _t->headerDataChanged((*reinterpret_cast< Qt::Orientation(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->layoutAboutToBeChanged(); break;
        case 7: _t->layoutChanged(); break;
        case 8: _t->modelAboutToBeReset(); break;
        case 9: _t->modelReset(); break;
        case 10: _t->rowsAboutToBeInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 11: _t->rowsAboutToBeRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 12: _t->rowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 13: _t->rowsRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject PictureFlowPrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PictureFlowPrivate.data,
      qt_meta_data_PictureFlowPrivate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PictureFlowPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PictureFlowPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PictureFlowPrivate.stringdata0))
        return static_cast<void*>(const_cast< PictureFlowPrivate*>(this));
    return QObject::qt_metacast(_clname);
}

int PictureFlowPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
