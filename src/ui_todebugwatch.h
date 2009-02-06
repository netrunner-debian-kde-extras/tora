/********************************************************************************
** Form generated from reading ui file 'todebugwatch.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TODEBUGWATCH_H
#define UI_TODEBUGWATCH_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_toDebugWatchUI
{
public:
    QGridLayout *gridLayout;
    QPushButton *PushButton1_2;
    QPushButton *PushButton1;
    QComboBox *Name;
    QLabel *TextLabel1;
    QGroupBox *Scope;
    QGridLayout *gridLayout1;
    QRadioButton *GlobalScope;
    QRadioButton *LocalScope;
    QRadioButton *LocalScope_2;
    QRadioButton *Package;

    void setupUi(QDialog *toDebugWatchUI)
    {
    if (toDebugWatchUI->objectName().isEmpty())
        toDebugWatchUI->setObjectName(QString::fromUtf8("toDebugWatchUI"));
    toDebugWatchUI->resize(188, 264);
    gridLayout = new QGridLayout(toDebugWatchUI);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setHorizontalSpacing(6);
    gridLayout->setVerticalSpacing(6);
    gridLayout->setContentsMargins(11, 11, 11, 11);
    PushButton1_2 = new QPushButton(toDebugWatchUI);
    PushButton1_2->setObjectName(QString::fromUtf8("PushButton1_2"));

    gridLayout->addWidget(PushButton1_2, 3, 1, 1, 1);

    PushButton1 = new QPushButton(toDebugWatchUI);
    PushButton1->setObjectName(QString::fromUtf8("PushButton1"));
    PushButton1->setDefault(true);

    gridLayout->addWidget(PushButton1, 3, 0, 1, 1);

    Name = new QComboBox(toDebugWatchUI);
    Name->setObjectName(QString::fromUtf8("Name"));
    Name->setEditable(true);
    Name->setDuplicatesEnabled(false);

    gridLayout->addWidget(Name, 2, 0, 1, 2);

    TextLabel1 = new QLabel(toDebugWatchUI);
    TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
    QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(TextLabel1->sizePolicy().hasHeightForWidth());
    TextLabel1->setSizePolicy(sizePolicy);
    TextLabel1->setWordWrap(false);

    gridLayout->addWidget(TextLabel1, 1, 0, 1, 2);

    Scope = new QGroupBox(toDebugWatchUI);
    Scope->setObjectName(QString::fromUtf8("Scope"));
    QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(Scope->sizePolicy().hasHeightForWidth());
    Scope->setSizePolicy(sizePolicy1);
    gridLayout1 = new QGridLayout(Scope);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    gridLayout1->setHorizontalSpacing(6);
    gridLayout1->setVerticalSpacing(6);
    gridLayout1->setContentsMargins(11, 11, 11, 11);
    GlobalScope = new QRadioButton(Scope);
    GlobalScope->setObjectName(QString::fromUtf8("GlobalScope"));
    GlobalScope->setProperty("buttonGroupId", QVariant(4));

    gridLayout1->addWidget(GlobalScope, 3, 0, 1, 1);

    LocalScope = new QRadioButton(Scope);
    LocalScope->setObjectName(QString::fromUtf8("LocalScope"));
    LocalScope->setChecked(false);
    LocalScope->setProperty("buttonGroupId", QVariant(1));

    gridLayout1->addWidget(LocalScope, 1, 0, 1, 1);

    LocalScope_2 = new QRadioButton(Scope);
    LocalScope_2->setObjectName(QString::fromUtf8("LocalScope_2"));
    LocalScope_2->setChecked(true);
    LocalScope_2->setProperty("buttonGroupId", QVariant(5));

    gridLayout1->addWidget(LocalScope_2, 0, 0, 1, 1);

    Package = new QRadioButton(Scope);
    Package->setObjectName(QString::fromUtf8("Package"));
    Package->setProperty("buttonGroupId", QVariant(3));

    gridLayout1->addWidget(Package, 2, 0, 1, 1);


    gridLayout->addWidget(Scope, 0, 0, 1, 2);

    TextLabel1->setBuddy(Name);
    QWidget::setTabOrder(LocalScope_2, Name);
    QWidget::setTabOrder(Name, PushButton1);
    QWidget::setTabOrder(PushButton1, PushButton1_2);
    QWidget::setTabOrder(PushButton1_2, LocalScope);
    QWidget::setTabOrder(LocalScope, Package);
    QWidget::setTabOrder(Package, GlobalScope);

    retranslateUi(toDebugWatchUI);
    QObject::connect(PushButton1, SIGNAL(clicked()), toDebugWatchUI, SLOT(accept()));
    QObject::connect(PushButton1_2, SIGNAL(clicked()), toDebugWatchUI, SLOT(reject()));

    QMetaObject::connectSlotsByName(toDebugWatchUI);
    } // setupUi

    void retranslateUi(QDialog *toDebugWatchUI)
    {
    toDebugWatchUI->setWindowTitle(QApplication::translate("toDebugWatchUI", "Add variable watch", 0, QApplication::UnicodeUTF8));
    PushButton1_2->setText(QApplication::translate("toDebugWatchUI", "Cancel", 0, QApplication::UnicodeUTF8));
    PushButton1->setText(QApplication::translate("toDebugWatchUI", "&Ok", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    TextLabel1->setToolTip(QApplication::translate("toDebugWatchUI", "Variable name to watch.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    TextLabel1->setText(QApplication::translate("toDebugWatchUI", "&Variable name", 0, QApplication::UnicodeUTF8));
    Scope->setTitle(QApplication::translate("toDebugWatchUI", "&Scope", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    GlobalScope->setToolTip(QApplication::translate("toDebugWatchUI", "Global scope of variable.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    GlobalScope->setText(QApplication::translate("toDebugWatchUI", "&Global", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    LocalScope->setToolTip(QApplication::translate("toDebugWatchUI", "Currently running scope.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    LocalScope->setText(QApplication::translate("toDebugWatchUI", "&Local", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    LocalScope_2->setToolTip(QApplication::translate("toDebugWatchUI", "Currently running scope.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    LocalScope_2->setText(QApplication::translate("toDebugWatchUI", "&Autodetect", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    Package->setToolTip(QApplication::translate("toDebugWatchUI", "The scope of the file in the body editor.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    Package->setText(QApplication::translate("toDebugWatchUI", "&Package", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(toDebugWatchUI);
    } // retranslateUi

};

namespace Ui {
    class toDebugWatchUI: public Ui_toDebugWatchUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TODEBUGWATCH_H
