/****************************************************************************
** Meta object code from reading C++ file 'toanalyze.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "toanalyze.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toanalyze.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toAnalyze[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x0a,
      24,   10,   10,   10, 0x0a,
      45,   10,   10,   10, 0x0a,
      55,   10,   10,   10, 0x0a,
      62,   10,   10,   10, 0x0a,
      69,   10,   10,   10, 0x0a,
      79,   10,   10,   10, 0x0a,
      92,   10,   10,   10, 0x0a,
     104,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toAnalyze[] = {
    "toAnalyze\0\0displaySQL()\0changeOperation(int)\0"
    "execute()\0poll()\0stop()\0refresh()\0"
    "selectPlan()\0fillOwner()\0displayMenu(QMenu*)\0"
};

const QMetaObject toAnalyze::staticMetaObject = {
    { &toToolWidget::staticMetaObject, qt_meta_stringdata_toAnalyze,
      qt_meta_data_toAnalyze, 0 }
};

const QMetaObject *toAnalyze::metaObject() const
{
    return &staticMetaObject;
}

void *toAnalyze::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toAnalyze))
	return static_cast<void*>(const_cast< toAnalyze*>(this));
    return toToolWidget::qt_metacast(_clname);
}

int toAnalyze::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = toToolWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: displaySQL(); break;
        case 1: changeOperation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: execute(); break;
        case 3: poll(); break;
        case 4: stop(); break;
        case 5: refresh(); break;
        case 6: selectPlan(); break;
        case 7: fillOwner(); break;
        case 8: displayMenu((*reinterpret_cast< QMenu*(*)>(_a[1]))); break;
        }
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
