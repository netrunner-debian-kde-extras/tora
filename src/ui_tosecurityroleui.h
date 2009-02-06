/********************************************************************************
** Form generated from reading ui file 'tosecurityroleui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TOSECURITYROLEUI_H
#define UI_TOSECURITYROLEUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_toSecurityRoleUI
{
public:
    QGridLayout *gridLayout;
    QLineEdit *Name;
    QLabel *NameLabel;
    QTabWidget *Authentication;
    QWidget *PasswordTab;
    QGridLayout *gridLayout1;
    QLabel *TextLabel4;
    QLineEdit *Password;
    QLineEdit *Password2;
    QLabel *TextLabel4_2;
    QSpacerItem *Spacer1;
    QWidget *ExternalTab;
    QGridLayout *gridLayout2;
    QLabel *TextLabel3;
    QWidget *GlobalTab;
    QGridLayout *gridLayout3;
    QLabel *TextLabel3_2;
    QWidget *NoneTab;
    QGridLayout *gridLayout4;
    QLabel *TextLabel1;
    QSpacerItem *Spacer1_2;

    void setupUi(QWidget *toSecurityRoleUI)
    {
    if (toSecurityRoleUI->objectName().isEmpty())
        toSecurityRoleUI->setObjectName(QString::fromUtf8("toSecurityRoleUI"));
    toSecurityRoleUI->resize(576, 480);
    gridLayout = new QGridLayout(toSecurityRoleUI);
#ifndef Q_OS_MAC
    gridLayout->setSpacing(6);
#endif
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    Name = new QLineEdit(toSecurityRoleUI);
    Name->setObjectName(QString::fromUtf8("Name"));

    gridLayout->addWidget(Name, 0, 1, 1, 1);

    NameLabel = new QLabel(toSecurityRoleUI);
    NameLabel->setObjectName(QString::fromUtf8("NameLabel"));
    NameLabel->setWordWrap(false);

    gridLayout->addWidget(NameLabel, 0, 0, 1, 1);

    Authentication = new QTabWidget(toSecurityRoleUI);
    Authentication->setObjectName(QString::fromUtf8("Authentication"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(1));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(Authentication->sizePolicy().hasHeightForWidth());
    Authentication->setSizePolicy(sizePolicy);
    PasswordTab = new QWidget();
    PasswordTab->setObjectName(QString::fromUtf8("PasswordTab"));
    gridLayout1 = new QGridLayout(PasswordTab);
#ifndef Q_OS_MAC
    gridLayout1->setSpacing(6);
#endif
    gridLayout1->setMargin(11);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    TextLabel4 = new QLabel(PasswordTab);
    TextLabel4->setObjectName(QString::fromUtf8("TextLabel4"));
    TextLabel4->setWordWrap(false);

    gridLayout1->addWidget(TextLabel4, 0, 0, 1, 1);

    Password = new QLineEdit(PasswordTab);
    Password->setObjectName(QString::fromUtf8("Password"));
    Password->setEchoMode(QLineEdit::Password);

    gridLayout1->addWidget(Password, 0, 1, 1, 1);

    Password2 = new QLineEdit(PasswordTab);
    Password2->setObjectName(QString::fromUtf8("Password2"));
    Password2->setEchoMode(QLineEdit::Password);

    gridLayout1->addWidget(Password2, 1, 1, 1, 1);

    TextLabel4_2 = new QLabel(PasswordTab);
    TextLabel4_2->setObjectName(QString::fromUtf8("TextLabel4_2"));
    TextLabel4_2->setWordWrap(false);

    gridLayout1->addWidget(TextLabel4_2, 1, 0, 1, 1);

    Spacer1 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout1->addItem(Spacer1, 1, 2, 1, 1);

    Authentication->addTab(PasswordTab, QString());
    ExternalTab = new QWidget();
    ExternalTab->setObjectName(QString::fromUtf8("ExternalTab"));
    gridLayout2 = new QGridLayout(ExternalTab);
#ifndef Q_OS_MAC
    gridLayout2->setSpacing(6);
#endif
    gridLayout2->setMargin(11);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    TextLabel3 = new QLabel(ExternalTab);
    TextLabel3->setObjectName(QString::fromUtf8("TextLabel3"));
    TextLabel3->setWordWrap(false);

    gridLayout2->addWidget(TextLabel3, 0, 0, 1, 1);

    Authentication->addTab(ExternalTab, QString());
    GlobalTab = new QWidget();
    GlobalTab->setObjectName(QString::fromUtf8("GlobalTab"));
    gridLayout3 = new QGridLayout(GlobalTab);
#ifndef Q_OS_MAC
    gridLayout3->setSpacing(6);
#endif
    gridLayout3->setMargin(11);
    gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
    TextLabel3_2 = new QLabel(GlobalTab);
    TextLabel3_2->setObjectName(QString::fromUtf8("TextLabel3_2"));
    TextLabel3_2->setWordWrap(false);

    gridLayout3->addWidget(TextLabel3_2, 0, 0, 1, 1);

    Authentication->addTab(GlobalTab, QString());
    NoneTab = new QWidget();
    NoneTab->setObjectName(QString::fromUtf8("NoneTab"));
    gridLayout4 = new QGridLayout(NoneTab);
#ifndef Q_OS_MAC
    gridLayout4->setSpacing(6);
#endif
    gridLayout4->setMargin(11);
    gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
    TextLabel1 = new QLabel(NoneTab);
    TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
    TextLabel1->setWordWrap(false);

    gridLayout4->addWidget(TextLabel1, 0, 0, 1, 1);

    Authentication->addTab(NoneTab, QString());

    gridLayout->addWidget(Authentication, 1, 0, 1, 2);

    Spacer1_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(Spacer1_2, 2, 1, 1, 1);

    NameLabel->setBuddy(Name);
    TextLabel4->setBuddy(Password);
    TextLabel4_2->setBuddy(Password2);

    retranslateUi(toSecurityRoleUI);

    QMetaObject::connectSlotsByName(toSecurityRoleUI);
    } // setupUi

    void retranslateUi(QWidget *toSecurityRoleUI)
    {
    toSecurityRoleUI->setWindowTitle(QApplication::translate("toSecurityRoleUI", "Form2", 0, QApplication::UnicodeUTF8));
    NameLabel->setText(QApplication::translate("toSecurityRoleUI", "&Name", 0, QApplication::UnicodeUTF8));
    TextLabel4->setText(QApplication::translate("toSecurityRoleUI", "Enter Password", 0, QApplication::UnicodeUTF8));
    TextLabel4_2->setText(QApplication::translate("toSecurityRoleUI", "Confirm Password", 0, QApplication::UnicodeUTF8));
    Authentication->setTabText(Authentication->indexOf(PasswordTab), QApplication::translate("toSecurityRoleUI", "&Password", 0, QApplication::UnicodeUTF8));
    TextLabel3->setText(QApplication::translate("toSecurityRoleUI", "Role authenticated by the operating system", 0, QApplication::UnicodeUTF8));
    Authentication->setTabText(Authentication->indexOf(ExternalTab), QApplication::translate("toSecurityRoleUI", "&External", 0, QApplication::UnicodeUTF8));
    TextLabel3_2->setText(QApplication::translate("toSecurityRoleUI", "Role authenticated globally", 0, QApplication::UnicodeUTF8));
    Authentication->setTabText(Authentication->indexOf(GlobalTab), QApplication::translate("toSecurityRoleUI", "&Global", 0, QApplication::UnicodeUTF8));
    TextLabel1->setText(QApplication::translate("toSecurityRoleUI", "No password required for role", 0, QApplication::UnicodeUTF8));
    Authentication->setTabText(Authentication->indexOf(NoneTab), QApplication::translate("toSecurityRoleUI", "None", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(toSecurityRoleUI);
    } // retranslateUi

};

namespace Ui {
    class toSecurityRoleUI: public Ui_toSecurityRoleUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOSECURITYROLEUI_H
