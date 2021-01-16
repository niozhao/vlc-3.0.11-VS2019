/****************************************************************************
** Meta object code from reading C++ file 'actions_manager.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "modules/gui/qt/actions_manager.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'actions_manager.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ActionsManager_t {
    QByteArrayData data[24];
    char stringdata0[315];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ActionsManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ActionsManager_t qt_meta_stringdata_ActionsManager = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ActionsManager"
QT_MOC_LITERAL(1, 15, 17), // "rendererItemAdded"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 20), // "vlc_renderer_item_t*"
QT_MOC_LITERAL(4, 55, 19), // "rendererItemRemoved"
QT_MOC_LITERAL(5, 75, 15), // "toggleMuteAudio"
QT_MOC_LITERAL(6, 91, 7), // "AudioUp"
QT_MOC_LITERAL(7, 99, 9), // "AudioDown"
QT_MOC_LITERAL(8, 109, 4), // "play"
QT_MOC_LITERAL(9, 114, 6), // "record"
QT_MOC_LITERAL(10, 121, 11), // "skipForward"
QT_MOC_LITERAL(11, 133, 12), // "skipBackward"
QT_MOC_LITERAL(12, 146, 17), // "StartRendererScan"
QT_MOC_LITERAL(13, 164, 21), // "RendererMenuCountdown"
QT_MOC_LITERAL(14, 186, 16), // "StopRendererScan"
QT_MOC_LITERAL(15, 203, 16), // "RendererSelected"
QT_MOC_LITERAL(16, 220, 8), // "QAction*"
QT_MOC_LITERAL(17, 229, 19), // "onRendererItemAdded"
QT_MOC_LITERAL(18, 249, 21), // "onRendererItemRemoved"
QT_MOC_LITERAL(19, 271, 10), // "fullscreen"
QT_MOC_LITERAL(20, 282, 8), // "snapshot"
QT_MOC_LITERAL(21, 291, 8), // "playlist"
QT_MOC_LITERAL(22, 300, 5), // "frame"
QT_MOC_LITERAL(23, 306, 8) // "doAction"

    },
    "ActionsManager\0rendererItemAdded\0\0"
    "vlc_renderer_item_t*\0rendererItemRemoved\0"
    "toggleMuteAudio\0AudioUp\0AudioDown\0"
    "play\0record\0skipForward\0skipBackward\0"
    "StartRendererScan\0RendererMenuCountdown\0"
    "StopRendererScan\0RendererSelected\0"
    "QAction*\0onRendererItemAdded\0"
    "onRendererItemRemoved\0fullscreen\0"
    "snapshot\0playlist\0frame\0doAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActionsManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  114,    2, 0x06 /* Public */,
       4,    1,  117,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,  120,    2, 0x0a /* Public */,
       6,    0,  121,    2, 0x0a /* Public */,
       7,    0,  122,    2, 0x0a /* Public */,
       8,    0,  123,    2, 0x0a /* Public */,
       9,    0,  124,    2, 0x0a /* Public */,
      10,    0,  125,    2, 0x0a /* Public */,
      11,    0,  126,    2, 0x0a /* Public */,
      12,    0,  127,    2, 0x0a /* Public */,
      13,    0,  128,    2, 0x0a /* Public */,
      14,    0,  129,    2, 0x0a /* Public */,
      15,    1,  130,    2, 0x0a /* Public */,
      17,    1,  133,    2, 0x09 /* Protected */,
      18,    1,  136,    2, 0x09 /* Protected */,
      19,    0,  139,    2, 0x09 /* Protected */,
      20,    0,  140,    2, 0x09 /* Protected */,
      21,    0,  141,    2, 0x09 /* Protected */,
      22,    0,  142,    2, 0x09 /* Protected */,
      23,    1,  143,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void ActionsManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ActionsManager *_t = static_cast<ActionsManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rendererItemAdded((*reinterpret_cast< vlc_renderer_item_t*(*)>(_a[1]))); break;
        case 1: _t->rendererItemRemoved((*reinterpret_cast< vlc_renderer_item_t*(*)>(_a[1]))); break;
        case 2: _t->toggleMuteAudio(); break;
        case 3: _t->AudioUp(); break;
        case 4: _t->AudioDown(); break;
        case 5: _t->play(); break;
        case 6: _t->record(); break;
        case 7: _t->skipForward(); break;
        case 8: _t->skipBackward(); break;
        case 9: _t->StartRendererScan(); break;
        case 10: _t->RendererMenuCountdown(); break;
        case 11: _t->StopRendererScan(); break;
        case 12: _t->RendererSelected((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 13: _t->onRendererItemAdded((*reinterpret_cast< vlc_renderer_item_t*(*)>(_a[1]))); break;
        case 14: _t->onRendererItemRemoved((*reinterpret_cast< vlc_renderer_item_t*(*)>(_a[1]))); break;
        case 15: _t->fullscreen(); break;
        case 16: _t->snapshot(); break;
        case 17: _t->playlist(); break;
        case 18: _t->frame(); break;
        case 19: _t->doAction((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ActionsManager::*_t)(vlc_renderer_item_t * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ActionsManager::rendererItemAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ActionsManager::*_t)(vlc_renderer_item_t * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ActionsManager::rendererItemRemoved)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject ActionsManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ActionsManager.data,
      qt_meta_data_ActionsManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ActionsManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActionsManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ActionsManager.stringdata0))
        return static_cast<void*>(const_cast< ActionsManager*>(this));
    if (!strcmp(_clname, "Singleton<ActionsManager>"))
        return static_cast< Singleton<ActionsManager>*>(const_cast< ActionsManager*>(this));
    return QObject::qt_metacast(_clname);
}

int ActionsManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void ActionsManager::rendererItemAdded(vlc_renderer_item_t * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ActionsManager::rendererItemRemoved(vlc_renderer_item_t * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
