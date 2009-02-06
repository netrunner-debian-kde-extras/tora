/****************************************************************************
** Meta object code from reading C++ file 'toalert.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "toalert.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toalert.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toAlert[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x0a,
      16,    8,    8,    8, 0x0a,
      23,    8,    8,    8, 0x0a,
      36,   30,    8,    8, 0x0a,
      67,    8,    8,    8, 0x0a,
      73,    8,    8,    8, 0x0a,
      89,   82,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toAlert[] = {
    "toAlert\0\0poll()\0send()\0memo()\0,,str\0"
    "changeMessage(int,int,QString)\0add()\0"
    "remove()\0widget\0windowActivated(QMdiSubWindow*)\0"
};

const QMetaObject toAlert::staticMetaObject = {
    { &toToolWidget::staticMetaObject, qt_meta_stringdata_toAlert,
      qt_meta_data_toAlert, 0 }
};

const QMetaObject *toAlert::metaObject() const
{
    return &staticMetaObject;
}

void *toAlert::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toAlert))
	return static_cast<void*>(const_cast< toAlert*>(this));
    return toToolWidget::qt_metacast(_clname);
}

int toAlert::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = toToolWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: poll(); break;
        case 1: send(); break;
        case 2: memo(); break;
        case 3: changeMessage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 4: add(); break;
        case 5: remove(); break;
        case 6: windowActivated((*reinterpret_cast< QMdiSubWindow*(*)>(_a[1]))); break;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
