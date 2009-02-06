/****************************************************************************
** Meta object code from reading C++ file 'toeventquerytask.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "toeventquerytask.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toeventquerytask.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toEventQueryTask[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      22,   18,   17,   17, 0x05,
      46,   42,   17,   17, 0x05,
      90,   77,   17,   17, 0x05,
     123,  116,   17,   17, 0x05,
     141,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     148,   18,   17,   17, 0x08,
     160,   17,   17,   17, 0x08,
     170,   18,   17,   17, 0x0a,
     181,   17,   17,   17, 0x2a,
     188,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toEventQueryTask[] = {
    "toEventQueryTask\0\0all\0readRequested(bool)\0"
    "msg\0error(toConnection::exception)\0"
    "desc,columns\0headers(toQDescList&,int)\0"
    "values\0data(ValuesList&)\0done()\0"
    "pread(bool)\0timeout()\0read(bool)\0"
    "read()\0close()\0"
};

const QMetaObject toEventQueryTask::staticMetaObject = {
    { &toRunnable::staticMetaObject, qt_meta_stringdata_toEventQueryTask,
      qt_meta_data_toEventQueryTask, 0 }
};

const QMetaObject *toEventQueryTask::metaObject() const
{
    return &staticMetaObject;
}

void *toEventQueryTask::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toEventQueryTask))
	return static_cast<void*>(const_cast< toEventQueryTask*>(this));
    return toRunnable::qt_metacast(_clname);
}

int toEventQueryTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = toRunnable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: readRequested((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: error((*reinterpret_cast< const toConnection::exception(*)>(_a[1]))); break;
        case 2: headers((*reinterpret_cast< toQDescList(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: data((*reinterpret_cast< ValuesList(*)>(_a[1]))); break;
        case 4: done(); break;
        case 5: pread((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: timeout(); break;
        case 7: read((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: read(); break;
        case 9: close(); break;
        }
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void toEventQueryTask::readRequested(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void toEventQueryTask::error(const toConnection::exception & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void toEventQueryTask::headers(toQDescList & _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void toEventQueryTask::data(ValuesList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void toEventQueryTask::done()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
