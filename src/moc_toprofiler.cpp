/****************************************************************************
** Meta object code from reading C++ file 'toprofiler.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "toprofiler.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toprofiler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toProfiler[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      22,   11,   11,   11, 0x0a,
      34,   11,   11,   11, 0x0a,
      44,   11,   11,   11, 0x0a,
      59,   11,   11,   11, 0x0a,
      72,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toProfiler[] = {
    "toProfiler\0\0refresh()\0changeRun()\0"
    "execute()\0changeObject()\0calcTotals()\0"
    "noTables()\0"
};

const QMetaObject toProfiler::staticMetaObject = {
    { &toToolWidget::staticMetaObject, qt_meta_stringdata_toProfiler,
      qt_meta_data_toProfiler, 0 }
};

const QMetaObject *toProfiler::metaObject() const
{
    return &staticMetaObject;
}

void *toProfiler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toProfiler))
	return static_cast<void*>(const_cast< toProfiler*>(this));
    return toToolWidget::qt_metacast(_clname);
}

int toProfiler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = toToolWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: refresh(); break;
        case 1: changeRun(); break;
        case 2: execute(); break;
        case 3: changeObject(); break;
        case 4: calcTotals(); break;
        case 5: noTables(); break;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
