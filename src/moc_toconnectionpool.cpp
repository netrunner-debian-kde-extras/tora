/****************************************************************************
** Meta object code from reading C++ file 'toconnectionpool.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "toconnectionpool.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toconnectionpool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toConnectionPoolTest[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_toConnectionPoolTest[] = {
    "toConnectionPoolTest\0\0test()\0"
};

const QMetaObject toConnectionPoolTest::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_toConnectionPoolTest,
      qt_meta_data_toConnectionPoolTest, 0 }
};

const QMetaObject *toConnectionPoolTest::metaObject() const
{
    return &staticMetaObject;
}

void *toConnectionPoolTest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toConnectionPoolTest))
	return static_cast<void*>(const_cast< toConnectionPoolTest*>(this));
    return QThread::qt_metacast(_clname);
}

int toConnectionPoolTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: test(); break;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_toConnectionPoolExec[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets

       0        // eod
};

static const char qt_meta_stringdata_toConnectionPoolExec[] = {
    "toConnectionPoolExec\0"
};

const QMetaObject toConnectionPoolExec::staticMetaObject = {
    { &toRunnable::staticMetaObject, qt_meta_stringdata_toConnectionPoolExec,
      qt_meta_data_toConnectionPoolExec, 0 }
};

const QMetaObject *toConnectionPoolExec::metaObject() const
{
    return &staticMetaObject;
}

void *toConnectionPoolExec::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toConnectionPoolExec))
	return static_cast<void*>(const_cast< toConnectionPoolExec*>(this));
    return toRunnable::qt_metacast(_clname);
}

int toConnectionPoolExec::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = toRunnable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_toConnectionPool[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets

       0        // eod
};

static const char qt_meta_stringdata_toConnectionPool[] = {
    "toConnectionPool\0"
};

const QMetaObject toConnectionPool::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_toConnectionPool,
      qt_meta_data_toConnectionPool, 0 }
};

const QMetaObject *toConnectionPool::metaObject() const
{
    return &staticMetaObject;
}

void *toConnectionPool::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toConnectionPool))
	return static_cast<void*>(const_cast< toConnectionPool*>(this));
    return QObject::qt_metacast(_clname);
}

int toConnectionPool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
