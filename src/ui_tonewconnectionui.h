/********************************************************************************
** Form generated from reading ui file 'tonewconnectionui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TONEWCONNECTIONUI_H
#define UI_TONEWCONNECTIONUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_toNewConnectionUI
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *TextLabel2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLineEdit *searchEdit;
    QTableView *Previous;
    QVBoxLayout *vboxLayout;
    QLabel *ProviderLabel;
    QComboBox *Provider;
    QLabel *UsernameLabel;
    QLineEdit *Username;
    QLabel *PasswordLabel;
    QLineEdit *Password;
    QLabel *HostLabel;
    QComboBox *Host;
    QLabel *SchemaLabel;
    QLineEdit *Schema;
    QHBoxLayout *hboxLayout;
    QLabel *PortLabel;
    QSpinBox *Port;
    QLabel *TextLabel3;
    QComboBox *Database;
    QGroupBox *OptionGroup;
    QVBoxLayout *vboxLayout1;
    QCheckBox *SqlNet;
    QCheckBox *SysDba;
    QCheckBox *SysOper;
    QSpacerItem *spacerItem;
    QPushButton *ImportButton;
    QDialogButtonBox *ButtonBox;

    void setupUi(QDialog *toNewConnectionUI)
    {
    if (toNewConnectionUI->objectName().isEmpty())
        toNewConnectionUI->setObjectName(QString::fromUtf8("toNewConnectionUI"));
    toNewConnectionUI->resize(661, 579);
    gridLayout = new QGridLayout(toNewConnectionUI);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    verticalLayout = new QVBoxLayout();
    verticalLayout->setSpacing(6);
    verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
    horizontalLayout = new QHBoxLayout();
    horizontalLayout->setSpacing(6);
    horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
    TextLabel2 = new QLabel(toNewConnectionUI);
    TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));
    QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(TextLabel2->sizePolicy().hasHeightForWidth());
    TextLabel2->setSizePolicy(sizePolicy);
    TextLabel2->setWordWrap(false);

    horizontalLayout->addWidget(TextLabel2);

    horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    horizontalLayout->addItem(horizontalSpacer);

    label = new QLabel(toNewConnectionUI);
    label->setObjectName(QString::fromUtf8("label"));

    horizontalLayout->addWidget(label);

    searchEdit = new QLineEdit(toNewConnectionUI);
    searchEdit->setObjectName(QString::fromUtf8("searchEdit"));

    horizontalLayout->addWidget(searchEdit);


    verticalLayout->addLayout(horizontalLayout);

    Previous = new QTableView(toNewConnectionUI);
    Previous->setObjectName(QString::fromUtf8("Previous"));
    Previous->setEditTriggers(QAbstractItemView::NoEditTriggers);
    Previous->setDragDropOverwriteMode(false);
    Previous->setDragDropMode(QAbstractItemView::NoDragDrop);
    Previous->setAlternatingRowColors(true);
    Previous->setSelectionMode(QAbstractItemView::SingleSelection);
    Previous->setSelectionBehavior(QAbstractItemView::SelectRows);
    Previous->setShowGrid(false);
    Previous->setSortingEnabled(true);

    verticalLayout->addWidget(Previous);


    gridLayout->addLayout(verticalLayout, 0, 0, 1, 2);

    vboxLayout = new QVBoxLayout();
    vboxLayout->setSpacing(2);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    ProviderLabel = new QLabel(toNewConnectionUI);
    ProviderLabel->setObjectName(QString::fromUtf8("ProviderLabel"));
    QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(ProviderLabel->sizePolicy().hasHeightForWidth());
    ProviderLabel->setSizePolicy(sizePolicy1);
    ProviderLabel->setWordWrap(false);

    vboxLayout->addWidget(ProviderLabel);

    Provider = new QComboBox(toNewConnectionUI);
    Provider->setObjectName(QString::fromUtf8("Provider"));
    sizePolicy.setHeightForWidth(Provider->sizePolicy().hasHeightForWidth());
    Provider->setSizePolicy(sizePolicy);

    vboxLayout->addWidget(Provider);

    UsernameLabel = new QLabel(toNewConnectionUI);
    UsernameLabel->setObjectName(QString::fromUtf8("UsernameLabel"));
    sizePolicy.setHeightForWidth(UsernameLabel->sizePolicy().hasHeightForWidth());
    UsernameLabel->setSizePolicy(sizePolicy);
    UsernameLabel->setWordWrap(false);

    vboxLayout->addWidget(UsernameLabel);

    Username = new QLineEdit(toNewConnectionUI);
    Username->setObjectName(QString::fromUtf8("Username"));
    sizePolicy.setHeightForWidth(Username->sizePolicy().hasHeightForWidth());
    Username->setSizePolicy(sizePolicy);
    Username->setMinimumSize(QSize(200, 0));

    vboxLayout->addWidget(Username);

    PasswordLabel = new QLabel(toNewConnectionUI);
    PasswordLabel->setObjectName(QString::fromUtf8("PasswordLabel"));
    QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(PasswordLabel->sizePolicy().hasHeightForWidth());
    PasswordLabel->setSizePolicy(sizePolicy2);
    PasswordLabel->setWordWrap(false);

    vboxLayout->addWidget(PasswordLabel);

    Password = new QLineEdit(toNewConnectionUI);
    Password->setObjectName(QString::fromUtf8("Password"));
    sizePolicy.setHeightForWidth(Password->sizePolicy().hasHeightForWidth());
    Password->setSizePolicy(sizePolicy);
    Password->setEchoMode(QLineEdit::Password);

    vboxLayout->addWidget(Password);

    HostLabel = new QLabel(toNewConnectionUI);
    HostLabel->setObjectName(QString::fromUtf8("HostLabel"));
    sizePolicy1.setHeightForWidth(HostLabel->sizePolicy().hasHeightForWidth());
    HostLabel->setSizePolicy(sizePolicy1);
    HostLabel->setWordWrap(false);

    vboxLayout->addWidget(HostLabel);

    Host = new QComboBox(toNewConnectionUI);
    Host->setObjectName(QString::fromUtf8("Host"));
    QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
    sizePolicy3.setHorizontalStretch(0);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(Host->sizePolicy().hasHeightForWidth());
    Host->setSizePolicy(sizePolicy3);
    Host->setMinimumSize(QSize(200, 0));
    Host->setEditable(true);
    Host->setAutoCompletion(true);
    Host->setDuplicatesEnabled(false);

    vboxLayout->addWidget(Host);

    SchemaLabel = new QLabel(toNewConnectionUI);
    SchemaLabel->setObjectName(QString::fromUtf8("SchemaLabel"));
    sizePolicy.setHeightForWidth(SchemaLabel->sizePolicy().hasHeightForWidth());
    SchemaLabel->setSizePolicy(sizePolicy);
    SchemaLabel->setWordWrap(false);

    vboxLayout->addWidget(SchemaLabel);

    Schema = new QLineEdit(toNewConnectionUI);
    Schema->setObjectName(QString::fromUtf8("Schema"));
    sizePolicy.setHeightForWidth(Schema->sizePolicy().hasHeightForWidth());
    Schema->setSizePolicy(sizePolicy);
    Schema->setMinimumSize(QSize(200, 0));

    vboxLayout->addWidget(Schema);

    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    PortLabel = new QLabel(toNewConnectionUI);
    PortLabel->setObjectName(QString::fromUtf8("PortLabel"));
    PortLabel->setWordWrap(false);

    hboxLayout->addWidget(PortLabel);

    Port = new QSpinBox(toNewConnectionUI);
    Port->setObjectName(QString::fromUtf8("Port"));
    Port->setMaximum(65535);

    hboxLayout->addWidget(Port);


    vboxLayout->addLayout(hboxLayout);

    TextLabel3 = new QLabel(toNewConnectionUI);
    TextLabel3->setObjectName(QString::fromUtf8("TextLabel3"));
    TextLabel3->setWordWrap(false);
    TextLabel3->setTextInteractionFlags(Qt::NoTextInteraction);

    vboxLayout->addWidget(TextLabel3);

    Database = new QComboBox(toNewConnectionUI);
    Database->setObjectName(QString::fromUtf8("Database"));
    sizePolicy.setHeightForWidth(Database->sizePolicy().hasHeightForWidth());
    Database->setSizePolicy(sizePolicy);
    Database->setMinimumSize(QSize(200, 0));
    Database->setEditable(true);
    Database->setAutoCompletion(true);
    Database->setDuplicatesEnabled(false);

    vboxLayout->addWidget(Database);

    OptionGroup = new QGroupBox(toNewConnectionUI);
    OptionGroup->setObjectName(QString::fromUtf8("OptionGroup"));
    OptionGroup->setFocusPolicy(Qt::NoFocus);
    vboxLayout1 = new QVBoxLayout(OptionGroup);
    vboxLayout1->setSpacing(3);
    vboxLayout1->setMargin(11);
    vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
    vboxLayout1->setContentsMargins(6, 0, 0, 0);
    SqlNet = new QCheckBox(OptionGroup);
    SqlNet->setObjectName(QString::fromUtf8("SqlNet"));
    SqlNet->setChecked(true);

    vboxLayout1->addWidget(SqlNet);

    SysDba = new QCheckBox(OptionGroup);
    SysDba->setObjectName(QString::fromUtf8("SysDba"));

    vboxLayout1->addWidget(SysDba);

    SysOper = new QCheckBox(OptionGroup);
    SysOper->setObjectName(QString::fromUtf8("SysOper"));

    vboxLayout1->addWidget(SysOper);


    vboxLayout->addWidget(OptionGroup);

    spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    vboxLayout->addItem(spacerItem);


    gridLayout->addLayout(vboxLayout, 0, 2, 1, 1);

    ImportButton = new QPushButton(toNewConnectionUI);
    ImportButton->setObjectName(QString::fromUtf8("ImportButton"));

    gridLayout->addWidget(ImportButton, 1, 0, 1, 1);

    ButtonBox = new QDialogButtonBox(toNewConnectionUI);
    ButtonBox->setObjectName(QString::fromUtf8("ButtonBox"));
    ButtonBox->setOrientation(Qt::Horizontal);
    ButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

    gridLayout->addWidget(ButtonBox, 1, 1, 1, 2);

    TextLabel2->setBuddy(Previous);
    label->setBuddy(searchEdit);
    ProviderLabel->setBuddy(Provider);
    UsernameLabel->setBuddy(Username);
    PasswordLabel->setBuddy(Password);
    HostLabel->setBuddy(Host);
    SchemaLabel->setBuddy(Schema);
    PortLabel->setBuddy(Port);
    TextLabel3->setBuddy(Database);
    QWidget::setTabOrder(Previous, Provider);
    QWidget::setTabOrder(Provider, Username);
    QWidget::setTabOrder(Username, Password);
    QWidget::setTabOrder(Password, Host);
    QWidget::setTabOrder(Host, Schema);
    QWidget::setTabOrder(Schema, Port);
    QWidget::setTabOrder(Port, Database);
    QWidget::setTabOrder(Database, SqlNet);
    QWidget::setTabOrder(SqlNet, SysDba);
    QWidget::setTabOrder(SysDba, SysOper);
    QWidget::setTabOrder(SysOper, ButtonBox);
    QWidget::setTabOrder(ButtonBox, ImportButton);

    retranslateUi(toNewConnectionUI);
    QObject::connect(ButtonBox, SIGNAL(accepted()), toNewConnectionUI, SLOT(accept()));
    QObject::connect(ButtonBox, SIGNAL(rejected()), toNewConnectionUI, SLOT(reject()));

    QMetaObject::connectSlotsByName(toNewConnectionUI);
    } // setupUi

    void retranslateUi(QDialog *toNewConnectionUI)
    {
    toNewConnectionUI->setWindowTitle(QApplication::translate("toNewConnectionUI", "New connection", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    TextLabel2->setToolTip(QApplication::translate("toNewConnectionUI", "A list of previous connections. Select to bring over to the right.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    TextLabel2->setText(QApplication::translate("toNewConnectionUI", "Previous &connections", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("toNewConnectionUI", "Se&arch:", 0, QApplication::UnicodeUTF8));
    ProviderLabel->setText(QApplication::translate("toNewConnectionUI", "Connection pro&vider", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    UsernameLabel->setToolTip(QApplication::translate("toNewConnectionUI", "Username to connect with", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    UsernameLabel->setText(QApplication::translate("toNewConnectionUI", "&Username", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    PasswordLabel->setToolTip(QApplication::translate("toNewConnectionUI", "Password to connect with.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    PasswordLabel->setText(QApplication::translate("toNewConnectionUI", "&Password", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    HostLabel->setToolTip(QApplication::translate("toNewConnectionUI", "Select the database ID to connect to.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    HostLabel->setText(QApplication::translate("toNewConnectionUI", "&Host", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    SchemaLabel->setToolTip(QApplication::translate("toNewConnectionUI", "Schema to switch to", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    SchemaLabel->setText(QApplication::translate("toNewConnectionUI", "&Schema", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    PortLabel->setToolTip(QApplication::translate("toNewConnectionUI", "Select the database ID to connect to.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    PortLabel->setText(QApplication::translate("toNewConnectionUI", "P&ort", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    TextLabel3->setToolTip(QApplication::translate("toNewConnectionUI", "Select the database ID to connect to.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    TextLabel3->setText(QApplication::translate("toNewConnectionUI", "&Database", 0, QApplication::UnicodeUTF8));
    OptionGroup->setTitle(QApplication::translate("toNewConnectionUI", "Options", 0, QApplication::UnicodeUTF8));
    SqlNet->setText(QApplication::translate("toNewConnectionUI", "SQL*&Net", 0, QApplication::UnicodeUTF8));
    SysDba->setText(QApplication::translate("toNewConnectionUI", "S&YSDBA", 0, QApplication::UnicodeUTF8));
    SysOper->setText(QApplication::translate("toNewConnectionUI", "SYSOP&ER", 0, QApplication::UnicodeUTF8));
    ImportButton->setText(QApplication::translate("toNewConnectionUI", "&Import Connections...", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(toNewConnectionUI);
    } // retranslateUi

};

namespace Ui {
    class toNewConnectionUI: public Ui_toNewConnectionUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TONEWCONNECTIONUI_H
