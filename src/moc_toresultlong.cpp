/****************************************************************************
** Meta object code from reading C++ file 'toresultlong.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "toresultlong.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toresultlong.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toResultLong[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      35,   21,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      85,   13,   13,   13, 0x0a,
      92,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toResultLong[] = {
    "toResultLong\0\0done()\0sql,res,error\0"
    "firstResult(QString,toConnection::exception,bool)\0"
    "stop()\0addItem()\0"
};

const QMetaObject toResultLong::staticMetaObject = {
    { &toResultView::staticMetaObject, qt_meta_stringdata_toResultLong,
      qt_meta_data_toResultLong, 0 }
};

const QMetaObject *toResultLong::metaObject() const
{
    return &staticMetaObject;
}

void *toResultLong::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toResultLong))
	return static_cast<void*>(const_cast< toResultLong*>(this));
    return toResultView::qt_metacast(_clname);
}

int toResultLong::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = toResultView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: done(); break;
        case 1: firstResult((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const toConnection::exception(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: stop(); break;
        case 3: addItem(); break;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void toResultLong::done()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void toResultLong::firstResult(const QString & _t1, const toConnection::exception & _t2, bool _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
