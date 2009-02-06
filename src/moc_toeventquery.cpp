/****************************************************************************
** Meta object code from reading C++ file 'toeventquery.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "toeventquery.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toeventquery.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toEventQuery[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      37,   13,   13,   13, 0x05,
      53,   13,   13,   13, 0x05,
      84,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      98,   91,   13,   13, 0x08,
     133,  120,   13,   13, 0x08,
     164,  160,   13,   13, 0x08,
     199,   13,   13,   13, 0x08,
     214,   13,   13,   13, 0x0a,
     221,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toEventQuery[] = {
    "toEventQuery\0\0descriptionAvailable()\0"
    "dataAvailable()\0error(toConnection::exception)\0"
    "done()\0values\0taskData(ValuesList&)\0"
    "desc,columns\0taskDesc(toQDescList&,int)\0"
    "msg\0taskError(toConnection::exception)\0"
    "taskFinished()\0stop()\0readAll()\0"
};

const QMetaObject toEventQuery::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_toEventQuery,
      qt_meta_data_toEventQuery, 0 }
};

const QMetaObject *toEventQuery::metaObject() const
{
    return &staticMetaObject;
}

void *toEventQuery::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toEventQuery))
	return static_cast<void*>(const_cast< toEventQuery*>(this));
    return QObject::qt_metacast(_clname);
}

int toEventQuery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: descriptionAvailable(); break;
        case 1: dataAvailable(); break;
        case 2: error((*reinterpret_cast< const toConnection::exception(*)>(_a[1]))); break;
        case 3: done(); break;
        case 4: taskData((*reinterpret_cast< ValuesList(*)>(_a[1]))); break;
        case 5: taskDesc((*reinterpret_cast< toQDescList(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: taskError((*reinterpret_cast< const toConnection::exception(*)>(_a[1]))); break;
        case 7: taskFinished(); break;
        case 8: stop(); break;
        case 9: readAll(); break;
        }
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void toEventQuery::descriptionAvailable()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void toEventQuery::dataAvailable()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void toEventQuery::error(const toConnection::exception & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void toEventQuery::done()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
