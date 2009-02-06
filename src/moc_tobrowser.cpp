/****************************************************************************
** Meta object code from reading C++ file 'tobrowser.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tobrowser.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tobrowser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toBrowser[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x0a,
      21,   10,   10,   10, 0x0a,
      34,   10,   10,   10, 0x0a,
      56,   52,   10,   10, 0x0a,
      76,   10,   10,   10, 0x0a,
      91,   52,   10,   10, 0x0a,
     117,   10,   10,   10, 0x0a,
     130,   10,   10,   10, 0x0a,
     144,   10,   10,   10, 0x0a,
     166,  159,   10,   10, 0x0a,
     198,   10,   10,   10, 0x0a,
     210,   10,   10,   10, 0x0a,
     224,   10,   10,   10, 0x0a,
     238,   10,   10,   10, 0x0a,
     249,   10,   10,   10, 0x0a,
     260,   10,   10,   10, 0x0a,
     279,   10,   10,   10, 0x0a,
     293,   10,   10,   10, 0x0a,
     306,   10,   10,   10, 0x0a,
     318,   10,   10,   10, 0x0a,
     334,   10,   10,   10, 0x0a,
     347,   10,   10,   10, 0x0a,
     363,   10,   10,   10, 0x0a,
     378,   10,   10,   10, 0x0a,
     391,   10,   10,   10, 0x0a,
     403,   10,   10,   10, 0x0a,
     422,   10,   10,   10, 0x0a,
     442,   10,   10,   10, 0x0a,
     463,   10,   10,   10, 0x0a,
     481,  476,   10,   10, 0x0a,
     506,  476,   10,   10, 0x0a,
     531,   10,   10,   10, 0x0a,
     541,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toBrowser[] = {
    "toBrowser\0\0refresh()\0updateTabs()\0"
    "changeSchema(int)\0tab\0changeTab(QWidget*)\0"
    "changeSecond()\0changeSecondTab(QWidget*)\0"
    "changeItem()\0clearFilter()\0defineFilter()\0"
    "widget\0windowActivated(QMdiSubWindow*)\0"
    "firstDone()\0focusObject()\0modifyTable()\0"
    "addTable()\0addIndex()\0modifyConstraint()\0"
    "modifyIndex()\0changeType()\0dropTable()\0"
    "truncateTable()\0checkTable()\0"
    "optimizeTable()\0analyzeTable()\0"
    "flushPrivs()\0dropIndex()\0changeConnection()\0"
    "enableConstraints()\0disableConstraints()\0"
    "testDBLink()\0menu\0displayIndexMenu(QMenu*)\0"
    "displayTableMenu(QMenu*)\0addUser()\0"
    "dropUser()\0"
};

const QMetaObject toBrowser::staticMetaObject = {
    { &toToolWidget::staticMetaObject, qt_meta_stringdata_toBrowser,
      qt_meta_data_toBrowser, 0 }
};

const QMetaObject *toBrowser::metaObject() const
{
    return &staticMetaObject;
}

void *toBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toBrowser))
	return static_cast<void*>(const_cast< toBrowser*>(this));
    return toToolWidget::qt_metacast(_clname);
}

int toBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = toToolWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: refresh(); break;
        case 1: updateTabs(); break;
        case 2: changeSchema((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: changeTab((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 4: changeSecond(); break;
        case 5: changeSecondTab((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 6: changeItem(); break;
        case 7: clearFilter(); break;
        case 8: defineFilter(); break;
        case 9: windowActivated((*reinterpret_cast< QMdiSubWindow*(*)>(_a[1]))); break;
        case 10: firstDone(); break;
        case 11: focusObject(); break;
        case 12: modifyTable(); break;
        case 13: addTable(); break;
        case 14: addIndex(); break;
        case 15: modifyConstraint(); break;
        case 16: modifyIndex(); break;
        case 17: changeType(); break;
        case 18: dropTable(); break;
        case 19: truncateTable(); break;
        case 20: checkTable(); break;
        case 21: optimizeTable(); break;
        case 22: analyzeTable(); break;
        case 23: flushPrivs(); break;
        case 24: dropIndex(); break;
        case 25: changeConnection(); break;
        case 26: enableConstraints(); break;
        case 27: disableConstraints(); break;
        case 28: testDBLink(); break;
        case 29: displayIndexMenu((*reinterpret_cast< QMenu*(*)>(_a[1]))); break;
        case 30: displayTableMenu((*reinterpret_cast< QMenu*(*)>(_a[1]))); break;
        case 31: addUser(); break;
        case 32: dropUser(); break;
        }
        _id -= 33;
    }
    return _id;
}
static const uint qt_meta_data_toBrowseTemplate[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x0a,
      39,   17,   17,   17, 0x0a,
      63,   17,   17,   17, 0x0a,
      78,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toBrowseTemplate[] = {
    "toBrowseTemplate\0\0addDatabase(QString)\0"
    "removeDatabase(QString)\0defineFilter()\0"
    "clearFilter()\0"
};

const QMetaObject toBrowseTemplate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_toBrowseTemplate,
      qt_meta_data_toBrowseTemplate, 0 }
};

const QMetaObject *toBrowseTemplate::metaObject() const
{
    return &staticMetaObject;
}

void *toBrowseTemplate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toBrowseTemplate))
	return static_cast<void*>(const_cast< toBrowseTemplate*>(this));
    if (!strcmp(_clname, "toTemplateProvider"))
	return static_cast< toTemplateProvider*>(const_cast< toBrowseTemplate*>(this));
    return QObject::qt_metacast(_clname);
}

int toBrowseTemplate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: addDatabase((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: removeDatabase((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: defineFilter(); break;
        case 3: clearFilter(); break;
        }
        _id -= 4;
    }
    return _id;
}
static const uint qt_meta_data_toBrowseButton[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_toBrowseButton[] = {
    "toBrowseButton\0\0connectionChanged()\0"
};

const QMetaObject toBrowseButton::staticMetaObject = {
    { &QToolButton::staticMetaObject, qt_meta_stringdata_toBrowseButton,
      qt_meta_data_toBrowseButton, 0 }
};

const QMetaObject *toBrowseButton::metaObject() const
{
    return &staticMetaObject;
}

void *toBrowseButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toBrowseButton))
	return static_cast<void*>(const_cast< toBrowseButton*>(this));
    return QToolButton::qt_metacast(_clname);
}

int toBrowseButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: connectionChanged(); break;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_toBrowserTool[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      26,   14,   14,   14, 0x0a,
      42,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toBrowserTool[] = {
    "toBrowserTool\0\0addTable()\0addConstraint()\0"
    "addIndex()\0"
};

const QMetaObject toBrowserTool::staticMetaObject = {
    { &toTool::staticMetaObject, qt_meta_stringdata_toBrowserTool,
      qt_meta_data_toBrowserTool, 0 }
};

const QMetaObject *toBrowserTool::metaObject() const
{
    return &staticMetaObject;
}

void *toBrowserTool::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toBrowserTool))
	return static_cast<void*>(const_cast< toBrowserTool*>(this));
    return toTool::qt_metacast(_clname);
}

int toBrowserTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = toTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: addTable(); break;
        case 1: addConstraint(); break;
        case 2: addIndex(); break;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
