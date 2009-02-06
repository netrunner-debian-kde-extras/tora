/********************************************************************************
** Form generated from reading ui file 'toaboutui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TOABOUTUI_H
#define UI_TOABOUTUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_toAboutUI
{
public:
    QGridLayout *gridLayout;
    QPushButton *OkButton;
    QPushButton *CancelButton;
    QSpacerItem *spacerItem;
    QTextBrowser *TextView;

    void setupUi(QDialog *toAboutUI)
    {
    if (toAboutUI->objectName().isEmpty())
        toAboutUI->setObjectName(QString::fromUtf8("toAboutUI"));
    toAboutUI->resize(625, 500);
    gridLayout = new QGridLayout(toAboutUI);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setHorizontalSpacing(6);
    gridLayout->setVerticalSpacing(6);
    gridLayout->setContentsMargins(9, 9, 9, 9);
    OkButton = new QPushButton(toAboutUI);
    OkButton->setObjectName(QString::fromUtf8("OkButton"));
    OkButton->setDefault(true);

    gridLayout->addWidget(OkButton, 1, 1, 1, 1);

    CancelButton = new QPushButton(toAboutUI);
    CancelButton->setObjectName(QString::fromUtf8("CancelButton"));

    gridLayout->addWidget(CancelButton, 1, 2, 1, 1);

    spacerItem = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem, 1, 0, 1, 1);

    TextView = new QTextBrowser(toAboutUI);
    TextView->setObjectName(QString::fromUtf8("TextView"));
    TextView->setOpenLinks(false);

    gridLayout->addWidget(TextView, 0, 0, 1, 3);

    QWidget::setTabOrder(OkButton, CancelButton);

    retranslateUi(toAboutUI);
    QObject::connect(OkButton, SIGNAL(clicked()), toAboutUI, SLOT(accept()));
    QObject::connect(CancelButton, SIGNAL(clicked()), toAboutUI, SLOT(reject()));

    QMetaObject::connectSlotsByName(toAboutUI);
    } // setupUi

    void retranslateUi(QDialog *toAboutUI)
    {
    toAboutUI->setWindowTitle(QApplication::translate("toAboutUI", "toAboutUI", 0, QApplication::UnicodeUTF8));
    OkButton->setText(QApplication::translate("toAboutUI", "&Ok", 0, QApplication::UnicodeUTF8));
    CancelButton->setText(QApplication::translate("toAboutUI", "Cancel", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(toAboutUI);
    } // retranslateUi

};

namespace Ui {
    class toAboutUI: public Ui_toAboutUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOABOUTUI_H
