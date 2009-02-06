/****************************************************************************
** Meta object code from reading C++ file 'totuning.h'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "totuning.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'totuning.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toTuningFileIO[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x0a,
      30,   26,   15,   15, 0x0a,
      48,   15,   15,   15, 0x0a,
      67,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toTuningFileIO[] = {
    "toTuningFileIO\0\0refresh()\0val\0"
    "changeCharts(int)\0changeConnection()\0"
    "poll()\0"
};

const QMetaObject toTuningFileIO::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_toTuningFileIO,
      qt_meta_data_toTuningFileIO, 0 }
};

const QMetaObject *toTuningFileIO::metaObject() const
{
    return &staticMetaObject;
}

void *toTuningFileIO::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toTuningFileIO))
	return static_cast<void*>(const_cast< toTuningFileIO*>(this));
    return QWidget::qt_metacast(_clname);
}

int toTuningFileIO::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: refresh(); break;
        case 1: changeCharts((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: changeConnection(); break;
        case 3: poll(); break;
        }
        _id -= 4;
    }
    return _id;
}
static const uint qt_meta_data_toTuningOverview[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x0a,
      28,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toTuningOverview[] = {
    "toTuningOverview\0\0refresh()\0poll()\0"
};

const QMetaObject toTuningOverview::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_toTuningOverview,
      qt_meta_data_toTuningOverview, 0 }
};

const QMetaObject *toTuningOverview::metaObject() const
{
    return &staticMetaObject;
}

void *toTuningOverview::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toTuningOverview))
	return static_cast<void*>(const_cast< toTuningOverview*>(this));
    if (!strcmp(_clname, "Ui::toTuningOverviewUI"))
	return static_cast< Ui::toTuningOverviewUI*>(const_cast< toTuningOverview*>(this));
    return QWidget::qt_metacast(_clname);
}

int toTuningOverview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: refresh(); break;
        case 1: poll(); break;
        }
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_toTuning[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x0a,
      20,    9,    9,    9, 0x0a,
      39,   35,    9,    9, 0x0a,
      69,   62,    9,    9, 0x0a,
     101,    9,    9,    9, 0x0a,
     115,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toTuning[] = {
    "toTuning\0\0refresh()\0changeTab(int)\0"
    "str\0changeRefresh(QString)\0widget\0"
    "windowActivated(QMdiSubWindow*)\0"
    "showTabMenu()\0enableTabMenu(QAction*)\0"
};

const QMetaObject toTuning::staticMetaObject = {
    { &toToolWidget::staticMetaObject, qt_meta_stringdata_toTuning,
      qt_meta_data_toTuning, 0 }
};

const QMetaObject *toTuning::metaObject() const
{
    return &staticMetaObject;
}

void *toTuning::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toTuning))
	return static_cast<void*>(const_cast< toTuning*>(this));
    return toToolWidget::qt_metacast(_clname);
}

int toTuning::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = toToolWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: refresh(); break;
        case 1: changeTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: changeRefresh((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: windowActivated((*reinterpret_cast< QMdiSubWindow*(*)>(_a[1]))); break;
        case 4: showTabMenu(); break;
        case 5: enableTabMenu((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
