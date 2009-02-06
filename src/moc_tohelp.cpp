/****************************************************************************
** Meta object code from reading C++ file 'tohelp.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tohelp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tohelp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toHelpTool[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toHelpTool[] = {
    "toHelpTool\0\0displayHelp()\0"
};

const QMetaObject toHelpTool::staticMetaObject = {
    { &toTool::staticMetaObject, qt_meta_stringdata_toHelpTool,
      qt_meta_data_toHelpTool, 0 }
};

const QMetaObject *toHelpTool::metaObject() const
{
    return &staticMetaObject;
}

void *toHelpTool::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toHelpTool))
	return static_cast<void*>(const_cast< toHelpTool*>(this));
    return toTool::qt_metacast(_clname);
}

int toHelpTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = toTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: displayHelp(); break;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_toHelp[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x08,
      17,    7,    7,    7, 0x08,
      41,   35,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_toHelp[] = {
    "toHelp\0\0search()\0removeSelection()\0"
    "item,\0changeContent(QTreeWidgetItem*,QTreeWidgetItem*)\0"
};

const QMetaObject toHelp::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_toHelp,
      qt_meta_data_toHelp, 0 }
};

const QMetaObject *toHelp::metaObject() const
{
    return &staticMetaObject;
}

void *toHelp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toHelp))
	return static_cast<void*>(const_cast< toHelp*>(this));
    if (!strcmp(_clname, "Ui::toHelp"))
	return static_cast< Ui::toHelp*>(const_cast< toHelp*>(this));
    return QDialog::qt_metacast(_clname);
}

int toHelp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: search(); break;
        case 1: removeSelection(); break;
        case 2: changeContent((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
