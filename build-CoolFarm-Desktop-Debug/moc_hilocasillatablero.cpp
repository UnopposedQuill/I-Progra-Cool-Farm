/****************************************************************************
** Meta object code from reading C++ file 'hilocasillatablero.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../IIProgra/hilocasillatablero.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hilocasillatablero.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HiloCasillaTablero_t {
    QByteArrayData data[8];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HiloCasillaTablero_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HiloCasillaTablero_t qt_meta_stringdata_HiloCasillaTablero = {
    {
QT_MOC_LITERAL(0, 0, 18), // "HiloCasillaTablero"
QT_MOC_LITERAL(1, 19, 22), // "aumentarCantidadFrutos"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 17), // "actualizarMercado"
QT_MOC_LITERAL(4, 61, 12), // "anadirCuervo"
QT_MOC_LITERAL(5, 74, 11), // "anadirOveja"
QT_MOC_LITERAL(6, 86, 11), // "anadirPlaga"
QT_MOC_LITERAL(7, 98, 14) // "espantarPlagas"

    },
    "HiloCasillaTablero\0aumentarCantidadFrutos\0"
    "\0actualizarMercado\0anadirCuervo\0"
    "anadirOveja\0anadirPlaga\0espantarPlagas"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HiloCasillaTablero[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,
       6,    0,   48,    2, 0x06 /* Public */,
       7,    0,   49,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HiloCasillaTablero::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HiloCasillaTablero *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->aumentarCantidadFrutos(); break;
        case 1: _t->actualizarMercado(); break;
        case 2: _t->anadirCuervo(); break;
        case 3: _t->anadirOveja(); break;
        case 4: _t->anadirPlaga(); break;
        case 5: _t->espantarPlagas(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HiloCasillaTablero::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HiloCasillaTablero::aumentarCantidadFrutos)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (HiloCasillaTablero::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HiloCasillaTablero::actualizarMercado)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (HiloCasillaTablero::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HiloCasillaTablero::anadirCuervo)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (HiloCasillaTablero::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HiloCasillaTablero::anadirOveja)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (HiloCasillaTablero::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HiloCasillaTablero::anadirPlaga)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (HiloCasillaTablero::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HiloCasillaTablero::espantarPlagas)) {
                *result = 5;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject HiloCasillaTablero::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_HiloCasillaTablero.data,
    qt_meta_data_HiloCasillaTablero,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HiloCasillaTablero::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HiloCasillaTablero::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HiloCasillaTablero.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int HiloCasillaTablero::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void HiloCasillaTablero::aumentarCantidadFrutos()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void HiloCasillaTablero::actualizarMercado()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void HiloCasillaTablero::anadirCuervo()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void HiloCasillaTablero::anadirOveja()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void HiloCasillaTablero::anadirPlaga()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void HiloCasillaTablero::espantarPlagas()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
