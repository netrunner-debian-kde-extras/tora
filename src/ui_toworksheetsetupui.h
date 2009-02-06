/********************************************************************************
** Form generated from reading ui file 'toworksheetsetupui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TOWORKSHEETSETUPUI_H
#define UI_TOWORKSHEETSETUPUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_toWorksheetSetupUI
{
public:
    QGridLayout *gridLayout;
    QGroupBox *GroupBox1;
    QGridLayout *gridLayout1;
    QCheckBox *AutoSave;
    QCheckBox *CheckSave;
    QCheckBox *LogAtEnd;
    QCheckBox *LogMulti;
    QCheckBox *Statistics;
    QCheckBox *TimedStatistics;
    QCheckBox *DisplayNumber;
    QCheckBox *MoveToError;
    QCheckBox *History;
    QLineEdit *DefaultFile;
    QPushButton *FileChoose;
    QLabel *TextLabel1;
    QSpacerItem *spacerItem;
    QCheckBox *ExecLog;
    QCheckBox *ToplevelDescribe;

    void setupUi(QWidget *toWorksheetSetupUI)
    {
    if (toWorksheetSetupUI->objectName().isEmpty())
        toWorksheetSetupUI->setObjectName(QString::fromUtf8("toWorksheetSetupUI"));
    toWorksheetSetupUI->resize(568, 480);
    gridLayout = new QGridLayout(toWorksheetSetupUI);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setHorizontalSpacing(6);
    gridLayout->setVerticalSpacing(6);
    gridLayout->setContentsMargins(0, 0, 0, 0);
    GroupBox1 = new QGroupBox(toWorksheetSetupUI);
    GroupBox1->setObjectName(QString::fromUtf8("GroupBox1"));
    gridLayout1 = new QGridLayout(GroupBox1);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(11);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    gridLayout1->setHorizontalSpacing(6);
    gridLayout1->setVerticalSpacing(6);
    gridLayout1->setContentsMargins(11, 11, 11, 11);
    AutoSave = new QCheckBox(GroupBox1);
    AutoSave->setObjectName(QString::fromUtf8("AutoSave"));

    gridLayout1->addWidget(AutoSave, 0, 0, 1, 3);

    CheckSave = new QCheckBox(GroupBox1);
    CheckSave->setObjectName(QString::fromUtf8("CheckSave"));

    gridLayout1->addWidget(CheckSave, 1, 0, 1, 3);

    LogAtEnd = new QCheckBox(GroupBox1);
    LogAtEnd->setObjectName(QString::fromUtf8("LogAtEnd"));

    gridLayout1->addWidget(LogAtEnd, 2, 0, 1, 3);

    LogMulti = new QCheckBox(GroupBox1);
    LogMulti->setObjectName(QString::fromUtf8("LogMulti"));

    gridLayout1->addWidget(LogMulti, 3, 0, 1, 3);

    Statistics = new QCheckBox(GroupBox1);
    Statistics->setObjectName(QString::fromUtf8("Statistics"));

    gridLayout1->addWidget(Statistics, 4, 0, 1, 3);

    TimedStatistics = new QCheckBox(GroupBox1);
    TimedStatistics->setObjectName(QString::fromUtf8("TimedStatistics"));

    gridLayout1->addWidget(TimedStatistics, 5, 0, 1, 3);

    DisplayNumber = new QCheckBox(GroupBox1);
    DisplayNumber->setObjectName(QString::fromUtf8("DisplayNumber"));

    gridLayout1->addWidget(DisplayNumber, 6, 0, 1, 3);

    MoveToError = new QCheckBox(GroupBox1);
    MoveToError->setObjectName(QString::fromUtf8("MoveToError"));

    gridLayout1->addWidget(MoveToError, 7, 0, 1, 3);

    History = new QCheckBox(GroupBox1);
    History->setObjectName(QString::fromUtf8("History"));

    gridLayout1->addWidget(History, 8, 0, 1, 3);

    DefaultFile = new QLineEdit(GroupBox1);
    DefaultFile->setObjectName(QString::fromUtf8("DefaultFile"));

    gridLayout1->addWidget(DefaultFile, 11, 1, 1, 1);

    FileChoose = new QPushButton(GroupBox1);
    FileChoose->setObjectName(QString::fromUtf8("FileChoose"));

    gridLayout1->addWidget(FileChoose, 11, 2, 1, 1);

    TextLabel1 = new QLabel(GroupBox1);
    TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
    TextLabel1->setWordWrap(false);

    gridLayout1->addWidget(TextLabel1, 11, 0, 1, 1);

    spacerItem = new QSpacerItem(20, 160, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout1->addItem(spacerItem, 12, 1, 1, 1);

    ExecLog = new QCheckBox(GroupBox1);
    ExecLog->setObjectName(QString::fromUtf8("ExecLog"));

    gridLayout1->addWidget(ExecLog, 9, 0, 1, 3);

    ToplevelDescribe = new QCheckBox(GroupBox1);
    ToplevelDescribe->setObjectName(QString::fromUtf8("ToplevelDescribe"));

    gridLayout1->addWidget(ToplevelDescribe, 10, 0, 1, 3);


    gridLayout->addWidget(GroupBox1, 0, 0, 1, 1);

    TextLabel1->setBuddy(DefaultFile);
    QWidget::setTabOrder(AutoSave, CheckSave);
    QWidget::setTabOrder(CheckSave, LogAtEnd);
    QWidget::setTabOrder(LogAtEnd, LogMulti);
    QWidget::setTabOrder(LogMulti, Statistics);
    QWidget::setTabOrder(Statistics, TimedStatistics);
    QWidget::setTabOrder(TimedStatistics, DisplayNumber);
    QWidget::setTabOrder(DisplayNumber, History);
    QWidget::setTabOrder(History, ExecLog);
    QWidget::setTabOrder(ExecLog, DefaultFile);
    QWidget::setTabOrder(DefaultFile, FileChoose);

    retranslateUi(toWorksheetSetupUI);
    QObject::connect(FileChoose, SIGNAL(clicked()), toWorksheetSetupUI, SLOT(chooseFile()));
    QObject::connect(History, SIGNAL(toggled(bool)), ExecLog, SLOT(setEnabled(bool)));

    QMetaObject::connectSlotsByName(toWorksheetSetupUI);
    } // setupUi

    void retranslateUi(QWidget *toWorksheetSetupUI)
    {
    toWorksheetSetupUI->setWindowTitle(QApplication::translate("toWorksheetSetupUI", "Form1", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    toWorksheetSetupUI->setToolTip(QApplication::translate("toWorksheetSetupUI", "Automatically save file when closing editor (Without asking any questions).", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    GroupBox1->setTitle(QApplication::translate("toWorksheetSetupUI", "SQL Editor", 0, QApplication::UnicodeUTF8));
    AutoSave->setText(QApplication::translate("toWorksheetSetupUI", "Auto &save", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    CheckSave->setToolTip(QApplication::translate("toWorksheetSetupUI", "Ask about saving changes when closing worksheet.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    CheckSave->setText(QApplication::translate("toWorksheetSetupUI", "Ask about saving &changes", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    LogAtEnd->setToolTip(QApplication::translate("toWorksheetSetupUI", "Add newly executed queries at end of log instead of top. Changing this will mess up the log in the windows that are opened.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    LogAtEnd->setText(QApplication::translate("toWorksheetSetupUI", "Add &log entries at end", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    LogMulti->setToolTip(QApplication::translate("toWorksheetSetupUI", "Display multiple lines in the SQL column of the logging.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    LogMulti->setText(QApplication::translate("toWorksheetSetupUI", "&Multiple lines in log.", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    Statistics->setToolTip(QApplication::translate("toWorksheetSetupUI", "Enable statistic collection per default.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    Statistics->setText(QApplication::translate("toWorksheetSetupUI", "&Enable statistics", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    TimedStatistics->setToolTip(QApplication::translate("toWorksheetSetupUI", "Enable timed statistics as well when collecting normal statistics.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    TimedStatistics->setText(QApplication::translate("toWorksheetSetupUI", "Enable &timed statistics", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    DisplayNumber->setToolTip(QApplication::translate("toWorksheetSetupUI", "Add a numbering column to the left of the result.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    DisplayNumber->setText(QApplication::translate("toWorksheetSetupUI", "&Display number column", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    MoveToError->setToolTip(QApplication::translate("toWorksheetSetupUI", "Move the cursor to an error if the error occurs.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    MoveToError->setText(QApplication::translate("toWorksheetSetupUI", "Move &cursor to error", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    History->setToolTip(QApplication::translate("toWorksheetSetupUI", "Keep previous results in while editor is open. Will consume lot of memory.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    History->setText(QApplication::translate("toWorksheetSetupUI", "Save previous results", 0, QApplication::UnicodeUTF8));
    FileChoose->setText(QApplication::translate("toWorksheetSetupUI", "&Browse", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    TextLabel1->setToolTip(QApplication::translate("toWorksheetSetupUI", "File to automatically open in a new editor.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    TextLabel1->setText(QApplication::translate("toWorksheetSetupUI", "Default &file", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    ExecLog->setToolTip(QApplication::translate("toWorksheetSetupUI", "Execute a statement when it is\n"
"			selected in the log, if disabled simply selected\n"
"			the statement in the log.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    ExecLog->setText(QApplication::translate("toWorksheetSetupUI", "Execute directly when selecting in log", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    ToplevelDescribe->setToolTip(QApplication::translate("toWorksheetSetupUI", "Execute a statement when it is\n"
"			selected in the log, if disabled simply selected\n"
"			the statement in the log.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    ToplevelDescribe->setText(QApplication::translate("toWorksheetSetupUI", "Display column descriptions in own toplevel window.", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(toWorksheetSetupUI);
    } // retranslateUi

};

namespace Ui {
    class toWorksheetSetupUI: public Ui_toWorksheetSetupUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOWORKSHEETSETUPUI_H
