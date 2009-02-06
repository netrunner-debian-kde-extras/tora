/****************************************************************************
** Meta object code from reading C++ file 'tochartmanager.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tochartmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tochartmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toChartReceiver[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      31,   17,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toChartReceiver[] = {
    "toChartReceiver\0\0value,xValues\0"
    "valueAdded(std::list<double>&,QString)\0"
};

const QMetaObject toChartReceiver::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_toChartReceiver,
      qt_meta_data_toChartReceiver, 0 }
};

const QMetaObject *toChartReceiver::metaObject() const
{
    return &staticMetaObject;
}

void *toChartReceiver::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toChartReceiver))
	return static_cast<void*>(const_cast< toChartReceiver*>(this));
    return QObject::qt_metacast(_clname);
}

int toChartReceiver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: valueAdded((*reinterpret_cast< std::list<double>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_toChartManager[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x0a,
      26,   15,   15,   15, 0x0a,
      39,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toChartManager[] = {
    "toChartManager\0\0refresh()\0setupChart()\0"
    "openChart()\0"
};

const QMetaObject toChartManager::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_toChartManager,
      qt_meta_data_toChartManager, 0 }
};

const QMetaObject *toChartManager::metaObject() const
{
    return &staticMetaObject;
}

void *toChartManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toChartManager))
	return static_cast<void*>(const_cast< toChartManager*>(this));
    if (!strcmp(_clname, "toHelpContext"))
	return static_cast< toHelpContext*>(const_cast< toChartManager*>(this));
    return QWidget::qt_metacast(_clname);
}

int toChartManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: refresh(); break;
        case 1: setupChart(); break;
        case 2: openChart(); break;
        }
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_toChartHandler[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x0a,
      30,   24,   15,   15, 0x0a,
      53,   24,   15,   15, 0x0a,
      78,   24,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toChartHandler[] = {
    "toChartHandler\0\0alarm()\0chart\0"
    "addChart(toLineChart*)\0setupChart(toLineChart*)\0"
    "removeChart(toLineChart*)\0"
};

const QMetaObject toChartHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_toChartHandler,
      qt_meta_data_toChartHandler, 0 }
};

const QMetaObject *toChartHandler::metaObject() const
{
    return &staticMetaObject;
}

void *toChartHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toChartHandler))
	return static_cast<void*>(const_cast< toChartHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int toChartHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: alarm(); break;
        case 1: addChart((*reinterpret_cast< toLineChart*(*)>(_a[1]))); break;
        case 2: setupChart((*reinterpret_cast< toLineChart*(*)>(_a[1]))); break;
        case 3: removeChart((*reinterpret_cast< toLineChart*(*)>(_a[1]))); break;
        }
        _id -= 4;
    }
    return _id;
}
static const uint qt_meta_data_toChartSetup[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x0a,
      50,   35,   27,   13, 0x0a,
      77,   13,   13,   13, 0x0a,
      88,   13,   13,   13, 0x0a,
     102,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toChartSetup[] = {
    "toChartSetup\0\0browseFile()\0QString\0"
    "str,persistent\0modifyAlarm(QString,bool&)\0"
    "addAlarm()\0modifyAlarm()\0removeAlarm()\0"
};

const QMetaObject toChartSetup::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_toChartSetup,
      qt_meta_data_toChartSetup, 0 }
};

const QMetaObject *toChartSetup::metaObject() const
{
    return &staticMetaObject;
}

void *toChartSetup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toChartSetup))
	return static_cast<void*>(const_cast< toChartSetup*>(this));
    if (!strcmp(_clname, "Ui::toChartSetupUI"))
	return static_cast< Ui::toChartSetupUI*>(const_cast< toChartSetup*>(this));
    return QDialog::qt_metacast(_clname);
}

int toChartSetup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: browseFile(); break;
        case 1: { QString _r = modifyAlarm((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 2: addAlarm(); break;
        case 3: modifyAlarm(); break;
        case 4: removeAlarm(); break;
        }
        _id -= 5;
    }
    return _id;
}
static const uint qt_meta_data_toChartAlarm[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      18,   14,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toChartAlarm[] = {
    "toChartAlarm\0\0val\0changeValue(int)\0"
};

const QMetaObject toChartAlarm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_toChartAlarm,
      qt_meta_data_toChartAlarm, 0 }
};

const QMetaObject *toChartAlarm::metaObject() const
{
    return &staticMetaObject;
}

void *toChartAlarm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toChartAlarm))
	return static_cast<void*>(const_cast< toChartAlarm*>(this));
    if (!strcmp(_clname, "Ui::toChartAlarmUI"))
	return static_cast< Ui::toChartAlarmUI*>(const_cast< toChartAlarm*>(this));
    return QDialog::qt_metacast(_clname);
}

int toChartAlarm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: changeValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
