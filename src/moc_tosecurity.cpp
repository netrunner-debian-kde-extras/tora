/****************************************************************************
** Meta object code from reading C++ file 'tosecurity.h'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tosecurity.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tosecurity.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toSecuritySystem[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      23,   18,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toSecuritySystem[] = {
    "toSecuritySystem\0\0item\0"
    "changed(toTreeWidgetItem*)\0"
};

const QMetaObject toSecuritySystem::staticMetaObject = {
    { &toListView::staticMetaObject, qt_meta_stringdata_toSecuritySystem,
      qt_meta_data_toSecuritySystem, 0 }
};

const QMetaObject *toSecuritySystem::metaObject() const
{
    return &staticMetaObject;
}

void *toSecuritySystem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toSecuritySystem))
	return static_cast<void*>(const_cast< toSecuritySystem*>(this));
    return toListView::qt_metacast(_clname);
}

int toSecuritySystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = toListView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: changed((*reinterpret_cast< toTreeWidgetItem*(*)>(_a[1]))); break;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_toSecurityRoleGrant[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      26,   21,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toSecurityRoleGrant[] = {
    "toSecurityRoleGrant\0\0item\0"
    "changed(toTreeWidgetItem*)\0"
};

const QMetaObject toSecurityRoleGrant::staticMetaObject = {
    { &toListView::staticMetaObject, qt_meta_stringdata_toSecurityRoleGrant,
      qt_meta_data_toSecurityRoleGrant, 0 }
};

const QMetaObject *toSecurityRoleGrant::metaObject() const
{
    return &staticMetaObject;
}

void *toSecurityRoleGrant::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toSecurityRoleGrant))
	return static_cast<void*>(const_cast< toSecurityRoleGrant*>(this));
    return toListView::qt_metacast(_clname);
}

int toSecurityRoleGrant::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = toListView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: changed((*reinterpret_cast< toTreeWidgetItem*(*)>(_a[1]))); break;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_toSecurityObject[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets

       0        // eod
};

static const char qt_meta_stringdata_toSecurityObject[] = {
    "toSecurityObject\0"
};

const QMetaObject toSecurityObject::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_toSecurityObject,
      qt_meta_data_toSecurityObject, 0 }
};

const QMetaObject *toSecurityObject::metaObject() const
{
    return &staticMetaObject;
}

void *toSecurityObject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toSecurityObject))
	return static_cast<void*>(const_cast< toSecurityObject*>(this));
    return QTreeView::qt_metacast(_clname);
}

int toSecurityObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_toSecurity[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      22,   11,   11,   11, 0x0a,
      52,   11,   11,   11, 0x0a,
      66,   11,   11,   11, 0x0a,
      76,   11,   11,   11, 0x0a,
      86,   11,   11,   11, 0x0a,
      93,   11,   11,   11, 0x0a,
     100,   11,   11,   11, 0x0a,
     120,  113,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toSecurity[] = {
    "toSecurity\0\0refresh()\0"
    "changeUser(toTreeWidgetItem*)\0"
    "saveChanges()\0addUser()\0addRole()\0"
    "drop()\0copy()\0displaySQL()\0widget\0"
    "windowActivated(QMdiSubWindow*)\0"
};

const QMetaObject toSecurity::staticMetaObject = {
    { &toToolWidget::staticMetaObject, qt_meta_stringdata_toSecurity,
      qt_meta_data_toSecurity, 0 }
};

const QMetaObject *toSecurity::metaObject() const
{
    return &staticMetaObject;
}

void *toSecurity::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toSecurity))
	return static_cast<void*>(const_cast< toSecurity*>(this));
    return toToolWidget::qt_metacast(_clname);
}

int toSecurity::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = toToolWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: refresh(); break;
        case 1: changeUser((*reinterpret_cast< toTreeWidgetItem*(*)>(_a[1]))); break;
        case 2: saveChanges(); break;
        case 3: addUser(); break;
        case 4: addRole(); break;
        case 5: drop(); break;
        case 6: copy(); break;
        case 7: displaySQL(); break;
        case 8: windowActivated((*reinterpret_cast< QMdiSubWindow*(*)>(_a[1]))); break;
        }
        _id -= 9;
    }
    return _id;
}
static const uint qt_meta_data_toSecurityQuota[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      36,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_toSecurityQuota[] = {
    "toSecurityQuota\0\0changeTablespace()\0"
    "changeSize()\0"
};

const QMetaObject toSecurityQuota::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_toSecurityQuota,
      qt_meta_data_toSecurityQuota, 0 }
};

const QMetaObject *toSecurityQuota::metaObject() const
{
    return &staticMetaObject;
}

void *toSecurityQuota::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toSecurityQuota))
	return static_cast<void*>(const_cast< toSecurityQuota*>(this));
    if (!strcmp(_clname, "Ui::toSecurityQuotaUI"))
	return static_cast< Ui::toSecurityQuotaUI*>(const_cast< toSecurityQuota*>(this));
    return QWidget::qt_metacast(_clname);
}

int toSecurityQuota::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: changeTablespace(); break;
        case 1: changeSize(); break;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
