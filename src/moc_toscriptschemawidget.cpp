/****************************************************************************
** Meta object code from reading C++ file 'toscriptschemawidget.h'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "toscriptschemawidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toscriptschemawidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toScriptSchemaWidget[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      26,   22,   21,   21, 0x08,
      48,   22,   21,   21, 0x08,
      71,   66,   21,   21, 0x08,
      94,   66,   21,   21, 0x08,
     119,  117,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_toScriptSchemaWidget[] = {
    "toScriptSchemaWidget\0\0val\0"
    "changeConnection(int)\0changeSchema(int)\0"
    "name\0addConnection(QString)\0"
    "delConnection(QString)\0,\0"
    "objectsView_selectionChanged(QItemSelection,QItemSelection)\0"
};

const QMetaObject toScriptSchemaWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_toScriptSchemaWidget,
      qt_meta_data_toScriptSchemaWidget, 0 }
};

const QMetaObject *toScriptSchemaWidget::metaObject() const
{
    return &staticMetaObject;
}

void *toScriptSchemaWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toScriptSchemaWidget))
	return static_cast<void*>(const_cast< toScriptSchemaWidget*>(this));
    if (!strcmp(_clname, "Ui::toScriptSchemaWidget"))
	return static_cast< Ui::toScriptSchemaWidget*>(const_cast< toScriptSchemaWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int toScriptSchemaWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: changeConnection((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: changeSchema((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: addConnection((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: delConnection((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: objectsView_selectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
