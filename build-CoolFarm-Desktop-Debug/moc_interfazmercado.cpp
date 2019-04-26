/****************************************************************************
** Meta object code from reading C++ file 'interfazmercado.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../IIProgra/interfazmercado.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'interfazmercado.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InterfazMercado_t {
    QByteArrayData data[16];
    char stringdata0[267];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InterfazMercado_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InterfazMercado_t qt_meta_stringdata_InterfazMercado = {
    {
QT_MOC_LITERAL(0, 0, 15), // "InterfazMercado"
QT_MOC_LITERAL(1, 16, 10), // "comprarABB"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 11), // "comprarHeap"
QT_MOC_LITERAL(4, 40, 10), // "comprarAVL"
QT_MOC_LITERAL(5, 51, 12), // "comprarBonus"
QT_MOC_LITERAL(6, 64, 14), // "comprarEspanta"
QT_MOC_LITERAL(7, 79, 11), // "ventaFrutos"
QT_MOC_LITERAL(8, 91, 22), // "on_bComprarABB_clicked"
QT_MOC_LITERAL(9, 114, 23), // "on_bComprarHeap_clicked"
QT_MOC_LITERAL(10, 138, 22), // "on_bComprarAVL_clicked"
QT_MOC_LITERAL(11, 161, 24), // "on_bComprarBonus_clicked"
QT_MOC_LITERAL(12, 186, 26), // "on_bComprarEspanta_clicked"
QT_MOC_LITERAL(13, 213, 15), // "venderArbolFila"
QT_MOC_LITERAL(14, 229, 7), // "filaCol"
QT_MOC_LITERAL(15, 237, 29) // "on_bVenderTodosFrutos_clicked"

    },
    "InterfazMercado\0comprarABB\0\0comprarHeap\0"
    "comprarAVL\0comprarBonus\0comprarEspanta\0"
    "ventaFrutos\0on_bComprarABB_clicked\0"
    "on_bComprarHeap_clicked\0on_bComprarAVL_clicked\0"
    "on_bComprarBonus_clicked\0"
    "on_bComprarEspanta_clicked\0venderArbolFila\0"
    "filaCol\0on_bVenderTodosFrutos_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InterfazMercado[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,
       4,    0,   81,    2, 0x06 /* Public */,
       5,    0,   82,    2, 0x06 /* Public */,
       6,    0,   83,    2, 0x06 /* Public */,
       7,    0,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    1,   90,    2, 0x08 /* Private */,
      15,    0,   93,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,

       0        // eod
};

void InterfazMercado::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InterfazMercado *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->comprarABB(); break;
        case 1: _t->comprarHeap(); break;
        case 2: _t->comprarAVL(); break;
        case 3: _t->comprarBonus(); break;
        case 4: _t->comprarEspanta(); break;
        case 5: _t->ventaFrutos(); break;
        case 6: _t->on_bComprarABB_clicked(); break;
        case 7: _t->on_bComprarHeap_clicked(); break;
        case 8: _t->on_bComprarAVL_clicked(); break;
        case 9: _t->on_bComprarBonus_clicked(); break;
        case 10: _t->on_bComprarEspanta_clicked(); break;
        case 11: _t->venderArbolFila((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->on_bVenderTodosFrutos_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InterfazMercado::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InterfazMercado::comprarABB)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (InterfazMercado::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InterfazMercado::comprarHeap)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (InterfazMercado::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InterfazMercado::comprarAVL)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (InterfazMercado::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InterfazMercado::comprarBonus)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (InterfazMercado::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InterfazMercado::comprarEspanta)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (InterfazMercado::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InterfazMercado::ventaFrutos)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject InterfazMercado::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_InterfazMercado.data,
    qt_meta_data_InterfazMercado,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *InterfazMercado::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InterfazMercado::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InterfazMercado.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int InterfazMercado::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void InterfazMercado::comprarABB()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void InterfazMercado::comprarHeap()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void InterfazMercado::comprarAVL()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void InterfazMercado::comprarBonus()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void InterfazMercado::comprarEspanta()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void InterfazMercado::ventaFrutos()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
