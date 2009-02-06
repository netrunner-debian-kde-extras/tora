/********************************************************************************
** Form generated from reading ui file 'toglobalsettingui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TOGLOBALSETTINGUI_H
#define UI_TOGLOBALSETTINGUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_toGlobalSettingUI
{
public:
    QGridLayout *gridLayout;
    QGroupBox *GroupBox2;
    QGridLayout *gridLayout1;
    QLabel *TextLabel5;
    QPushButton *SQLBrowse;
    QLineEdit *CustomSQL;
    QPushButton *PluginBrowse;
    QLineEdit *PluginDirectory;
    QLabel *PluginLabel;
    QPushButton *CacheBrowse;
    QLineEdit *CacheDirectory;
    QLabel *CacheLabel;
    QLabel *PluginLabel_2;
    QLineEdit *HelpDirectory;
    QPushButton *HelpBrowse;
    QLabel *PluginLabel_2_2;
    QLineEdit *DefaultSession;
    QPushButton *HelpBrowse_2;
    QGroupBox *OptionGroup;
    QGridLayout *gridLayout2;
    QCheckBox *ChangeConnection;
    QLabel *TextLabel3_2_2;
    QSpinBox *ConnectHistory;
    QCheckBox *SavePassword;
    QLabel *StatusLabel;
    QSpinBox *Status;
    QCheckBox *IncludeDB;
    QLabel *TextLabel3_2;
    QSpinBox *HistorySize;
    QCheckBox *RestoreSession;
    QLabel *TextLabel3_2_3;
    QSpinBox *ChartSamples;
    QCheckBox *UnlimitedSamples;
    QLabel *TextLabel3_2_3_2;
    QSpinBox *DisplaySamples;
    QCheckBox *AllSamples;
    QLabel *SizeLabel;
    QComboBox *SizeUnit;
    QLabel *RefreshLabel;
    QComboBox *Refresh;
    QLabel *TextLabel2;
    QComboBox *DefaultFormat;
    QLabel *StyleLabel;
    QComboBox *Style;
    QLabel *LocaleLabel;
    QLineEdit *Locale;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QLineEdit *SmtpServer;
    QLabel *label_2;
    QSpinBox *SmtpPort;
    QCheckBox *ToadBindings;
    QCheckBox *DiskCaching;
    QCheckBox *DisplayGrid;
    QCheckBox *Statusbar;
    QCheckBox *TabbedTools;

    void setupUi(QWidget *toGlobalSettingUI)
    {
    if (toGlobalSettingUI->objectName().isEmpty())
        toGlobalSettingUI->setObjectName(QString::fromUtf8("toGlobalSettingUI"));
    toGlobalSettingUI->resize(780, 757);
    gridLayout = new QGridLayout(toGlobalSettingUI);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    GroupBox2 = new QGroupBox(toGlobalSettingUI);
    GroupBox2->setObjectName(QString::fromUtf8("GroupBox2"));
    gridLayout1 = new QGridLayout(GroupBox2);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(11);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    TextLabel5 = new QLabel(GroupBox2);
    TextLabel5->setObjectName(QString::fromUtf8("TextLabel5"));
    TextLabel5->setWordWrap(false);

    gridLayout1->addWidget(TextLabel5, 0, 0, 1, 1);

    SQLBrowse = new QPushButton(GroupBox2);
    SQLBrowse->setObjectName(QString::fromUtf8("SQLBrowse"));

    gridLayout1->addWidget(SQLBrowse, 0, 2, 1, 1);

    CustomSQL = new QLineEdit(GroupBox2);
    CustomSQL->setObjectName(QString::fromUtf8("CustomSQL"));

    gridLayout1->addWidget(CustomSQL, 0, 1, 1, 1);

    PluginBrowse = new QPushButton(GroupBox2);
    PluginBrowse->setObjectName(QString::fromUtf8("PluginBrowse"));

    gridLayout1->addWidget(PluginBrowse, 3, 2, 1, 1);

    PluginDirectory = new QLineEdit(GroupBox2);
    PluginDirectory->setObjectName(QString::fromUtf8("PluginDirectory"));

    gridLayout1->addWidget(PluginDirectory, 3, 1, 1, 1);

    PluginLabel = new QLabel(GroupBox2);
    PluginLabel->setObjectName(QString::fromUtf8("PluginLabel"));
    PluginLabel->setWordWrap(false);

    gridLayout1->addWidget(PluginLabel, 3, 0, 1, 1);

    CacheBrowse = new QPushButton(GroupBox2);
    CacheBrowse->setObjectName(QString::fromUtf8("CacheBrowse"));

    gridLayout1->addWidget(CacheBrowse, 4, 2, 1, 1);

    CacheDirectory = new QLineEdit(GroupBox2);
    CacheDirectory->setObjectName(QString::fromUtf8("CacheDirectory"));

    gridLayout1->addWidget(CacheDirectory, 4, 1, 1, 1);

    CacheLabel = new QLabel(GroupBox2);
    CacheLabel->setObjectName(QString::fromUtf8("CacheLabel"));
    CacheLabel->setWordWrap(false);

    gridLayout1->addWidget(CacheLabel, 4, 0, 1, 1);

    PluginLabel_2 = new QLabel(GroupBox2);
    PluginLabel_2->setObjectName(QString::fromUtf8("PluginLabel_2"));
    PluginLabel_2->setWordWrap(false);

    gridLayout1->addWidget(PluginLabel_2, 1, 0, 1, 1);

    HelpDirectory = new QLineEdit(GroupBox2);
    HelpDirectory->setObjectName(QString::fromUtf8("HelpDirectory"));

    gridLayout1->addWidget(HelpDirectory, 1, 1, 1, 1);

    HelpBrowse = new QPushButton(GroupBox2);
    HelpBrowse->setObjectName(QString::fromUtf8("HelpBrowse"));

    gridLayout1->addWidget(HelpBrowse, 1, 2, 1, 1);

    PluginLabel_2_2 = new QLabel(GroupBox2);
    PluginLabel_2_2->setObjectName(QString::fromUtf8("PluginLabel_2_2"));
    PluginLabel_2_2->setWordWrap(false);

    gridLayout1->addWidget(PluginLabel_2_2, 2, 0, 1, 1);

    DefaultSession = new QLineEdit(GroupBox2);
    DefaultSession->setObjectName(QString::fromUtf8("DefaultSession"));

    gridLayout1->addWidget(DefaultSession, 2, 1, 1, 1);

    HelpBrowse_2 = new QPushButton(GroupBox2);
    HelpBrowse_2->setObjectName(QString::fromUtf8("HelpBrowse_2"));

    gridLayout1->addWidget(HelpBrowse_2, 2, 2, 1, 1);


    gridLayout->addWidget(GroupBox2, 0, 0, 1, 1);

    OptionGroup = new QGroupBox(toGlobalSettingUI);
    OptionGroup->setObjectName(QString::fromUtf8("OptionGroup"));
    gridLayout2 = new QGridLayout(OptionGroup);
    gridLayout2->setSpacing(6);
    gridLayout2->setMargin(11);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    ChangeConnection = new QCheckBox(OptionGroup);
    ChangeConnection->setObjectName(QString::fromUtf8("ChangeConnection"));

    gridLayout2->addWidget(ChangeConnection, 0, 0, 1, 1);

    TextLabel3_2_2 = new QLabel(OptionGroup);
    TextLabel3_2_2->setObjectName(QString::fromUtf8("TextLabel3_2_2"));
    TextLabel3_2_2->setWordWrap(false);

    gridLayout2->addWidget(TextLabel3_2_2, 0, 1, 1, 1);

    ConnectHistory = new QSpinBox(OptionGroup);
    ConnectHistory->setObjectName(QString::fromUtf8("ConnectHistory"));
    ConnectHistory->setMaximum(1000);

    gridLayout2->addWidget(ConnectHistory, 0, 2, 1, 2);

    SavePassword = new QCheckBox(OptionGroup);
    SavePassword->setObjectName(QString::fromUtf8("SavePassword"));

    gridLayout2->addWidget(SavePassword, 1, 0, 1, 1);

    StatusLabel = new QLabel(OptionGroup);
    StatusLabel->setObjectName(QString::fromUtf8("StatusLabel"));
    StatusLabel->setWordWrap(false);

    gridLayout2->addWidget(StatusLabel, 1, 1, 1, 1);

    Status = new QSpinBox(OptionGroup);
    Status->setObjectName(QString::fromUtf8("Status"));

    gridLayout2->addWidget(Status, 1, 2, 1, 2);

    IncludeDB = new QCheckBox(OptionGroup);
    IncludeDB->setObjectName(QString::fromUtf8("IncludeDB"));

    gridLayout2->addWidget(IncludeDB, 2, 0, 1, 1);

    TextLabel3_2 = new QLabel(OptionGroup);
    TextLabel3_2->setObjectName(QString::fromUtf8("TextLabel3_2"));
    TextLabel3_2->setWordWrap(false);

    gridLayout2->addWidget(TextLabel3_2, 2, 1, 1, 1);

    HistorySize = new QSpinBox(OptionGroup);
    HistorySize->setObjectName(QString::fromUtf8("HistorySize"));
    HistorySize->setMaximum(1000);

    gridLayout2->addWidget(HistorySize, 2, 2, 1, 2);

    RestoreSession = new QCheckBox(OptionGroup);
    RestoreSession->setObjectName(QString::fromUtf8("RestoreSession"));

    gridLayout2->addWidget(RestoreSession, 3, 0, 1, 1);

    TextLabel3_2_3 = new QLabel(OptionGroup);
    TextLabel3_2_3->setObjectName(QString::fromUtf8("TextLabel3_2_3"));
    TextLabel3_2_3->setWordWrap(false);

    gridLayout2->addWidget(TextLabel3_2_3, 3, 1, 1, 1);

    ChartSamples = new QSpinBox(OptionGroup);
    ChartSamples->setObjectName(QString::fromUtf8("ChartSamples"));
    ChartSamples->setMaximum(1000);

    gridLayout2->addWidget(ChartSamples, 3, 2, 1, 1);

    UnlimitedSamples = new QCheckBox(OptionGroup);
    UnlimitedSamples->setObjectName(QString::fromUtf8("UnlimitedSamples"));

    gridLayout2->addWidget(UnlimitedSamples, 3, 3, 1, 1);

    TextLabel3_2_3_2 = new QLabel(OptionGroup);
    TextLabel3_2_3_2->setObjectName(QString::fromUtf8("TextLabel3_2_3_2"));
    TextLabel3_2_3_2->setWordWrap(false);

    gridLayout2->addWidget(TextLabel3_2_3_2, 4, 1, 1, 1);

    DisplaySamples = new QSpinBox(OptionGroup);
    DisplaySamples->setObjectName(QString::fromUtf8("DisplaySamples"));
    DisplaySamples->setMaximum(1000);

    gridLayout2->addWidget(DisplaySamples, 4, 2, 1, 1);

    AllSamples = new QCheckBox(OptionGroup);
    AllSamples->setObjectName(QString::fromUtf8("AllSamples"));

    gridLayout2->addWidget(AllSamples, 4, 3, 1, 1);

    SizeLabel = new QLabel(OptionGroup);
    SizeLabel->setObjectName(QString::fromUtf8("SizeLabel"));
    SizeLabel->setWordWrap(false);

    gridLayout2->addWidget(SizeLabel, 5, 1, 1, 1);

    SizeUnit = new QComboBox(OptionGroup);
    SizeUnit->setObjectName(QString::fromUtf8("SizeUnit"));

    gridLayout2->addWidget(SizeUnit, 5, 2, 1, 2);

    RefreshLabel = new QLabel(OptionGroup);
    RefreshLabel->setObjectName(QString::fromUtf8("RefreshLabel"));
    RefreshLabel->setWordWrap(false);

    gridLayout2->addWidget(RefreshLabel, 6, 1, 1, 1);

    Refresh = new QComboBox(OptionGroup);
    Refresh->setObjectName(QString::fromUtf8("Refresh"));

    gridLayout2->addWidget(Refresh, 6, 2, 1, 2);

    TextLabel2 = new QLabel(OptionGroup);
    TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));
    TextLabel2->setWordWrap(false);

    gridLayout2->addWidget(TextLabel2, 7, 1, 1, 1);

    DefaultFormat = new QComboBox(OptionGroup);
    DefaultFormat->setObjectName(QString::fromUtf8("DefaultFormat"));

    gridLayout2->addWidget(DefaultFormat, 7, 2, 1, 2);

    StyleLabel = new QLabel(OptionGroup);
    StyleLabel->setObjectName(QString::fromUtf8("StyleLabel"));
    StyleLabel->setWordWrap(false);

    gridLayout2->addWidget(StyleLabel, 8, 1, 1, 1);

    Style = new QComboBox(OptionGroup);
    Style->setObjectName(QString::fromUtf8("Style"));

    gridLayout2->addWidget(Style, 8, 2, 1, 2);

    LocaleLabel = new QLabel(OptionGroup);
    LocaleLabel->setObjectName(QString::fromUtf8("LocaleLabel"));
    QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(LocaleLabel->sizePolicy().hasHeightForWidth());
    LocaleLabel->setSizePolicy(sizePolicy);
    LocaleLabel->setWordWrap(false);

    gridLayout2->addWidget(LocaleLabel, 9, 1, 1, 1);

    Locale = new QLineEdit(OptionGroup);
    Locale->setObjectName(QString::fromUtf8("Locale"));
    sizePolicy.setHeightForWidth(Locale->sizePolicy().hasHeightForWidth());
    Locale->setSizePolicy(sizePolicy);

    gridLayout2->addWidget(Locale, 9, 2, 1, 2);

    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(11);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    label = new QLabel(OptionGroup);
    label->setObjectName(QString::fromUtf8("label"));

    hboxLayout->addWidget(label);

    SmtpServer = new QLineEdit(OptionGroup);
    SmtpServer->setObjectName(QString::fromUtf8("SmtpServer"));

    hboxLayout->addWidget(SmtpServer);

    label_2 = new QLabel(OptionGroup);
    label_2->setObjectName(QString::fromUtf8("label_2"));

    hboxLayout->addWidget(label_2);

    SmtpPort = new QSpinBox(OptionGroup);
    SmtpPort->setObjectName(QString::fromUtf8("SmtpPort"));
    SmtpPort->setMinimum(1);
    SmtpPort->setMaximum(65536);

    hboxLayout->addWidget(SmtpPort);


    gridLayout2->addLayout(hboxLayout, 10, 0, 1, 4);

    ToadBindings = new QCheckBox(OptionGroup);
    ToadBindings->setObjectName(QString::fromUtf8("ToadBindings"));

    gridLayout2->addWidget(ToadBindings, 4, 0, 1, 1);

    DiskCaching = new QCheckBox(OptionGroup);
    DiskCaching->setObjectName(QString::fromUtf8("DiskCaching"));

    gridLayout2->addWidget(DiskCaching, 5, 0, 1, 1);

    DisplayGrid = new QCheckBox(OptionGroup);
    DisplayGrid->setObjectName(QString::fromUtf8("DisplayGrid"));

    gridLayout2->addWidget(DisplayGrid, 6, 0, 1, 1);

    Statusbar = new QCheckBox(OptionGroup);
    Statusbar->setObjectName(QString::fromUtf8("Statusbar"));

    gridLayout2->addWidget(Statusbar, 7, 0, 1, 1);

    TabbedTools = new QCheckBox(OptionGroup);
    TabbedTools->setObjectName(QString::fromUtf8("TabbedTools"));

    gridLayout2->addWidget(TabbedTools, 8, 0, 1, 1);


    gridLayout->addWidget(OptionGroup, 1, 0, 1, 1);

    TextLabel5->setBuddy(CustomSQL);
    PluginLabel->setBuddy(PluginDirectory);
    CacheLabel->setBuddy(CacheDirectory);
    PluginLabel_2->setBuddy(HelpDirectory);
    PluginLabel_2_2->setBuddy(DefaultSession);
    TextLabel3_2_2->setBuddy(ConnectHistory);
    StatusLabel->setBuddy(Status);
    TextLabel3_2->setBuddy(HistorySize);
    TextLabel3_2_3->setBuddy(HistorySize);
    TextLabel3_2_3_2->setBuddy(HistorySize);
    SizeLabel->setBuddy(SizeUnit);
    RefreshLabel->setBuddy(Refresh);
    StyleLabel->setBuddy(Style);
    QWidget::setTabOrder(CustomSQL, SQLBrowse);
    QWidget::setTabOrder(SQLBrowse, HelpDirectory);
    QWidget::setTabOrder(HelpDirectory, HelpBrowse);
    QWidget::setTabOrder(HelpBrowse, DefaultSession);
    QWidget::setTabOrder(DefaultSession, HelpBrowse_2);
    QWidget::setTabOrder(HelpBrowse_2, PluginDirectory);
    QWidget::setTabOrder(PluginDirectory, PluginBrowse);
    QWidget::setTabOrder(PluginBrowse, CacheDirectory);
    QWidget::setTabOrder(CacheDirectory, CacheBrowse);
    QWidget::setTabOrder(CacheBrowse, ChangeConnection);
    QWidget::setTabOrder(ChangeConnection, SavePassword);
    QWidget::setTabOrder(SavePassword, IncludeDB);
    QWidget::setTabOrder(IncludeDB, RestoreSession);
    QWidget::setTabOrder(RestoreSession, ToadBindings);
    QWidget::setTabOrder(ToadBindings, DiskCaching);
    QWidget::setTabOrder(DiskCaching, DisplayGrid);
    QWidget::setTabOrder(DisplayGrid, Statusbar);
    QWidget::setTabOrder(Statusbar, TabbedTools);
    QWidget::setTabOrder(TabbedTools, ConnectHistory);
    QWidget::setTabOrder(ConnectHistory, Status);
    QWidget::setTabOrder(Status, HistorySize);
    QWidget::setTabOrder(HistorySize, ChartSamples);
    QWidget::setTabOrder(ChartSamples, UnlimitedSamples);
    QWidget::setTabOrder(UnlimitedSamples, DisplaySamples);
    QWidget::setTabOrder(DisplaySamples, AllSamples);
    QWidget::setTabOrder(AllSamples, SizeUnit);
    QWidget::setTabOrder(SizeUnit, Refresh);
    QWidget::setTabOrder(Refresh, DefaultFormat);
    QWidget::setTabOrder(DefaultFormat, Style);
    QWidget::setTabOrder(Style, Locale);
    QWidget::setTabOrder(Locale, SmtpServer);
    QWidget::setTabOrder(SmtpServer, SmtpPort);

    retranslateUi(toGlobalSettingUI);
    QObject::connect(PluginBrowse, SIGNAL(clicked()), toGlobalSettingUI, SLOT(pluginBrowse()));
    QObject::connect(CacheBrowse, SIGNAL(clicked()), toGlobalSettingUI, SLOT(cacheBrowse()));
    QObject::connect(SQLBrowse, SIGNAL(clicked()), toGlobalSettingUI, SLOT(sqlBrowse()));
    QObject::connect(HelpBrowse, SIGNAL(clicked()), toGlobalSettingUI, SLOT(helpBrowse()));
    QObject::connect(HelpBrowse_2, SIGNAL(clicked()), toGlobalSettingUI, SLOT(sessionBrowse()));
    QObject::connect(UnlimitedSamples, SIGNAL(toggled(bool)), ChartSamples, SLOT(setDisabled(bool)));
    QObject::connect(AllSamples, SIGNAL(toggled(bool)), DisplaySamples, SLOT(setDisabled(bool)));

    QMetaObject::connectSlotsByName(toGlobalSettingUI);
    } // setupUi

    void retranslateUi(QWidget *toGlobalSettingUI)
    {
    toGlobalSettingUI->setWindowTitle(QApplication::translate("toGlobalSettingUI", "toGlobalSettingUI", 0, QApplication::UnicodeUTF8));
    GroupBox2->setTitle(QApplication::translate("toGlobalSettingUI", "Paths", 0, QApplication::UnicodeUTF8));
    TextLabel5->setText(QApplication::translate("toGlobalSettingUI", "&Custom SQL", 0, QApplication::UnicodeUTF8));
    SQLBrowse->setText(QApplication::translate("toGlobalSettingUI", "Browse", 0, QApplication::UnicodeUTF8));
    PluginBrowse->setText(QApplication::translate("toGlobalSettingUI", "Browse", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    PluginLabel->setToolTip(QApplication::translate("toGlobalSettingUI", "Directory where to find plugins when starting.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    PluginLabel->setText(QApplication::translate("toGlobalSettingUI", "&Plugin directory", 0, QApplication::UnicodeUTF8));
    CacheBrowse->setText(QApplication::translate("toGlobalSettingUI", "Browse", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    CacheLabel->setToolTip(QApplication::translate("toGlobalSettingUI", "Directory where to place cached dataaseinformation.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    CacheLabel->setText(QApplication::translate("toGlobalSettingUI", "&Cache directory", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    PluginLabel_2->setToolTip(QApplication::translate("toGlobalSettingUI", "Directory where to find help files.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    PluginLabel_2->setText(QApplication::translate("toGlobalSettingUI", "&Help directory", 0, QApplication::UnicodeUTF8));
    HelpBrowse->setText(QApplication::translate("toGlobalSettingUI", "Browse", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    PluginLabel_2_2->setToolTip(QApplication::translate("toGlobalSettingUI", "Default session to use when saving a session.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    PluginLabel_2_2->setText(QApplication::translate("toGlobalSettingUI", "Default session", 0, QApplication::UnicodeUTF8));
    HelpBrowse_2->setText(QApplication::translate("toGlobalSettingUI", "Browse", 0, QApplication::UnicodeUTF8));
    OptionGroup->setTitle(QApplication::translate("toGlobalSettingUI", "Options", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    ChangeConnection->setToolTip(QApplication::translate("toGlobalSettingUI", "Change currently select connection to the connection of the new active window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    ChangeConnection->setText(QApplication::translate("toGlobalSettingUI", "Change current connection with active window", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    TextLabel3_2_2->setToolTip(QApplication::translate("toGlobalSettingUI", "Number of connections to save in history.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    TextLabel3_2_2->setText(QApplication::translate("toGlobalSettingUI", "Connect history", 0, QApplication::UnicodeUTF8));
    ConnectHistory->setSuffix(QString());

#ifndef QT_NO_TOOLTIP
    SavePassword->setToolTip(QApplication::translate("toGlobalSettingUI", "Remember the last password you used to connect.\n"
"Will leave the password unencrypted in the config file.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    SavePassword->setText(QApplication::translate("toGlobalSettingUI", "&Save passwords", 0, QApplication::UnicodeUTF8));
    SavePassword->setShortcut(QApplication::translate("toGlobalSettingUI", "Alt+S", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    StatusLabel->setToolTip(QApplication::translate("toGlobalSettingUI", "The time in seconds temporary messages will be displayed in the status bar. 0 means keep.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    StatusLabel->setText(QApplication::translate("toGlobalSettingUI", "Status &message", 0, QApplication::UnicodeUTF8));
    Status->setSuffix(QApplication::translate("toGlobalSettingUI", " seconds", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    IncludeDB->setToolTip(QApplication::translate("toGlobalSettingUI", "Include database connection in window captions", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    IncludeDB->setText(QApplication::translate("toGlobalSettingUI", "Include DB in caption", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    TextLabel3_2->setToolTip(QApplication::translate("toGlobalSettingUI", "Number of status messages to save in the message history.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    TextLabel3_2->setText(QApplication::translate("toGlobalSettingUI", "Message history", 0, QApplication::UnicodeUTF8));
    HistorySize->setSuffix(QString());
    RestoreSession->setText(QApplication::translate("toGlobalSettingUI", "Restore session on startup", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    TextLabel3_2_3->setToolTip(QApplication::translate("toGlobalSettingUI", "Number of samples to keep in line and barcharts by default.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    TextLabel3_2_3->setText(QApplication::translate("toGlobalSettingUI", "Chart samples", 0, QApplication::UnicodeUTF8));
    ChartSamples->setSuffix(QString());

#ifndef QT_NO_TOOLTIP
    UnlimitedSamples->setToolTip(QApplication::translate("toGlobalSettingUI", "Save unlimited number of samples. Can consume large amounts of memory.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    UnlimitedSamples->setText(QApplication::translate("toGlobalSettingUI", "Unlimited", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    TextLabel3_2_3_2->setToolTip(QApplication::translate("toGlobalSettingUI", "Number of samples to display in line and barcharts by default.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    TextLabel3_2_3_2->setText(QApplication::translate("toGlobalSettingUI", "Display samples", 0, QApplication::UnicodeUTF8));
    DisplaySamples->setSuffix(QString());

#ifndef QT_NO_TOOLTIP
    AllSamples->setToolTip(QApplication::translate("toGlobalSettingUI", "Display all available samples", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    AllSamples->setText(QApplication::translate("toGlobalSettingUI", "All", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    SizeLabel->setToolTip(QApplication::translate("toGlobalSettingUI", "Define the unit sizes should be displayed.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    SizeLabel->setText(QApplication::translate("toGlobalSettingUI", "Size Unit", 0, QApplication::UnicodeUTF8));
    SizeUnit->insertItems(0, QStringList()
     << QApplication::translate("toGlobalSettingUI", "Bytes", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("toGlobalSettingUI", "KB", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("toGlobalSettingUI", "MB", 0, QApplication::UnicodeUTF8)
    );

#ifndef QT_NO_TOOLTIP
    RefreshLabel->setToolTip(QApplication::translate("toGlobalSettingUI", "Default refreshtime in tools.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    RefreshLabel->setText(QApplication::translate("toGlobalSettingUI", "&Refresh", 0, QApplication::UnicodeUTF8));
    TextLabel2->setText(QApplication::translate("toGlobalSettingUI", "Default list format", 0, QApplication::UnicodeUTF8));
    DefaultFormat->insertItems(0, QStringList()
     << QApplication::translate("toGlobalSettingUI", "Text", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("toGlobalSettingUI", "Tab delimited", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("toGlobalSettingUI", "CSV", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("toGlobalSettingUI", "HTML", 0, QApplication::UnicodeUTF8)
    );

#ifndef QT_NO_TOOLTIP
    StyleLabel->setToolTip(QApplication::translate("toGlobalSettingUI", "The style to use for the user interface.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    StyleLabel->setText(QApplication::translate("toGlobalSettingUI", "&Style", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    LocaleLabel->setToolTip(QApplication::translate("toGlobalSettingUI", "Which translation locale to use for this program. Must restart to have effect.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    LocaleLabel->setText(QApplication::translate("toGlobalSettingUI", "Translation", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("toGlobalSettingUI", "SMTP Server", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("toGlobalSettingUI", ":", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    ToadBindings->setToolTip(QApplication::translate("toGlobalSettingUI", "Use TOAD keybindings instead of classic TOra.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    ToadBindings->setText(QApplication::translate("toGlobalSettingUI", "Prefer TOAD key bindings", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    DiskCaching->setToolTip(QApplication::translate("toGlobalSettingUI", "Use Disk Caching of ObjectLists and Synonyms", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    DiskCaching->setText(QApplication::translate("toGlobalSettingUI", "Use Disk Caching", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    DisplayGrid->setToolTip(QApplication::translate("toGlobalSettingUI", "Show grid lines in output results table.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    DisplayGrid->setText(QApplication::translate("toGlobalSettingUI", "Display gridlines in results", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    Statusbar->setToolTip(QApplication::translate("toGlobalSettingUI", "Display alerts in messagebar instead of poping up a dialog with a warning.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    Statusbar->setText(QApplication::translate("toGlobalSettingUI", "Display alerts in statusbar only", 0, QApplication::UnicodeUTF8));
    TabbedTools->setText(QApplication::translate("toGlobalSettingUI", "Arrange Tools in Tabs", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(toGlobalSettingUI);
    } // retranslateUi

};

namespace Ui {
    class toGlobalSettingUI: public Ui_toGlobalSettingUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOGLOBALSETTINGUI_H
