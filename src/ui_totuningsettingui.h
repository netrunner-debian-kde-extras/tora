/********************************************************************************
** Form generated from reading ui file 'totuningsettingui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TOTUNINGSETTINGUI_H
#define UI_TOTUNINGSETTINGUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QWidget>
#include "totreewidget.h"

QT_BEGIN_NAMESPACE

class Ui_toTuningSettingUI
{
public:
    QGridLayout *gridLayout;
    QGroupBox *ServerTuning;
    QGridLayout *gridLayout1;
    toTreeWidget *EnabledTabs;
    QLabel *TextLabel1;

    void setupUi(QWidget *toTuningSettingUI)
    {
    if (toTuningSettingUI->objectName().isEmpty())
        toTuningSettingUI->setObjectName(QString::fromUtf8("toTuningSettingUI"));
    toTuningSettingUI->resize(588, 480);
    gridLayout = new QGridLayout(toTuningSettingUI);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setHorizontalSpacing(6);
    gridLayout->setVerticalSpacing(6);
    gridLayout->setContentsMargins(0, 0, 0, 0);
    ServerTuning = new QGroupBox(toTuningSettingUI);
    ServerTuning->setObjectName(QString::fromUtf8("ServerTuning"));
    gridLayout1 = new QGridLayout(ServerTuning);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    gridLayout1->setHorizontalSpacing(6);
    gridLayout1->setVerticalSpacing(6);
    gridLayout1->setContentsMargins(11, 11, 11, 11);
    EnabledTabs = new toTreeWidget(ServerTuning);
    EnabledTabs->setObjectName(QString::fromUtf8("EnabledTabs"));
    EnabledTabs->setSelectionMode(QAbstractItemView::MultiSelection);
    EnabledTabs->setAllColumnsShowFocus(true);

    gridLayout1->addWidget(EnabledTabs, 1, 0, 1, 1);

    TextLabel1 = new QLabel(ServerTuning);
    TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
    TextLabel1->setWordWrap(false);

    gridLayout1->addWidget(TextLabel1, 0, 0, 1, 1);


    gridLayout->addWidget(ServerTuning, 0, 0, 1, 1);

    TextLabel1->setBuddy(EnabledTabs);

    retranslateUi(toTuningSettingUI);

    QMetaObject::connectSlotsByName(toTuningSettingUI);
    } // setupUi

    void retranslateUi(QWidget *toTuningSettingUI)
    {
    toTuningSettingUI->setWindowTitle(QApplication::translate("toTuningSettingUI", "Form1", 0, QApplication::UnicodeUTF8));
    ServerTuning->setTitle(QApplication::translate("toTuningSettingUI", "Server tuning", 0, QApplication::UnicodeUTF8));
    EnabledTabs->headerItem()->setText(0, QApplication::translate("toTuningSettingUI", "Available tabs", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    TextLabel1->setToolTip(QApplication::translate("toTuningSettingUI", "Select which views collect data in the background that should be run.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    TextLabel1->setText(QApplication::translate("toTuningSettingUI", "&Enabled background views", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(toTuningSettingUI);
    } // retranslateUi

};

namespace Ui {
    class toTuningSettingUI: public Ui_toTuningSettingUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOTUNINGSETTINGUI_H
