/********************************************************************************
** Form generated from reading ui file 'tohelpui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TOHELPUI_H
#define UI_TOHELPUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QToolButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_toHelp
{
public:
    QGridLayout *gridLayout;
    QToolButton *backButton;
    QToolButton *forwardButton;
    QSpacerItem *spacerItem;
    QSplitter *splitter;
    QTabWidget *tabs;
    QWidget *tab;
    QGridLayout *gridLayout1;
    QTreeWidget *Sections;
    QWidget *tab_2;
    QGridLayout *gridLayout2;
    QLabel *label;
    QLineEdit *SearchLine;
    QLabel *label_2;
    QComboBox *Manuals;
    QProgressBar *Progress;
    QTreeWidget *Result;
    QTextBrowser *Help;

    void setupUi(QDialog *toHelp)
    {
    if (toHelp->objectName().isEmpty())
        toHelp->setObjectName(QString::fromUtf8("toHelp"));
    toHelp->resize(678, 452);
    gridLayout = new QGridLayout(toHelp);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    backButton = new QToolButton(toHelp);
    backButton->setObjectName(QString::fromUtf8("backButton"));
    backButton->setEnabled(false);
    backButton->setArrowType(Qt::LeftArrow);

    gridLayout->addWidget(backButton, 0, 0, 1, 1);

    forwardButton = new QToolButton(toHelp);
    forwardButton->setObjectName(QString::fromUtf8("forwardButton"));
    forwardButton->setEnabled(false);
    forwardButton->setArrowType(Qt::RightArrow);

    gridLayout->addWidget(forwardButton, 0, 1, 1, 1);

    spacerItem = new QSpacerItem(271, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem, 0, 2, 1, 1);

    splitter = new QSplitter(toHelp);
    splitter->setObjectName(QString::fromUtf8("splitter"));
    splitter->setOrientation(Qt::Horizontal);
    tabs = new QTabWidget(splitter);
    tabs->setObjectName(QString::fromUtf8("tabs"));
    tab = new QWidget();
    tab->setObjectName(QString::fromUtf8("tab"));
    tab->setGeometry(QRect(0, 0, 332, 375));
    gridLayout1 = new QGridLayout(tab);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    Sections = new QTreeWidget(tab);
    Sections->setObjectName(QString::fromUtf8("Sections"));
    Sections->setAlternatingRowColors(true);

    gridLayout1->addWidget(Sections, 0, 0, 1, 1);

    tabs->addTab(tab, QString());
    tab_2 = new QWidget();
    tab_2->setObjectName(QString::fromUtf8("tab_2"));
    tab_2->setGeometry(QRect(0, 0, 332, 375));
    gridLayout2 = new QGridLayout(tab_2);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    label = new QLabel(tab_2);
    label->setObjectName(QString::fromUtf8("label"));

    gridLayout2->addWidget(label, 0, 0, 1, 1);

    SearchLine = new QLineEdit(tab_2);
    SearchLine->setObjectName(QString::fromUtf8("SearchLine"));

    gridLayout2->addWidget(SearchLine, 0, 1, 1, 1);

    label_2 = new QLabel(tab_2);
    label_2->setObjectName(QString::fromUtf8("label_2"));

    gridLayout2->addWidget(label_2, 1, 0, 1, 1);

    Manuals = new QComboBox(tab_2);
    Manuals->setObjectName(QString::fromUtf8("Manuals"));

    gridLayout2->addWidget(Manuals, 1, 1, 1, 1);

    Progress = new QProgressBar(tab_2);
    Progress->setObjectName(QString::fromUtf8("Progress"));
    Progress->setValue(24);

    gridLayout2->addWidget(Progress, 2, 0, 1, 2);

    Result = new QTreeWidget(tab_2);
    Result->setObjectName(QString::fromUtf8("Result"));
    Result->setAlternatingRowColors(true);

    gridLayout2->addWidget(Result, 3, 0, 1, 2);

    tabs->addTab(tab_2, QString());
    splitter->addWidget(tabs);
    Help = new QTextBrowser(splitter);
    Help->setObjectName(QString::fromUtf8("Help"));
    splitter->addWidget(Help);

    gridLayout->addWidget(splitter, 1, 0, 1, 3);

    backButton->raise();
    forwardButton->raise();
    splitter->raise();
    QWidget::setTabOrder(tabs, backButton);
    QWidget::setTabOrder(backButton, forwardButton);
    QWidget::setTabOrder(forwardButton, Sections);
    QWidget::setTabOrder(Sections, SearchLine);
    QWidget::setTabOrder(SearchLine, Manuals);
    QWidget::setTabOrder(Manuals, Result);
    QWidget::setTabOrder(Result, Help);

    retranslateUi(toHelp);

    tabs->setCurrentIndex(0);


    QMetaObject::connectSlotsByName(toHelp);
    } // setupUi

    void retranslateUi(QDialog *toHelp)
    {
    toHelp->setWindowTitle(QApplication::translate("toHelp", "Help Browser", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    backButton->setToolTip(QApplication::translate("toHelp", "Backward one help page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP


#ifndef QT_NO_TOOLTIP
    forwardButton->setToolTip(QApplication::translate("toHelp", "Forward one help page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    Sections->headerItem()->setText(0, QApplication::translate("toHelp", "Contents", 0, QApplication::UnicodeUTF8));
    tabs->setTabText(tabs->indexOf(tab), QApplication::translate("toHelp", "Contents", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("toHelp", "Search:", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("toHelp", "Manuals:", 0, QApplication::UnicodeUTF8));
    Manuals->insertItems(0, QStringList()
     << QApplication::translate("toHelp", "All manuals", 0, QApplication::UnicodeUTF8)
    );
    Result->headerItem()->setText(0, QApplication::translate("toHelp", "Result", 0, QApplication::UnicodeUTF8));
    Result->headerItem()->setText(1, QApplication::translate("toHelp", "Manual", 0, QApplication::UnicodeUTF8));
    tabs->setTabText(tabs->indexOf(tab_2), QApplication::translate("toHelp", "Search", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(toHelp);
    } // retranslateUi

};

namespace Ui {
    class toHelp: public Ui_toHelp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOHELPUI_H
