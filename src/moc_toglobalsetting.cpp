/****************************************************************************
** Meta object code from reading C++ file 'toglobalsetting.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "toglobalsetting.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toglobalsetting.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toGlobalSetting[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,
      31,   16,   16,   16, 0x0a,
      46,   16,   16,   16, 0x0a,
      58,   16,   16,   16, 0x0a,
      71,   16,   16,   16, 0x0a,
      87,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toGlobalSetting[] = {
    "toGlobalSetting\0\0saveSetting()\0"
    "pluginBrowse()\0sqlBrowse()\0helpBrowse()\0"
    "sessionBrowse()\0cacheBrowse()\0"
};

const QMetaObject toGlobalSetting::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_toGlobalSetting,
      qt_meta_data_toGlobalSetting, 0 }
};

const QMetaObject *toGlobalSetting::metaObject() const
{
    return &staticMetaObject;
}

void *toGlobalSetting::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toGlobalSetting))
	return static_cast<void*>(const_cast< toGlobalSetting*>(this));
    if (!strcmp(_clname, "Ui::toGlobalSettingUI"))
	return static_cast< Ui::toGlobalSettingUI*>(const_cast< toGlobalSetting*>(this));
    if (!strcmp(_clname, "toSettingTab"))
	return static_cast< toSettingTab*>(const_cast< toGlobalSetting*>(this));
    return QWidget::qt_metacast(_clname);
}

int toGlobalSetting::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: saveSetting(); break;
        case 1: pluginBrowse(); break;
        case 2: sqlBrowse(); break;
        case 3: helpBrowse(); break;
        case 4: sessionBrowse(); break;
        case 5: cacheBrowse(); break;
        }
        _id -= 6;
    }
    return _id;
}
static const uint qt_meta_data_toDatabaseSetting[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x0a,
      33,   18,   18,   18, 0x0a,
      54,   18,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toDatabaseSetting[] = {
    "toDatabaseSetting\0\0saveSetting()\0"
    "numberFormatChange()\0IndicateEmptyColor_clicked()\0"
};

const QMetaObject toDatabaseSetting::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_toDatabaseSetting,
      qt_meta_data_toDatabaseSetting, 0 }
};

const QMetaObject *toDatabaseSetting::metaObject() const
{
    return &staticMetaObject;
}

void *toDatabaseSetting::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toDatabaseSetting))
	return static_cast<void*>(const_cast< toDatabaseSetting*>(this));
    if (!strcmp(_clname, "Ui::toDatabaseSettingUI"))
	return static_cast< Ui::toDatabaseSettingUI*>(const_cast< toDatabaseSetting*>(this));
    if (!strcmp(_clname, "toSettingTab"))
	return static_cast< toSettingTab*>(const_cast< toDatabaseSetting*>(this));
    return QWidget::qt_metacast(_clname);
}

int toDatabaseSetting::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: saveSetting(); break;
        case 1: numberFormatChange(); break;
        case 2: IndicateEmptyColor_clicked(); break;
        }
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_toToolSetting[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      29,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toToolSetting[] = {
    "toToolSetting\0\0saveSetting()\0"
    "changeEnable()\0"
};

const QMetaObject toToolSetting::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_toToolSetting,
      qt_meta_data_toToolSetting, 0 }
};

const QMetaObject *toToolSetting::metaObject() const
{
    return &staticMetaObject;
}

void *toToolSetting::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toToolSetting))
	return static_cast<void*>(const_cast< toToolSetting*>(this));
    if (!strcmp(_clname, "Ui::toToolSettingUI"))
	return static_cast< Ui::toToolSettingUI*>(const_cast< toToolSetting*>(this));
    if (!strcmp(_clname, "toSettingTab"))
	return static_cast< toSettingTab*>(const_cast< toToolSetting*>(this));
    return QWidget::qt_metacast(_clname);
}

int toToolSetting::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: saveSetting(); break;
        case 1: changeEnable(); break;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
