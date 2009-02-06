/****************************************************************************
** Meta object code from reading C++ file 'toeditextensions.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "toeditextensions.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toeditextensions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toEditExtensions[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x0a,
      32,   17,   17,   17, 0x0a,
      48,   17,   17,   17, 0x0a,
      66,   17,   17,   17, 0x0a,
      85,   17,   17,   17, 0x0a,
      98,   17,   17,   17, 0x0a,
     113,   17,   17,   17, 0x0a,
     130,   17,   17,   17, 0x0a,
     148,   17,   17,   17, 0x0a,
     164,   17,   17,   17, 0x0a,
     181,   17,   17,   17, 0x0a,
     193,   17,   17,   17, 0x0a,
     205,   17,   17,   17, 0x0a,
     216,   17,   17,   17, 0x0a,
     231,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toEditExtensions[] = {
    "toEditExtensions\0\0indentBlock()\0"
    "deindentBlock()\0autoIndentBlock()\0"
    "autoIndentBuffer()\0quoteBlock()\0"
    "unquoteBlock()\0obfuscateBlock()\0"
    "obfuscateBuffer()\0searchForward()\0"
    "searchBackward()\0upperCase()\0lowerCase()\0"
    "gotoLine()\0autoComplete()\0editEnabled(bool)\0"
};

const QMetaObject toEditExtensions::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_toEditExtensions,
      qt_meta_data_toEditExtensions, 0 }
};

const QMetaObject *toEditExtensions::metaObject() const
{
    return &staticMetaObject;
}

void *toEditExtensions::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toEditExtensions))
	return static_cast<void*>(const_cast< toEditExtensions*>(this));
    if (!strcmp(_clname, "toEditWidget::editHandler"))
	return static_cast< toEditWidget::editHandler*>(const_cast< toEditExtensions*>(this));
    return QObject::qt_metacast(_clname);
}

int toEditExtensions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: indentBlock(); break;
        case 1: deindentBlock(); break;
        case 2: autoIndentBlock(); break;
        case 3: autoIndentBuffer(); break;
        case 4: quoteBlock(); break;
        case 5: unquoteBlock(); break;
        case 6: obfuscateBlock(); break;
        case 7: obfuscateBuffer(); break;
        case 8: searchForward(); break;
        case 9: searchBackward(); break;
        case 10: upperCase(); break;
        case 11: lowerCase(); break;
        case 12: gotoLine(); break;
        case 13: autoComplete(); break;
        case 14: editEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        }
        _id -= 15;
    }
    return _id;
}
static const uint qt_meta_data_toEditExtensionSetup[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x0a,
      36,   21,   21,   21, 0x0a,
      46,   21,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toEditExtensionSetup[] = {
    "toEditExtensionSetup\0\0saveCurrent()\0"
    "changed()\0saveSetting()\0"
};

const QMetaObject toEditExtensionSetup::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_toEditExtensionSetup,
      qt_meta_data_toEditExtensionSetup, 0 }
};

const QMetaObject *toEditExtensionSetup::metaObject() const
{
    return &staticMetaObject;
}

void *toEditExtensionSetup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toEditExtensionSetup))
	return static_cast<void*>(const_cast< toEditExtensionSetup*>(this));
    if (!strcmp(_clname, "Ui::toEditExtensionSetupUI"))
	return static_cast< Ui::toEditExtensionSetupUI*>(const_cast< toEditExtensionSetup*>(this));
    if (!strcmp(_clname, "toSettingTab"))
	return static_cast< toSettingTab*>(const_cast< toEditExtensionSetup*>(this));
    return QWidget::qt_metacast(_clname);
}

int toEditExtensionSetup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: saveCurrent(); break;
        case 1: changed(); break;
        case 2: saveSetting(); break;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
