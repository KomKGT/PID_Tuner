/****************************************************************************
** Meta object code from reading C++ file 'qmodbus.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/include/qmodbus.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmodbus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QModBus_t {
    QByteArrayData data[42];
    char stringdata0[521];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QModBus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QModBus_t qt_meta_stringdata_QModBus = {
    {
QT_MOC_LITERAL(0, 0, 7), // "QModBus"
QT_MOC_LITERAL(1, 8, 9), // "connected"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 12), // "disconnected"
QT_MOC_LITERAL(4, 32, 5), // "error"
QT_MOC_LITERAL(5, 38, 20), // "QModBus::ModBusError"
QT_MOC_LITERAL(6, 59, 21), // "response_to_read_regs"
QT_MOC_LITERAL(7, 81, 6), // "status"
QT_MOC_LITERAL(8, 88, 21), // "response_to_write_reg"
QT_MOC_LITERAL(9, 110, 22), // "response_to_write_regs"
QT_MOC_LITERAL(10, 133, 11), // "run_connect"
QT_MOC_LITERAL(11, 145, 14), // "run_disconnect"
QT_MOC_LITERAL(12, 160, 13), // "run_read_regs"
QT_MOC_LITERAL(13, 174, 4), // "addr"
QT_MOC_LITERAL(14, 179, 8), // "num_regs"
QT_MOC_LITERAL(15, 188, 9), // "uint16_t*"
QT_MOC_LITERAL(16, 198, 4), // "dest"
QT_MOC_LITERAL(17, 203, 13), // "run_write_reg"
QT_MOC_LITERAL(18, 217, 8), // "uint16_t"
QT_MOC_LITERAL(19, 226, 5), // "value"
QT_MOC_LITERAL(20, 232, 14), // "run_write_regs"
QT_MOC_LITERAL(21, 247, 15), // "const uint16_t*"
QT_MOC_LITERAL(22, 263, 4), // "data"
QT_MOC_LITERAL(23, 268, 7), // "connect"
QT_MOC_LITERAL(24, 276, 10), // "disconnect"
QT_MOC_LITERAL(25, 287, 9), // "read_regs"
QT_MOC_LITERAL(26, 297, 9), // "write_reg"
QT_MOC_LITERAL(27, 307, 10), // "write_regs"
QT_MOC_LITERAL(28, 318, 12), // "lock_connect"
QT_MOC_LITERAL(29, 331, 15), // "lock_disconnect"
QT_MOC_LITERAL(30, 347, 14), // "lock_read_regs"
QT_MOC_LITERAL(31, 362, 14), // "lock_write_reg"
QT_MOC_LITERAL(32, 377, 15), // "lock_write_regs"
QT_MOC_LITERAL(33, 393, 11), // "ModBusError"
QT_MOC_LITERAL(34, 405, 17), // "NoConnectionError"
QT_MOC_LITERAL(35, 423, 11), // "CreateError"
QT_MOC_LITERAL(36, 435, 15), // "ConnectionError"
QT_MOC_LITERAL(37, 451, 13), // "SetSlaveError"
QT_MOC_LITERAL(38, 465, 13), // "ReadRegsError"
QT_MOC_LITERAL(39, 479, 13), // "WriteRegError"
QT_MOC_LITERAL(40, 493, 14), // "WriteRegsError"
QT_MOC_LITERAL(41, 508, 12) // "UnknownError"

    },
    "QModBus\0connected\0\0disconnected\0error\0"
    "QModBus::ModBusError\0response_to_read_regs\0"
    "status\0response_to_write_reg\0"
    "response_to_write_regs\0run_connect\0"
    "run_disconnect\0run_read_regs\0addr\0"
    "num_regs\0uint16_t*\0dest\0run_write_reg\0"
    "uint16_t\0value\0run_write_regs\0"
    "const uint16_t*\0data\0connect\0disconnect\0"
    "read_regs\0write_reg\0write_regs\0"
    "lock_connect\0lock_disconnect\0"
    "lock_read_regs\0lock_write_reg\0"
    "lock_write_regs\0ModBusError\0"
    "NoConnectionError\0CreateError\0"
    "ConnectionError\0SetSlaveError\0"
    "ReadRegsError\0WriteRegError\0WriteRegsError\0"
    "UnknownError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QModBus[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       1,  196, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  119,    2, 0x06 /* Public */,
       3,    0,  120,    2, 0x06 /* Public */,
       4,    1,  121,    2, 0x06 /* Public */,
       6,    1,  124,    2, 0x06 /* Public */,
       8,    1,  127,    2, 0x06 /* Public */,
       9,    1,  130,    2, 0x06 /* Public */,
      10,    0,  133,    2, 0x06 /* Public */,
      11,    0,  134,    2, 0x06 /* Public */,
      12,    3,  135,    2, 0x06 /* Public */,
      17,    2,  142,    2, 0x06 /* Public */,
      20,    3,  147,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      23,    0,  154,    2, 0x0a /* Public */,
      24,    0,  155,    2, 0x0a /* Public */,
      25,    3,  156,    2, 0x0a /* Public */,
      26,    2,  163,    2, 0x0a /* Public */,
      27,    3,  168,    2, 0x0a /* Public */,
      28,    0,  175,    2, 0x09 /* Protected */,
      29,    0,  176,    2, 0x09 /* Protected */,
      30,    3,  177,    2, 0x09 /* Protected */,
      31,    2,  184,    2, 0x09 /* Protected */,
      32,    3,  189,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    4,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 15,   13,   14,   16,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 18,   13,   19,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 21,   13,   14,   22,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 15,   13,   14,   16,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 18,   13,   19,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 21,   13,   14,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 15,   13,   14,   16,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 18,   13,   19,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 21,   13,   14,   22,

 // enums: name, alias, flags, count, data
      33,   33, 0x0,    8,  201,

 // enum data: key, value
      34, uint(QModBus::NoConnectionError),
      35, uint(QModBus::CreateError),
      36, uint(QModBus::ConnectionError),
      37, uint(QModBus::SetSlaveError),
      38, uint(QModBus::ReadRegsError),
      39, uint(QModBus::WriteRegError),
      40, uint(QModBus::WriteRegsError),
      41, uint(QModBus::UnknownError),

       0        // eod
};

