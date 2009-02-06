/****************************************************************************
** Meta object code from reading C++ file 'toworksheet.h'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "toworksheet.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toworksheet.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toWorksheet[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      29,   12,   24,   12, 0x0a,
      37,   12,   12,   12, 0x0a,
      57,   12,   12,   12, 0x0a,
      67,   12,   12,   12, 0x0a,
      77,   12,   12,   12, 0x0a,
      88,   12,   12,   12, 0x0a,
     101,   12,   12,   12, 0x0a,
     115,   12,   12,   12, 0x0a,
     132,   12,   12,   12, 0x0a,
     143,   12,   12,   12, 0x0a,
     160,   12,   12,   12, 0x0a,
     180,  178,   12,   12, 0x0a,
     212,   12,   12,   12, 0x0a,
     224,   12,   12,   12, 0x0a,
     246,   12,   12,   12, 0x0a,
     260,   12,   12,   12, 0x0a,
     278,   12,   12,   12, 0x0a,
     296,   12,   12,   12, 0x0a,
     308,   12,   12,   12, 0x0a,
     330,   12,   12,   12, 0x0a,
     353,   12,   12,   12, 0x0a,
     375,   12,   12,   12, 0x0a,
     396,   12,   12,   12, 0x0a,
     413,   12,   12,   12, 0x0a,
     443,  426,   12,   12, 0x0a,
     488,   12,   12,   12, 0x0a,
     511,   12,   12,   12, 0x0a,
     522,   12,   12,   12, 0x0a,
     539,   12,   12,   12, 0x0a,
     554,   12,   12,   12, 0x0a,
     565,  561,   12,   12, 0x0a,
     589,   12,   12,   12, 0x0a,
     602,   12,   12,   12, 0x08,
     609,   12,   12,   12, 0x08,
     631,  628,   12,   12, 0x08,
     683,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_toWorksheet[] = {
    "toWorksheet\0\0executed()\0bool\0close()\0"
    "connectionChanged()\0refresh()\0execute()\0"
    "parseAll()\0executeAll()\0executeStep()\0"
    "executeNewline()\0describe()\0"
    "eraseLogButton()\0changeResult(int)\0w\0"
    "windowActivated(QMdiSubWindow*)\0"
    "queryDone()\0enableStatistic(bool)\0"
    "explainPlan()\0toggleStatistic()\0"
    "showInsertSaved()\0showSaved()\0"
    "insertSaved(QAction*)\0executeSaved(QAction*)\0"
    "removeSaved(QAction*)\0executePreviousLog()\0"
    "executeNextLog()\0executeLog()\0"
    "sql,result,error\0"
    "addLog(QString,toConnection::exception,bool)\0"
    "changeRefresh(QString)\0saveLast()\0"
    "saveStatistics()\0refreshSetup()\0stop()\0"
    "pos\0createPopupMenu(QPoint)\0setCaption()\0"
    "poll()\0changeConnection()\0,,\0"
    "unhideResults(QString,toConnection::exception,bool)\0"
    "unhideResults()\0"
};

const QMetaObject toWorksheet::staticMetaObject = {
    { &toToolWidget::staticMetaObject, qt_meta_stringdata_toWorksheet,
      qt_meta_data_toWorksheet, 0 }
};

const QMetaObject *toWorksheet::metaObject() const
{
    return &staticMetaObject;
}

void *toWorksheet::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toWorksheet))
	return static_cast<void*>(const_cast< toWorksheet*>(this));
    return toToolWidget::qt_metacast(_clname);
}

int toWorksheet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = toToolWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: executed(); break;
        case 1: { bool _r = close();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: connectionChanged(); break;
        case 3: refresh(); break;
        case 4: execute(); break;
        case 5: parseAll(); break;
        case 6: executeAll(); break;
        case 7: executeStep(); break;
        case 8: executeNewline(); break;
        case 9: describe(); break;
        case 10: eraseLogButton(); break;
        case 11: changeResult((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: windowActivated((*reinterpret_cast< QMdiSubWindow*(*)>(_a[1]))); break;
        case 13: queryDone(); break;
        case 14: enableStatistic((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: explainPlan(); break;
        case 16: toggleStatistic(); break;
        case 17: showInsertSaved(); break;
        case 18: showSaved(); break;
        case 19: insertSaved((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 20: executeSaved((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 21: removeSaved((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 22: executePreviousLog(); break;
        case 23: executeNextLog(); break;
        case 24: executeLog(); break;
        case 25: addLog((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const toConnection::exception(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 26: changeRefresh((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: saveLast(); break;
        case 28: saveStatistics(); break;
        case 29: refreshSetup(); break;
        case 30: stop(); break;
        case 31: createPopupMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 32: setCaption(); break;
        case 33: poll(); break;
        case 34: changeConnection(); break;
        case 35: unhideResults((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const toConnection::exception(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 36: unhideResults(); break;
        }
        _id -= 37;
    }
    return _id;
}

// SIGNAL 0
void toWorksheet::executed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_toWorksheetSetup[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toWorksheetSetup[] = {
    "toWorksheetSetup\0\0chooseFile()\0"
};

const QMetaObject toWorksheetSetup::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_toWorksheetSetup,
      qt_meta_data_toWorksheetSetup, 0 }
};

const QMetaObject *toWorksheetSetup::metaObject() const
{
    return &staticMetaObject;
}

void *toWorksheetSetup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toWorksheetSetup))
	return static_cast<void*>(const_cast< toWorksheetSetup*>(this));
    if (!strcmp(_clname, "Ui::toWorksheetSetupUI"))
	return static_cast< Ui::toWorksheetSetupUI*>(const_cast< toWorksheetSetup*>(this));
    if (!strcmp(_clname, "toSettingTab"))
	return static_cast< toSettingTab*>(const_cast< toWorksheetSetup*>(this));
    return QWidget::qt_metacast(_clname);
}

int toWorksheetSetup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: chooseFile(); break;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
