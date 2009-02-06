/****************************************************************************
** Meta object code from reading C++ file 'topiechart.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "topiechart.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'topiechart.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toPieChart[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      26,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      76,   11,   11,   11, 0x0a,
      88,   11,   11,   11, 0x0a,
     103,   99,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toPieChart[] = {
    "toPieChart\0\0values,labels\0"
    "newValues(std::list<double>&,std::list<QString>&)\0"
    "editPrint()\0openCopy()\0pos\0"
    "createPopupMenu(QPoint)\0"
};

const QMetaObject toPieChart::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_toPieChart,
      qt_meta_data_toPieChart, 0 }
};

const QMetaObject *toPieChart::metaObject() const
{
    return &staticMetaObject;
}

void *toPieChart::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toPieChart))
	return static_cast<void*>(const_cast< toPieChart*>(this));
    return QWidget::qt_metacast(_clname);
}

int toPieChart::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: newValues((*reinterpret_cast< std::list<double>(*)>(_a[1])),(*reinterpret_cast< std::list<QString>(*)>(_a[2]))); break;
        case 1: editPrint(); break;
        case 2: openCopy(); break;
        case 3: createPopupMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void toPieChart::newValues(std::list<double> & _t1, std::list<QString> & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_toPieConnector[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      30,   16,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_toPieConnector[] = {
    "toPieConnector\0\0values,labels\0"
    "newValues(std::list<double>&,std::list<QString>&)\0"
};

const QMetaObject toPieConnector::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_toPieConnector,
      qt_meta_data_toPieConnector, 0 }
};

const QMetaObject *toPieConnector::metaObject() const
{
    return &staticMetaObject;
}

void *toPieConnector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toPieConnector))
	return static_cast<void*>(const_cast< toPieConnector*>(this));
    return QObject::qt_metacast(_clname);
}

int toPieConnector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: newValues((*reinterpret_cast< std::list<double>(*)>(_a[1])),(*reinterpret_cast< std::list<QString>(*)>(_a[2]))); break;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
