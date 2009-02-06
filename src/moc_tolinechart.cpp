/****************************************************************************
** Meta object code from reading C++ file 'tolinechart.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tolinechart.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tolinechart.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toLineChart[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      27,   13,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      66,   12,   12,   12, 0x0a,
      74,   12,   12,   12, 0x0a,
      82,   12,   12,   12, 0x0a,
      94,   12,   12,   12, 0x0a,
     105,   12,   12,   12, 0x08,
     127,   12,   12,   12, 0x08,
     147,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_toLineChart[] = {
    "toLineChart\0\0value,xValues\0"
    "valueAdded(std::list<double>&,QString)\0"
    "clear()\0setup()\0editPrint()\0openCopy()\0"
    "horizontalChange(int)\0verticalChange(int)\0"
    "chartSetup()\0"
};

const QMetaObject toLineChart::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_toLineChart,
      qt_meta_data_toLineChart, 0 }
};

const QMetaObject *toLineChart::metaObject() const
{
    return &staticMetaObject;
}

void *toLineChart::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toLineChart))
	return static_cast<void*>(const_cast< toLineChart*>(this));
    return QWidget::qt_metacast(_clname);
}

int toLineChart::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: valueAdded((*reinterpret_cast< std::list<double>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: clear(); break;
        case 2: setup(); break;
        case 3: editPrint(); break;
        case 4: openCopy(); break;
        case 5: horizontalChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: verticalChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: chartSetup(); break;
        }
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void toLineChart::valueAdded(std::list<double> & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
