/****************************************************************************
** Meta object code from reading C++ file 'simple_preferences.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "modules/gui/qt/components/simple_preferences.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simple_preferences.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SPrefsCatList_t {
    QByteArrayData data[4];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SPrefsCatList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SPrefsCatList_t qt_meta_stringdata_SPrefsCatList = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SPrefsCatList"
QT_MOC_LITERAL(1, 14, 18), // "currentItemChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 11) // "switchPanel"

    },
    "SPrefsCatList\0currentItemChanged\0\0"
    "switchPanel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SPrefsCatList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void SPrefsCatList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SPrefsCatList *_t = static_cast<SPrefsCatList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentItemChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->switchPanel((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SPrefsCatList::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SPrefsCatList::currentItemChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SPrefsCatList::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SPrefsCatList.data,
      qt_meta_data_SPrefsCatList,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SPrefsCatList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SPrefsCatList::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SPrefsCatList.stringdata0))
        return static_cast<void*>(const_cast< SPrefsCatList*>(this));
    return QWidget::qt_metacast(_clname);
}

int SPrefsCatList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void SPrefsCatList::currentItemChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_SPrefsPanel_t {
    QByteArrayData data[13];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SPrefsPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SPrefsPanel_t qt_meta_stringdata_SPrefsPanel = {
    {
QT_MOC_LITERAL(0, 0, 11), // "SPrefsPanel"
QT_MOC_LITERAL(1, 12, 14), // "lastfm_Changed"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 18), // "updateVideoOptions"
QT_MOC_LITERAL(4, 47, 18), // "updateAudioOptions"
QT_MOC_LITERAL(5, 66, 17), // "updateAudioVolume"
QT_MOC_LITERAL(6, 84, 11), // "langChanged"
QT_MOC_LITERAL(7, 96, 10), // "assoDialog"
QT_MOC_LITERAL(8, 107, 16), // "updateCheckBoxes"
QT_MOC_LITERAL(9, 124, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(10, 141, 8), // "saveAsso"
QT_MOC_LITERAL(11, 150, 8), // "configML"
QT_MOC_LITERAL(12, 159, 11) // "changeStyle"

    },
    "SPrefsPanel\0lastfm_Changed\0\0"
    "updateVideoOptions\0updateAudioOptions\0"
    "updateAudioVolume\0langChanged\0assoDialog\0"
    "updateCheckBoxes\0QTreeWidgetItem*\0"
    "saveAsso\0configML\0changeStyle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SPrefsPanel[] = {

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
       1,    1,   64,    2, 0x08 /* Private */,
       3,    1,   67,    2, 0x08 /* Private */,
       4,    1,   70,    2, 0x08 /* Private */,
       5,    1,   73,    2, 0x08 /* Private */,
       6,    1,   76,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    2,   80,    2, 0x08 /* Private */,
      10,    0,   85,    2, 0x08 /* Private */,
      11,    0,   86,    2, 0x08 /* Private */,
      12,    1,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void SPrefsPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SPrefsPanel *_t = static_cast<SPrefsPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->lastfm_Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->updateVideoOptions((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->updateAudioOptions((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->updateAudioVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->langChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->assoDialog(); break;
        case 6: _t->updateCheckBoxes((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->saveAsso(); break;
        case 8: _t->configML(); break;
        case 9: _t->changeStyle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SPrefsPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SPrefsPanel.data,
      qt_meta_data_SPrefsPanel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SPrefsPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SPrefsPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SPrefsPanel.stringdata0))
        return static_cast<void*>(const_cast< SPrefsPanel*>(this));
    return QWidget::qt_metacast(_clname);
}

int SPrefsPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
