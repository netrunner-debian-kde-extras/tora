/********************************************************************************
** Form generated from reading ui file 'tosecurityquotaui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TOSECURITYQUOTAUI_H
#define UI_TOSECURITYQUOTAUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QWidget>
#include "tofilesize.h"
#include "totreewidget.h"

QT_BEGIN_NAMESPACE

class Ui_toSecurityQuotaUI
{
public:
    QGridLayout *gridLayout;
    toTreeWidget *Tablespaces;
    QGroupBox *SizeGroup;
    QGridLayout *gridLayout1;
    toFilesize *Size;
    QRadioButton *Unlimited;
    QRadioButton *None;
    QRadioButton *Value;
    QLabel *Disabled;

    void setupUi(QWidget *toSecurityQuotaUI)
    {
    if (toSecurityQuotaUI->objectName().isEmpty())
        toSecurityQuotaUI->setObjectName(QString::fromUtf8("toSecurityQuotaUI"));
    toSecurityQuotaUI->resize(682, 596);
    gridLayout = new QGridLayout(toSecurityQuotaUI);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setHorizontalSpacing(0);
    gridLayout->setVerticalSpacing(0);
    gridLayout->setContentsMargins(0, 0, 0, 0);
    Tablespaces = new toTreeWidget(toSecurityQuotaUI);
    Tablespaces->setObjectName(QString::fromUtf8("Tablespaces"));
    Tablespaces->setAllColumnsShowFocus(true);

    gridLayout->addWidget(Tablespaces, 1, 0, 1, 1);

    SizeGroup = new QGroupBox(toSecurityQuotaUI);
    SizeGroup->setObjectName(QString::fromUtf8("SizeGroup"));
    SizeGroup->setEnabled(false);
    SizeGroup->setProperty("lineWidth", QVariant(0));
    gridLayout1 = new QGridLayout(SizeGroup);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    gridLayout1->setHorizontalSpacing(6);
    gridLayout1->setVerticalSpacing(6);
    gridLayout1->setContentsMargins(0, 0, 0, 0);
    Size = new toFilesize(SizeGroup);
    Size->setObjectName(QString::fromUtf8("Size"));
    Size->setFocusPolicy(Qt::TabFocus);

    gridLayout1->addWidget(Size, 1, 0, 1, 3);

    Unlimited = new QRadioButton(SizeGroup);
    Unlimited->setObjectName(QString::fromUtf8("Unlimited"));

    gridLayout1->addWidget(Unlimited, 0, 2, 1, 1);

    None = new QRadioButton(SizeGroup);
    None->setObjectName(QString::fromUtf8("None"));

    gridLayout1->addWidget(None, 0, 1, 1, 1);

    Value = new QRadioButton(SizeGroup);
    Value->setObjectName(QString::fromUtf8("Value"));
    Value->setChecked(true);

    gridLayout1->addWidget(Value, 0, 0, 1, 1);


    gridLayout->addWidget(SizeGroup, 2, 0, 1, 1);

    Disabled = new QLabel(toSecurityQuotaUI);
    Disabled->setObjectName(QString::fromUtf8("Disabled"));
    Disabled->setAlignment(Qt::AlignCenter);
    Disabled->setWordWrap(false);

    gridLayout->addWidget(Disabled, 0, 0, 1, 1);

    QWidget::setTabOrder(Tablespaces, Value);
    QWidget::setTabOrder(Value, None);
    QWidget::setTabOrder(None, Unlimited);
    QWidget::setTabOrder(Unlimited, Size);

    retranslateUi(toSecurityQuotaUI);

    QMetaObject::connectSlotsByName(toSecurityQuotaUI);
    } // setupUi

    void retranslateUi(QWidget *toSecurityQuotaUI)
    {
    Tablespaces->headerItem()->setText(0, QApplication::translate("toSecurityQuotaUI", "Tablespace", 0, QApplication::UnicodeUTF8));
    Tablespaces->headerItem()->setText(1, QApplication::translate("toSecurityQuotaUI", "Quota Size", 0, QApplication::UnicodeUTF8));
    Tablespaces->headerItem()->setText(2, QApplication::translate("toSecurityQuotaUI", "Used Size", 0, QApplication::UnicodeUTF8));
    SizeGroup->setTitle(QString());
    Unlimited->setText(QApplication::translate("toSecurityQuotaUI", "&Unlimited", 0, QApplication::UnicodeUTF8));
    None->setText(QApplication::translate("toSecurityQuotaUI", "&None", 0, QApplication::UnicodeUTF8));
    Value->setText(QApplication::translate("toSecurityQuotaUI", "&Value", 0, QApplication::UnicodeUTF8));
    Disabled->setText(QApplication::translate("toSecurityQuotaUI", "Belongs to Resource group or has unlimited tablespace privilege", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(toSecurityQuotaUI);
    } // retranslateUi

};

namespace Ui {
    class toSecurityQuotaUI: public Ui_toSecurityQuotaUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOSECURITYQUOTAUI_H
