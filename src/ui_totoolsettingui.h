/********************************************************************************
** Form generated from reading ui file 'totoolsettingui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TOTOOLSETTINGUI_H
#define UI_TOTOOLSETTINGUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QWidget>
#include "totreewidget.h"

QT_BEGIN_NAMESPACE

class Ui_toToolSettingUI
{
public:
    QGridLayout *gridLayout;
    toTreeWidget *Enabled;
    QComboBox *DefaultTool;
    QLabel *TextLabel2;
    QLabel *TextLabel1;
    QLabel *TextLabel3;

    void setupUi(QWidget *toToolSettingUI)
    {
    if (toToolSettingUI->objectName().isEmpty())
        toToolSettingUI->setObjectName(QString::fromUtf8("toToolSettingUI"));
    toToolSettingUI->resize(592, 480);
    gridLayout = new QGridLayout(toToolSettingUI);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setHorizontalSpacing(6);
    gridLayout->setVerticalSpacing(6);
    gridLayout->setContentsMargins(0, 0, 0, 0);
    Enabled = new toTreeWidget(toToolSettingUI);
    Enabled->setObjectName(QString::fromUtf8("Enabled"));
    Enabled->setSelectionMode(QAbstractItemView::MultiSelection);
    Enabled->setAllColumnsShowFocus(true);

    gridLayout->addWidget(Enabled, 2, 0, 1, 1);

    DefaultTool = new QComboBox(toToolSettingUI);
    DefaultTool->setObjectName(QString::fromUtf8("DefaultTool"));

    gridLayout->addWidget(DefaultTool, 4, 0, 1, 1);

    TextLabel2 = new QLabel(toToolSettingUI);
    TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));
    TextLabel2->setWordWrap(false);

    gridLayout->addWidget(TextLabel2, 3, 0, 1, 1);

    TextLabel1 = new QLabel(toToolSettingUI);
    TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
    TextLabel1->setWordWrap(false);

    gridLayout->addWidget(TextLabel1, 1, 0, 1, 1);

    TextLabel3 = new QLabel(toToolSettingUI);
    TextLabel3->setObjectName(QString::fromUtf8("TextLabel3"));
    QFont font;
    font.setBold(true);
    font.setWeight(75);
    TextLabel3->setFont(font);
    TextLabel3->setAlignment(Qt::AlignCenter);
    TextLabel3->setWordWrap(false);

    gridLayout->addWidget(TextLabel3, 0, 0, 1, 1);

    TextLabel2->setBuddy(DefaultTool);
    TextLabel1->setBuddy(Enabled);
    QWidget::setTabOrder(Enabled, DefaultTool);

    retranslateUi(toToolSettingUI);
    QObject::connect(Enabled, SIGNAL(selectionChanged()), toToolSettingUI, SLOT(changeEnable()));

    QMetaObject::connectSlotsByName(toToolSettingUI);
    } // setupUi

    void retranslateUi(QWidget *toToolSettingUI)
    {
    toToolSettingUI->setWindowTitle(QApplication::translate("toToolSettingUI", "Form1", 0, QApplication::UnicodeUTF8));
    Enabled->headerItem()->setText(0, QApplication::translate("toToolSettingUI", "Tool", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    TextLabel2->setToolTip(QApplication::translate("toToolSettingUI", "Select the default tool to pop up when opening a new connection.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    TextLabel2->setText(QApplication::translate("toToolSettingUI", "&Default tool", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    TextLabel1->setToolTip(QApplication::translate("toToolSettingUI", "Select which tools should show up in the menu and toolbar.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    TextLabel1->setText(QApplication::translate("toToolSettingUI", "&Enabled tools", 0, QApplication::UnicodeUTF8));
    TextLabel3->setText(QApplication::translate("toToolSettingUI", "You must restart for any of these changes to have effect.", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(toToolSettingUI);
    } // retranslateUi

};

namespace Ui {
    class toToolSettingUI: public Ui_toToolSettingUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOTOOLSETTINGUI_H
