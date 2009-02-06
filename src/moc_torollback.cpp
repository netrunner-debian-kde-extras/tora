/****************************************************************************
** Meta object code from reading C++ file 'torollback.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "torollback.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'torollback.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toRollbackDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      22,   18,   17,   17, 0x0a,
      44,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toRollbackDialog[] = {
    "toRollbackDialog\0\0str\0valueChanged(QString)\0"
    "displaySQL()\0"
};

const QMetaObject toRollbackDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_toRollbackDialog,
      qt_meta_data_toRollbackDialog, 0 }
};

const QMetaObject *toRollbackDialog::metaObject() const
{
    return &staticMetaObject;
}

void *toRollbackDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toRollbackDialog))
	return static_cast<void*>(const_cast< toRollbackDialog*>(this));
    if (!strcmp(_clname, "Ui::toRollbackDialogUI"))
	return static_cast< Ui::toRollbackDialogUI*>(const_cast< toRollbackDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int toRollbackDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: valueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: displaySQL(); break;
        }
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_toRollback[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      17,   12,   11,   11, 0x0a,
      52,   12,   11,   11, 0x0a,
      86,   82,   11,   11, 0x0a,
     109,   11,   11,   11, 0x0a,
     125,   11,   11,   11, 0x0a,
     135,   11,   11,   11, 0x0a,
     144,   11,   11,   11, 0x0a,
     154,   11,   11,   11, 0x0a,
     167,   11,   11,   11, 0x0a,
     188,  181,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toRollback[] = {
    "toRollback\0\0item\0changeStatement(toTreeWidgetItem*)\0"
    "changeItem(toTreeWidgetItem*)\0str\0"
    "changeRefresh(QString)\0enableOld(bool)\0"
    "refresh()\0online()\0offline()\0addSegment()\0"
    "dropSegment()\0widget\0"
    "windowActivated(QMdiSubWindow*)\0"
};

const QMetaObject toRollback::staticMetaObject = {
    { &toToolWidget::staticMetaObject, qt_meta_stringdata_toRollback,
      qt_meta_data_toRollback, 0 }
};

const QMetaObject *toRollback::metaObject() const
{
    return &staticMetaObject;
}

void *toRollback::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toRollback))
	return static_cast<void*>(const_cast< toRollback*>(this));
    return toToolWidget::qt_metacast(_clname);
}

int toRollback::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = toToolWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: changeStatement((*reinterpret_cast< toTreeWidgetItem*(*)>(_a[1]))); break;
        case 1: changeItem((*reinterpret_cast< toTreeWidgetItem*(*)>(_a[1]))); break;
        case 2: changeRefresh((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: enableOld((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: refresh(); break;
        case 5: online(); break;
        case 6: offline(); break;
        case 7: addSegment(); break;
        case 8: dropSegment(); break;
        case 9: windowActivated((*reinterpret_cast< QMdiSubWindow*(*)>(_a[1]))); break;
        }
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
