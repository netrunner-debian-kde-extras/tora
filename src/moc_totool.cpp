/****************************************************************************
** Meta object code from reading C++ file 'totool.h'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "totool.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'totool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toTool[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toTool[] = {
    "toTool\0\0createWindow()\0"
};

const QMetaObject toTool::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_toTool,
      qt_meta_data_toTool, 0 }
};

const QMetaObject *toTool::metaObject() const
{
    return &staticMetaObject;
}

void *toTool::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toTool))
	return static_cast<void*>(const_cast< toTool*>(this));
    return QObject::qt_metacast(_clname);
}

int toTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: createWindow(); break;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_toToolWidget[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      33,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_toToolWidget[] = {
    "toToolWidget\0\0connectionChange()\0"
    "parentConnection()\0"
};

const QMetaObject toToolWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_toToolWidget,
      qt_meta_data_toToolWidget, 0 }
};

const QMetaObject *toToolWidget::metaObject() const
{
    return &staticMetaObject;
}

void *toToolWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toToolWidget))
	return static_cast<void*>(const_cast< toToolWidget*>(this));
    if (!strcmp(_clname, "toHelpContext"))
	return static_cast< toHelpContext*>(const_cast< toToolWidget*>(this));
    if (!strcmp(_clname, "toConnectionWidget"))
	return static_cast< toConnectionWidget*>(const_cast< toToolWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int toToolWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: connectionChange(); break;
        case 1: parentConnection(); break;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void toToolWidget::connectionChange()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
