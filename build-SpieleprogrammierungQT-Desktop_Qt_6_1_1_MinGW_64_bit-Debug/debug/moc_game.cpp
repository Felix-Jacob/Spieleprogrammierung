/****************************************************************************
** Meta object code from reading C++ file 'game.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../SpieleprogrammierungQT/game.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'game.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Game_t {
    const uint offsetsAndSize[34];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Game_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Game_t qt_meta_stringdata_Game = {
    {
QT_MOC_LITERAL(0, 4), // "Game"
QT_MOC_LITERAL(5, 18), // "issueConsoleOutput"
QT_MOC_LITERAL(24, 0), // ""
QT_MOC_LITERAL(25, 6), // "output"
QT_MOC_LITERAL(32, 7), // "NewGame"
QT_MOC_LITERAL(40, 10), // "playerName"
QT_MOC_LITERAL(51, 8), // "LoadGame"
QT_MOC_LITERAL(60, 14), // "savepointIndex"
QT_MOC_LITERAL(75, 8), // "SaveGame"
QT_MOC_LITERAL(84, 13), // "HandleCommand"
QT_MOC_LITERAL(98, 7), // "command"
QT_MOC_LITERAL(106, 11), // "ChangeState"
QT_MOC_LITERAL(118, 9), // "stateName"
QT_MOC_LITERAL(128, 14), // "ListSavePoints"
QT_MOC_LITERAL(143, 21), // "ListSavePointsForMenu"
QT_MOC_LITERAL(165, 17), // "SetStateToNewGame"
QT_MOC_LITERAL(183, 21) // "SetStateToInitialLoad"

    },
    "Game\0issueConsoleOutput\0\0output\0NewGame\0"
    "playerName\0LoadGame\0savepointIndex\0"
    "SaveGame\0HandleCommand\0command\0"
    "ChangeState\0stateName\0ListSavePoints\0"
    "ListSavePointsForMenu\0SetStateToNewGame\0"
    "SetStateToInitialLoad"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Game[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   74,    2, 0x06,    0 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   77,    2, 0x0a,    2 /* Public */,
       6,    1,   80,    2, 0x0a,    4 /* Public */,
       8,    0,   83,    2, 0x0a,    6 /* Public */,
       9,    1,   84,    2, 0x0a,    7 /* Public */,
      11,    1,   87,    2, 0x0a,    9 /* Public */,
      13,    0,   90,    2, 0x0a,   11 /* Public */,
      14,    0,   91,    2, 0x0a,   12 /* Public */,
      15,    0,   92,    2, 0x0a,   13 /* Public */,
      16,    0,   93,    2, 0x0a,   14 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Bool, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Game::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Game *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->issueConsoleOutput((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->NewGame((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: { bool _r = _t->LoadGame((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->SaveGame(); break;
        case 4: _t->HandleCommand((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->ChangeState((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->ListSavePoints(); break;
        case 7: _t->ListSavePointsForMenu(); break;
        case 8: _t->SetStateToNewGame(); break;
        case 9: _t->SetStateToInitialLoad(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Game::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Game::issueConsoleOutput)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Game::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Game.offsetsAndSize,
    qt_meta_data_Game,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Game_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Game::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Game::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Game.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Game::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void Game::issueConsoleOutput(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