void QModBus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QModBus *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->disconnected(); break;
        case 2: _t->error((*reinterpret_cast< QModBus::ModBusError(*)>(_a[1]))); break;
        case 3: _t->response_to_read_regs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->response_to_write_reg((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->response_to_write_regs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->run_connect(); break;
        case 7: _t->run_disconnect(); break;
        case 8: _t->run_read_regs((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< uint16_t*(*)>(_a[3]))); break;
        case 9: _t->run_write_reg((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2]))); break;
        case 10: _t->run_write_regs((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const uint16_t*(*)>(_a[3]))); break;
        case 11: _t->connect(); break;
        case 12: _t->disconnect(); break;
        case 13: _t->read_regs((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< uint16_t*(*)>(_a[3]))); break;
        case 14: _t->write_reg((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2]))); break;
        case 15: _t->write_regs((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const uint16_t*(*)>(_a[3]))); break;
        case 16: _t->lock_connect(); break;
        case 17: _t->lock_disconnect(); break;
        case 18: _t->lock_read_regs((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< uint16_t*(*)>(_a[3]))); break;
        case 19: _t->lock_write_reg((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2]))); break;
        case 20: _t->lock_write_regs((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const uint16_t*(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QModBus::ModBusError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QModBus::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QModBus::connected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QModBus::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QModBus::disconnected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QModBus::*)(QModBus::ModBusError );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QModBus::error)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QModBus::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QModBus::response_to_read_regs)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QModBus::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QModBus::response_to_write_reg)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QModBus::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QModBus::response_to_write_regs)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QModBus::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QModBus::run_connect)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QModBus::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QModBus::run_disconnect)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QModBus::*)(int , int , uint16_t * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QModBus::run_read_regs)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QModBus::*)(int , uint16_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QModBus::run_write_reg)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (QModBus::*)(int , int , const uint16_t * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QModBus::run_write_regs)) {
                *result = 10;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QModBus::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QModBus.data,
    qt_meta_data_QModBus,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QModBus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QModBus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QModBus.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QModBus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void QModBus::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QModBus::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QModBus::error(QModBus::ModBusError _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QModBus::response_to_read_regs(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QModBus::response_to_write_reg(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QModBus::response_to_write_regs(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QModBus::run_connect()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QModBus::run_disconnect()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QModBus::run_read_regs(int _t1, int _t2, uint16_t * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QModBus::run_write_reg(int _t1, uint16_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QModBus::run_write_regs(int _t1, int _t2, const uint16_t * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
struct qt_meta_stringdata_QModBus_TCP_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QModBus_TCP_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QModBus_TCP_t qt_meta_stringdata_QModBus_TCP = {
    {
QT_MOC_LITERAL(0, 0, 11) // "QModBus_TCP"

    },
    "QModBus_TCP"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QModBus_TCP[] = {

 // content:
       8,       // revision
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

void QModBus_TCP::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QModBus_TCP::staticMetaObject = { {
    QMetaObject::SuperData::link<QModBus::staticMetaObject>(),
    qt_meta_stringdata_QModBus_TCP.data,
    qt_meta_data_QModBus_TCP,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QModBus_TCP::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QModBus_TCP::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QModBus_TCP.stringdata0))
        return static_cast<void*>(this);
    return QModBus::qt_metacast(_clname);
}

int QModBus_TCP::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QModBus::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QModBus_RTU_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QModBus_RTU_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QModBus_RTU_t qt_meta_stringdata_QModBus_RTU = {
    {
QT_MOC_LITERAL(0, 0, 11) // "QModBus_RTU"

    },
    "QModBus_RTU"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QModBus_RTU[] = {

 // content:
       8,       // revision
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

void QModBus_RTU::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QModBus_RTU::staticMetaObject = { {
    QMetaObject::SuperData::link<QModBus::staticMetaObject>(),
    qt_meta_stringdata_QModBus_RTU.data,
    qt_meta_data_QModBus_RTU,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QModBus_RTU::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QModBus_RTU::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QModBus_RTU.stringdata0))
        return static_cast<void*>(this);
    return QModBus::qt_metacast(_clname);
}

int QModBus_RTU::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QModBus::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
