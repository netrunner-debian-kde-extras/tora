/****************************************************************************
** Meta object code from reading C++ file 'toplsqleditor.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "toplsqleditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toplsqleditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toPLSQLEditor[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      25,   14,   14,   14, 0x0a,
      39,   14,   14,   14, 0x0a,
      57,   14,   14,   14, 0x0a,
      67,   14,   14,   14, 0x0a,
      96,   94,   14,   14, 0x0a,
     135,   14,   14,   14, 0x0a,
     147,   14,   14,   14, 0x0a,
     159,   14,   14,   14, 0x0a,
     189,   14,   14,   14, 0x0a,
     202,  200,   14,   14, 0x0a,
     234,   14,   14,   14, 0x0a,
     248,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toPLSQLEditor[] = {
    "toPLSQLEditor\0\0compile()\0compileWarn()\0"
    "changeSchema(int)\0refresh()\0"
    "changePackage(QModelIndex)\0,\0"
    "changePackage(QModelIndex,QModelIndex)\0"
    "prevError()\0nextError()\0"
    "showSource(toTreeWidgetItem*)\0newSheet()\0"
    "w\0windowActivated(QMdiSubWindow*)\0"
    "closeEditor()\0closeAllEditor()\0"
};

const QMetaObject toPLSQLEditor::staticMetaObject = {
    { &toToolWidget::staticMetaObject, qt_meta_stringdata_toPLSQLEditor,
      qt_meta_data_toPLSQLEditor, 0 }
};

const QMetaObject *toPLSQLEditor::metaObject() const
{
    return &staticMetaObject;
}

void *toPLSQLEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toPLSQLEditor))
	return static_cast<void*>(const_cast< toPLSQLEditor*>(this));
    return toToolWidget::qt_metacast(_clname);
}

int toPLSQLEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = toToolWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: compile(); break;
        case 1: compileWarn(); break;
        case 2: changeSchema((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: refresh(); break;
        case 4: changePackage((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: changePackage((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 6: prevError(); break;
        case 7: nextError(); break;
        case 8: showSource((*reinterpret_cast< toTreeWidgetItem*(*)>(_a[1]))); break;
        case 9: newSheet(); break;
        case 10: windowActivated((*reinterpret_cast< QMdiSubWindow*(*)>(_a[1]))); break;
        case 11: closeEditor(); break;
        case 12: closeAllEditor(); break;
        }
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
