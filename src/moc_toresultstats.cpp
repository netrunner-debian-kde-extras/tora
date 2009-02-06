/****************************************************************************
** Meta object code from reading C++ file 'toresultstats.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "toresultstats.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toresultstats.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toResultStats[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      19,   15,   14,   14, 0x05,
      39,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      68,   63,   14,   14, 0x0a,
      92,   15,   14,   14, 0x0a,
     117,  111,   14,   14, 0x0a,
     136,   14,   14,   14, 0x2a,
     151,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_toResultStats[] = {
    "toResultStats\0\0ses\0sessionChanged(int)\0"
    "sessionChanged(QString)\0conn\0"
    "changeSession(toQuery&)\0changeSession(int)\0"
    "reset\0refreshStats(bool)\0refreshStats()\0"
    "poll()\0"
};

const QMetaObject toResultStats::staticMetaObject = {
    { &toResultView::staticMetaObject, qt_meta_stringdata_toResultStats,
      qt_meta_data_toResultStats, 0 }
};

const QMetaObject *toResultStats::metaObject() const
{
    return &staticMetaObject;
}

void *toResultStats::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toResultStats))
	return static_cast<void*>(const_cast< toResultStats*>(this));
    return toResultView::qt_metacast(_clname);
}

int toResultStats::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = toResultView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: sessionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: sessionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: changeSession((*reinterpret_cast< toQuery(*)>(_a[1]))); break;
        case 3: changeSession((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: refreshStats((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: refreshStats(); break;
        case 6: poll(); break;
        }
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void toResultStats::sessionChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void toResultStats::sessionChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
