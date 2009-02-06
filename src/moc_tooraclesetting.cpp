/****************************************************************************
** Meta object code from reading C++ file 'tooraclesetting.h'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tooraclesetting.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tooraclesetting.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toOracleSetting[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,
      31,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toOracleSetting[] = {
    "toOracleSetting\0\0saveSetting()\0"
    "createPlanTable()\0"
};

const QMetaObject toOracleSetting::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_toOracleSetting,
      qt_meta_data_toOracleSetting, 0 }
};

const QMetaObject *toOracleSetting::metaObject() const
{
    return &staticMetaObject;
}

void *toOracleSetting::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toOracleSetting))
	return static_cast<void*>(const_cast< toOracleSetting*>(this));
    if (!strcmp(_clname, "Ui::toOracleSettingUI"))
	return static_cast< Ui::toOracleSettingUI*>(const_cast< toOracleSetting*>(this));
    if (!strcmp(_clname, "toSettingTab"))
	return static_cast< toSettingTab*>(const_cast< toOracleSetting*>(this));
    return QWidget::qt_metacast(_clname);
}

int toOracleSetting::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: saveSetting(); break;
        case 1: createPlanTable(); break;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
