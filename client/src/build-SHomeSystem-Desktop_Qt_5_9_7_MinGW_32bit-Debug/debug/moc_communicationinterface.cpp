/****************************************************************************
** Meta object code from reading C++ file 'communicationinterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SHomeSystem/communicationinterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'communicationinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CommunicationInterface_t {
    QByteArrayData data[8];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CommunicationInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CommunicationInterface_t qt_meta_stringdata_CommunicationInterface = {
    {
QT_MOC_LITERAL(0, 0, 22), // "CommunicationInterface"
QT_MOC_LITERAL(1, 23, 13), // "userValidated"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 7), // "isValid"
QT_MOC_LITERAL(4, 46, 12), // "dataReceived"
QT_MOC_LITERAL(5, 59, 8), // "jsonData"
QT_MOC_LITERAL(6, 68, 13), // "handleRequest"
QT_MOC_LITERAL(7, 82, 11) // "requestData"

    },
    "CommunicationInterface\0userValidated\0"
    "\0isValid\0dataReceived\0jsonData\0"
    "handleRequest\0requestData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CommunicationInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QJsonObject,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QJsonObject,    7,

       0        // eod
};

void CommunicationInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CommunicationInterface *_t = static_cast<CommunicationInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->userValidated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->dataReceived((*reinterpret_cast< const QJsonObject(*)>(_a[1]))); break;
        case 2: _t->handleRequest((*reinterpret_cast< const QJsonObject(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (CommunicationInterface::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommunicationInterface::userValidated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CommunicationInterface::*_t)(const QJsonObject & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommunicationInterface::dataReceived)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject CommunicationInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CommunicationInterface.data,
      qt_meta_data_CommunicationInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CommunicationInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CommunicationInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CommunicationInterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CommunicationInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void CommunicationInterface::userValidated(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CommunicationInterface::dataReceived(const QJsonObject & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
