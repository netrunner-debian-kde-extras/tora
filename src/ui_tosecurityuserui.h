/********************************************************************************
** Form generated from reading ui file 'tosecurityuserui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TOSECURITYUSERUI_H
#define UI_TOSECURITYUSERUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_toSecurityUserUI
{
public:
    QGridLayout *gridLayout;
    QLabel *NameLabel;
    QLabel *ProfileLabel;
    QComboBox *Profile;
    QLineEdit *Name;
    QSpacerItem *Spacer4;
    QTabWidget *Authentication;
    QWidget *PasswordTab;
    QGridLayout *gridLayout1;
    QLabel *TextLabel4;
    QLineEdit *Password;
    QLineEdit *Password2;
    QLabel *TextLabel4_2;
    QSpacerItem *Spacer1;
    QCheckBox *ExpirePassword;
    QWidget *ExternalTab;
    QGridLayout *gridLayout2;
    QLabel *TextLabel3;
    QWidget *GlobalTab;
    QGridLayout *gridLayout3;
    QLineEdit *GlobalName;
    QLabel *TextLabel1;
    QSpacerItem *Spacer5;
    QLabel *TextLabel6_2;
    QCheckBox *Locked;
    QComboBox *TempSpace;
    QFrame *Line1;
    QLabel *TextLabel6;
    QComboBox *DefaultSpace;
    QFrame *Line2;

    void setupUi(QWidget *toSecurityUserUI)
    {
    if (toSecurityUserUI->objectName().isEmpty())
        toSecurityUserUI->setObjectName(QString::fromUtf8("toSecurityUserUI"));
    toSecurityUserUI->resize(560, 480);
    gridLayout = new QGridLayout(toSecurityUserUI);
#ifndef Q_OS_MAC
    gridLayout->setSpacing(6);
#endif
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    NameLabel = new QLabel(toSecurityUserUI);
    NameLabel->setObjectName(QString::fromUtf8("NameLabel"));
    NameLabel->setWordWrap(false);

    gridLayout->addWidget(NameLabel, 0, 0, 1, 1);

    ProfileLabel = new QLabel(toSecurityUserUI);
    ProfileLabel->setObjectName(QString::fromUtf8("ProfileLabel"));
    ProfileLabel->setWordWrap(false);

    gridLayout->addWidget(ProfileLabel, 0, 3, 1, 1);

    Profile = new QComboBox(toSecurityUserUI);
    Profile->setObjectName(QString::fromUtf8("Profile"));

    gridLayout->addWidget(Profile, 0, 4, 1, 2);

    Name = new QLineEdit(toSecurityUserUI);
    Name->setObjectName(QString::fromUtf8("Name"));

    gridLayout->addWidget(Name, 0, 1, 1, 2);

    Spacer4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(Spacer4, 6, 3, 1, 1);

    Authentication = new QTabWidget(toSecurityUserUI);
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

    ExpirePassword = new QCheckBox(PasswordTab);
    ExpirePassword->setObjectName(QString::fromUtf8("ExpirePassword"));

    gridLayout1->addWidget(ExpirePassword, 2, 0, 1, 1);

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
    GlobalName = new QLineEdit(GlobalTab);
    GlobalName->setObjectName(QString::fromUtf8("GlobalName"));

    gridLayout3->addWidget(GlobalName, 1, 0, 1, 1);

    TextLabel1 = new QLabel(GlobalTab);
    TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
    TextLabel1->setWordWrap(false);

    gridLayout3->addWidget(TextLabel1, 0, 0, 1, 1);

    Spacer5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout3->addItem(Spacer5, 2, 0, 1, 1);

    Authentication->addTab(GlobalTab, QString());

    gridLayout->addWidget(Authentication, 1, 0, 1, 6);

    TextLabel6_2 = new QLabel(toSecurityUserUI);
    TextLabel6_2->setObjectName(QString::fromUtf8("TextLabel6_2"));
    TextLabel6_2->setWordWrap(false);

    gridLayout->addWidget(TextLabel6_2, 3, 3, 1, 2);

    Locked = new QCheckBox(toSecurityUserUI);
    Locked->setObjectName(QString::fromUtf8("Locked"));

    gridLayout->addWidget(Locked, 5, 0, 1, 6);

    TempSpace = new QComboBox(toSecurityUserUI);
    TempSpace->setObjectName(QString::fromUtf8("TempSpace"));

    gridLayout->addWidget(TempSpace, 3, 5, 1, 1);

    Line1 = new QFrame(toSecurityUserUI);
    Line1->setObjectName(QString::fromUtf8("Line1"));

    gridLayout->addWidget(Line1, 4, 0, 1, 6);

    TextLabel6 = new QLabel(toSecurityUserUI);
    TextLabel6->setObjectName(QString::fromUtf8("TextLabel6"));
    TextLabel6->setWordWrap(false);

    gridLayout->addWidget(TextLabel6, 3, 0, 1, 2);

    DefaultSpace = new QComboBox(toSecurityUserUI);
    DefaultSpace->setObjectName(QString::fromUtf8("DefaultSpace"));

    gridLayout->addWidget(DefaultSpace, 3, 2, 1, 1);

    Line2 = new QFrame(toSecurityUserUI);
    Line2->setObjectName(QString::fromUtf8("Line2"));

    gridLayout->addWidget(Line2, 2, 0, 1, 6);

    NameLabel->setBuddy(Name);
    ProfileLabel->setBuddy(Profile);
    TextLabel4->setBuddy(Password);
    TextLabel4_2->setBuddy(Password2);
    TextLabel1->setBuddy(GlobalName);
    TextLabel6_2->setBuddy(TempSpace);
    TextLabel6->setBuddy(DefaultSpace);
    QWidget::setTabOrder(Name, Profile);
    QWidget::setTabOrder(Profile, Authentication);
    QWidget::setTabOrder(Authentication, Password);
    QWidget::setTabOrder(Password, Password2);
    QWidget::setTabOrder(Password2, ExpirePassword);
    QWidget::setTabOrder(ExpirePassword, GlobalName);
    QWidget::setTabOrder(GlobalName, DefaultSpace);
    QWidget::setTabOrder(DefaultSpace, TempSpace);
    QWidget::setTabOrder(TempSpace, Locked);

    retranslateUi(toSecurityUserUI);

    QMetaObject::connectSlotsByName(toSecurityUserUI);
    } // setupUi

    void retranslateUi(QWidget *toSecurityUserUI)
    {
    toSecurityUserUI->setWindowTitle(QApplication::translate("toSecurityUserUI", "Form1", 0, QApplication::UnicodeUTF8));
    NameLabel->setText(QApplication::translate("toSecurityUserUI", "&Name", 0, QApplication::UnicodeUTF8));
    ProfileLabel->setText(QApplication::translate("toSecurityUserUI", "P&rofile", 0, QApplication::UnicodeUTF8));
    TextLabel4->setText(QApplication::translate("toSecurityUserUI", "Enter Password", 0, QApplication::UnicodeUTF8));
    TextLabel4_2->setText(QApplication::translate("toSecurityUserUI", "Confirm Password", 0, QApplication::UnicodeUTF8));
    ExpirePassword->setText(QApplication::translate("toSecurityUserUI", "Expire Password", 0, QApplication::UnicodeUTF8));
    Authentication->setTabText(Authentication->indexOf(PasswordTab), QApplication::translate("toSecurityUserUI", "&Password", 0, QApplication::UnicodeUTF8));
    TextLabel3->setText(QApplication::translate("toSecurityUserUI", "User authenticated by the operating system", 0, QApplication::UnicodeUTF8));
    Authentication->setTabText(Authentication->indexOf(ExternalTab), QApplication::translate("toSecurityUserUI", "&External", 0, QApplication::UnicodeUTF8));
    TextLabel1->setText(QApplication::translate("toSecurityUserUI", "&X.500 External Name", 0, QApplication::UnicodeUTF8));
    Authentication->setTabText(Authentication->indexOf(GlobalTab), QApplication::translate("toSecurityUserUI", "&Global", 0, QApplication::UnicodeUTF8));
    TextLabel6_2->setText(QApplication::translate("toSecurityUserUI", "&Temporary Tablespace", 0, QApplication::UnicodeUTF8));
    Locked->setText(QApplication::translate("toSecurityUserUI", "&Account Locked", 0, QApplication::UnicodeUTF8));
    TextLabel6->setText(QApplication::translate("toSecurityUserUI", "&Default Tablespace", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(toSecurityUserUI);
    } // retranslateUi

};

namespace Ui {
    class toSecurityUserUI: public Ui_toSecurityUserUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOSECURITYUSERUI_H
