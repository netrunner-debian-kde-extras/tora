/****************************************************************************
** Meta object code from reading C++ file 'totabwidget.h'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "totabwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'totabwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toTabWidget[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      47,   41,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_toTabWidget[] = {
    "toTabWidget\0\0currentTabChanged(QWidget*)\0"
    "index\0tabChanged(int)\0"
};

const QMetaObject toTabWidget::staticMetaObject = {
    { &QTabWidget::staticMetaObject, qt_meta_stringdata_toTabWidget,
      qt_meta_data_toTabWidget, 0 }
};

const QMetaObject *toTabWidget::metaObject() const
{
    return &staticMetaObject;
}

void *toTabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toTabWidget))
	return static_cast<void*>(const_cast< toTabWidget*>(this));
    return QTabWidget::qt_metacast(_clname);
}

int toTabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: currentTabChanged((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 1: tabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void toTabWidget::currentTabChanged(QWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
