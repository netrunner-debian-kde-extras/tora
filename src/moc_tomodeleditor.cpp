/****************************************************************************
** Meta object code from reading C++ file 'tomodeleditor.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tomodeleditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tomodeleditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toModelEditor[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      26,   14,   14,   14, 0x08,
      37,   14,   14,   14, 0x08,
      52,   14,   14,   14, 0x08,
      68,   14,   14,   14, 0x08,
      82,   14,   14,   14, 0x0a,
      90,   14,   14,   14, 0x0a,
     104,   14,   14,   14, 0x0a,
     117,   14,   14,   14, 0x0a,
     134,   14,   14,   14, 0x0a,
     153,  147,   14,   14, 0x0a,
     181,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toModelEditor[] = {
    "toModelEditor\0\0openFile()\0saveFile()\0"
    "readSettings()\0writeSettings()\0"
    "setNull(bool)\0store()\0firstColumn()\0"
    "nextColumn()\0previousColumn()\0"
    "lastColumn()\0index\0changePosition(QModelIndex)\0"
    "setText(QString)\0"
};

const QMetaObject toModelEditor::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_toModelEditor,
      qt_meta_data_toModelEditor, 0 }
};

const QMetaObject *toModelEditor::metaObject() const
{
    return &staticMetaObject;
}

void *toModelEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toModelEditor))
	return static_cast<void*>(const_cast< toModelEditor*>(this));
    return QDialog::qt_metacast(_clname);
}

int toModelEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: openFile(); break;
        case 1: saveFile(); break;
        case 2: readSettings(); break;
        case 3: writeSettings(); break;
        case 4: setNull((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: store(); break;
        case 6: firstColumn(); break;
        case 7: nextColumn(); break;
        case 8: previousColumn(); break;
        case 9: lastColumn(); break;
        case 10: changePosition((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 11: setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        }
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
