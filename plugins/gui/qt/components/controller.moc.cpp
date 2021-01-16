/****************************************************************************
** Meta object code from reading C++ file 'controller.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "modules/gui/qt/components/controller.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'controller.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AbstractController_t {
    QByteArrayData data[7];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AbstractController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AbstractController_t qt_meta_stringdata_AbstractController = {
    {
QT_MOC_LITERAL(0, 0, 18), // "AbstractController"
QT_MOC_LITERAL(1, 19, 11), // "inputExists"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 12), // "inputPlaying"
QT_MOC_LITERAL(4, 45, 17), // "inputIsRecordable"
QT_MOC_LITERAL(5, 63, 20), // "inputIsTrickPlayable"
QT_MOC_LITERAL(6, 84, 9) // "setStatus"

    },
    "AbstractController\0inputExists\0\0"
    "inputPlaying\0inputIsRecordable\0"
    "inputIsTrickPlayable\0setStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AbstractController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       3,    1,   42,    2, 0x06 /* Public */,
       4,    1,   45,    2, 0x06 /* Public */,
       5,    1,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   51,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void AbstractController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AbstractController *_t = static_cast<AbstractController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->inputExists((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->inputPlaying((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->inputIsRecordable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->inputIsTrickPlayable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AbstractController::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractController::inputExists)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AbstractController::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractController::inputPlaying)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AbstractController::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractController::inputIsRecordable)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (AbstractController::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractController::inputIsTrickPlayable)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject AbstractController::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_AbstractController.data,
      qt_meta_data_AbstractController,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AbstractController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AbstractController::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractController.stringdata0))
        return static_cast<void*>(const_cast< AbstractController*>(this));
    return QFrame::qt_metacast(_clname);
}

int AbstractController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void AbstractController::inputExists(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AbstractController::inputPlaying(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AbstractController::inputIsRecordable(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AbstractController::inputIsTrickPlayable(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_AdvControlsWidget_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdvControlsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdvControlsWidget_t qt_meta_stringdata_AdvControlsWidget = {
    {
QT_MOC_LITERAL(0, 0, 17) // "AdvControlsWidget"

    },
    "AdvControlsWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdvControlsWidget[] = {

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

void AdvControlsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject AdvControlsWidget::staticMetaObject = {
    { &AbstractController::staticMetaObject, qt_meta_stringdata_AdvControlsWidget.data,
      qt_meta_data_AdvControlsWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AdvControlsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdvControlsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AdvControlsWidget.stringdata0))
        return static_cast<void*>(const_cast< AdvControlsWidget*>(this));
    return AbstractController::qt_metacast(_clname);
}

int AdvControlsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_InputControlsWidget_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InputControlsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InputControlsWidget_t qt_meta_stringdata_InputControlsWidget = {
    {
QT_MOC_LITERAL(0, 0, 19) // "InputControlsWidget"

    },
    "InputControlsWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InputControlsWidget[] = {

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

void InputControlsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject InputControlsWidget::staticMetaObject = {
    { &AbstractController::staticMetaObject, qt_meta_stringdata_InputControlsWidget.data,
      qt_meta_data_InputControlsWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *InputControlsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InputControlsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_InputControlsWidget.stringdata0))
        return static_cast<void*>(const_cast< InputControlsWidget*>(this));
    return AbstractController::qt_metacast(_clname);
}

int InputControlsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_ControlsWidget_t {
    QByteArrayData data[4];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ControlsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ControlsWidget_t qt_meta_stringdata_ControlsWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ControlsWidget"
QT_MOC_LITERAL(1, 15, 23), // "advancedControlsToggled"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 14) // "toggleAdvanced"

    },
    "ControlsWidget\0advancedControlsToggled\0"
    "\0toggleAdvanced"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ControlsWidget[] = {

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
       3,    0,   27,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void ControlsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ControlsWidget *_t = static_cast<ControlsWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->advancedControlsToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->toggleAdvanced(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ControlsWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ControlsWidget::advancedControlsToggled)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ControlsWidget::staticMetaObject = {
    { &AbstractController::staticMetaObject, qt_meta_stringdata_ControlsWidget.data,
      qt_meta_data_ControlsWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ControlsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ControlsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ControlsWidget.stringdata0))
        return static_cast<void*>(const_cast< ControlsWidget*>(this));
    return AbstractController::qt_metacast(_clname);
}

int ControlsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractController::qt_metacall(_c, _id, _a);
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
void ControlsWidget::advancedControlsToggled(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_FullscreenControllerWidget_t {
    QByteArrayData data[13];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FullscreenControllerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FullscreenControllerWidget_t qt_meta_stringdata_FullscreenControllerWidget = {
    {
QT_MOC_LITERAL(0, 0, 26), // "FullscreenControllerWidget"
QT_MOC_LITERAL(1, 27, 10), // "keyPressed"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 10), // "QKeyEvent*"
QT_MOC_LITERAL(4, 50, 17), // "fullscreenChanged"
QT_MOC_LITERAL(5, 68, 11), // "setVoutList"
QT_MOC_LITERAL(6, 80, 15), // "vout_thread_t**"
QT_MOC_LITERAL(7, 96, 7), // "showFSC"
QT_MOC_LITERAL(8, 104, 11), // "planHideFSC"
QT_MOC_LITERAL(9, 116, 7), // "hideFSC"
QT_MOC_LITERAL(10, 124, 11), // "slowHideFSC"
QT_MOC_LITERAL(11, 136, 10), // "restoreFSC"
QT_MOC_LITERAL(12, 147, 9) // "centerFSC"

    },
    "FullscreenControllerWidget\0keyPressed\0"
    "\0QKeyEvent*\0fullscreenChanged\0setVoutList\0"
    "vout_thread_t**\0showFSC\0planHideFSC\0"
    "hideFSC\0slowHideFSC\0restoreFSC\0centerFSC"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FullscreenControllerWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   65,    2, 0x0a /* Public */,
       7,    0,   70,    2, 0x08 /* Private */,
       8,    0,   71,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    1,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void FullscreenControllerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FullscreenControllerWidget *_t = static_cast<FullscreenControllerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->keyPressed((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 1: _t->fullscreenChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setVoutList((*reinterpret_cast< vout_thread_t**(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->showFSC(); break;
        case 4: _t->planHideFSC(); break;
        case 5: _t->hideFSC(); break;
        case 6: _t->slowHideFSC(); break;
        case 7: _t->restoreFSC(); break;
        case 8: _t->centerFSC((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FullscreenControllerWidget::*_t)(QKeyEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FullscreenControllerWidget::keyPressed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (FullscreenControllerWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FullscreenControllerWidget::fullscreenChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject FullscreenControllerWidget::staticMetaObject = {
    { &AbstractController::staticMetaObject, qt_meta_stringdata_FullscreenControllerWidget.data,
      qt_meta_data_FullscreenControllerWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FullscreenControllerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FullscreenControllerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FullscreenControllerWidget.stringdata0))
        return static_cast<void*>(const_cast< FullscreenControllerWidget*>(this));
    return AbstractController::qt_metacast(_clname);
}

int FullscreenControllerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractController::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void FullscreenControllerWidget::keyPressed(QKeyEvent * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FullscreenControllerWidget::fullscreenChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
