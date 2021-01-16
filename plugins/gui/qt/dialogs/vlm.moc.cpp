/****************************************************************************
** Meta object code from reading C++ file 'vlm.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "modules/gui/qt/dialogs/vlm.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vlm.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VLMDialog_t {
    QByteArrayData data[14];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VLMDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VLMDialog_t qt_meta_stringdata_VLMDialog = {
    {
QT_MOC_LITERAL(0, 0, 9), // "VLMDialog"
QT_MOC_LITERAL(1, 10, 13), // "removeVLMItem"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 11), // "VLMAWidget*"
QT_MOC_LITERAL(4, 37, 18), // "startModifyVLMItem"
QT_MOC_LITERAL(5, 56, 10), // "addVLMItem"
QT_MOC_LITERAL(6, 67, 12), // "clearWidgets"
QT_MOC_LITERAL(7, 80, 17), // "saveModifications"
QT_MOC_LITERAL(8, 98, 18), // "showScheduleWidget"
QT_MOC_LITERAL(9, 117, 13), // "selectVLMItem"
QT_MOC_LITERAL(10, 131, 11), // "selectInput"
QT_MOC_LITERAL(11, 143, 12), // "selectOutput"
QT_MOC_LITERAL(12, 156, 13), // "exportVLMConf"
QT_MOC_LITERAL(13, 170, 13) // "importVLMConf"

    },
    "VLMDialog\0removeVLMItem\0\0VLMAWidget*\0"
    "startModifyVLMItem\0addVLMItem\0"
    "clearWidgets\0saveModifications\0"
    "showScheduleWidget\0selectVLMItem\0"
    "selectInput\0selectOutput\0exportVLMConf\0"
    "importVLMConf"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VLMDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x0a /* Public */,
       4,    1,   72,    2, 0x0a /* Public */,
       5,    0,   75,    2, 0x08 /* Private */,
       6,    0,   76,    2, 0x08 /* Private */,
       7,    0,   77,    2, 0x08 /* Private */,
       8,    1,   78,    2, 0x08 /* Private */,
       9,    1,   81,    2, 0x08 /* Private */,
      10,    0,   84,    2, 0x08 /* Private */,
      11,    0,   85,    2, 0x08 /* Private */,
      12,    0,   86,    2, 0x08 /* Private */,
      13,    0,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,

       0        // eod
};

void VLMDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VLMDialog *_t = static_cast<VLMDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->removeVLMItem((*reinterpret_cast< VLMAWidget*(*)>(_a[1]))); break;
        case 1: _t->startModifyVLMItem((*reinterpret_cast< VLMAWidget*(*)>(_a[1]))); break;
        case 2: _t->addVLMItem(); break;
        case 3: _t->clearWidgets(); break;
        case 4: _t->saveModifications(); break;
        case 5: _t->showScheduleWidget((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->selectVLMItem((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->selectInput(); break;
        case 8: _t->selectOutput(); break;
        case 9: { bool _r = _t->exportVLMConf();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->importVLMConf();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< VLMAWidget* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< VLMAWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject VLMDialog::staticMetaObject = {
    { &QVLCFrame::staticMetaObject, qt_meta_stringdata_VLMDialog.data,
      qt_meta_data_VLMDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VLMDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VLMDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VLMDialog.stringdata0))
        return static_cast<void*>(const_cast< VLMDialog*>(this));
    if (!strcmp(_clname, "Singleton<VLMDialog>"))
        return static_cast< Singleton<VLMDialog>*>(const_cast< VLMDialog*>(this));
    return QVLCFrame::qt_metacast(_clname);
}

int VLMDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
struct qt_meta_stringdata_VLMAWidget_t {
    QByteArrayData data[5];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VLMAWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VLMAWidget_t qt_meta_stringdata_VLMAWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "VLMAWidget"
QT_MOC_LITERAL(1, 11, 6), // "modify"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 3), // "del"
QT_MOC_LITERAL(4, 23, 13) // "toggleEnabled"

    },
    "VLMAWidget\0modify\0\0del\0toggleEnabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VLMAWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    1,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void VLMAWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VLMAWidget *_t = static_cast<VLMAWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modify(); break;
        case 1: _t->del(); break;
        case 2: _t->toggleEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject VLMAWidget::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_VLMAWidget.data,
      qt_meta_data_VLMAWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VLMAWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VLMAWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VLMAWidget.stringdata0))
        return static_cast<void*>(const_cast< VLMAWidget*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int VLMAWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_VLMBroadcast_t {
    QByteArrayData data[5];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VLMBroadcast_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VLMBroadcast_t qt_meta_stringdata_VLMBroadcast = {
    {
QT_MOC_LITERAL(0, 0, 12), // "VLMBroadcast"
QT_MOC_LITERAL(1, 13, 4), // "stop"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 15), // "togglePlayPause"
QT_MOC_LITERAL(4, 35, 10) // "toggleLoop"

    },
    "VLMBroadcast\0stop\0\0togglePlayPause\0"
    "toggleLoop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VLMBroadcast[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void VLMBroadcast::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VLMBroadcast *_t = static_cast<VLMBroadcast *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stop(); break;
        case 1: _t->togglePlayPause(); break;
        case 2: _t->toggleLoop(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject VLMBroadcast::staticMetaObject = {
    { &VLMAWidget::staticMetaObject, qt_meta_stringdata_VLMBroadcast.data,
      qt_meta_data_VLMBroadcast,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VLMBroadcast::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VLMBroadcast::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VLMBroadcast.stringdata0))
        return static_cast<void*>(const_cast< VLMBroadcast*>(this));
    return VLMAWidget::qt_metacast(_clname);
}

int VLMBroadcast::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VLMAWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_VLMVod_t {
    QByteArrayData data[1];
    char stringdata0[7];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VLMVod_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VLMVod_t qt_meta_stringdata_VLMVod = {
    {
QT_MOC_LITERAL(0, 0, 6) // "VLMVod"

    },
    "VLMVod"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VLMVod[] = {

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

void VLMVod::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject VLMVod::staticMetaObject = {
    { &VLMAWidget::staticMetaObject, qt_meta_stringdata_VLMVod.data,
      qt_meta_data_VLMVod,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VLMVod::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VLMVod::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VLMVod.stringdata0))
        return static_cast<void*>(const_cast< VLMVod*>(this));
    return VLMAWidget::qt_metacast(_clname);
}

int VLMVod::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VLMAWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_VLMSchedule_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VLMSchedule_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VLMSchedule_t qt_meta_stringdata_VLMSchedule = {
    {
QT_MOC_LITERAL(0, 0, 11) // "VLMSchedule"

    },
    "VLMSchedule"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VLMSchedule[] = {

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

void VLMSchedule::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject VLMSchedule::staticMetaObject = {
    { &VLMAWidget::staticMetaObject, qt_meta_stringdata_VLMSchedule.data,
      qt_meta_data_VLMSchedule,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VLMSchedule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VLMSchedule::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VLMSchedule.stringdata0))
        return static_cast<void*>(const_cast< VLMSchedule*>(this));
    return VLMAWidget::qt_metacast(_clname);
}

int VLMSchedule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VLMAWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
