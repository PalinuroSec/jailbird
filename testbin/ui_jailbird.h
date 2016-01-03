/********************************************************************************
** Form generated from reading UI file 'jailbird.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JAILBIRD_H
#define UI_JAILBIRD_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_jailbird
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *box0;
    QFrame *separator1;
    QHBoxLayout *header_box;
    QSpacerItem *horizontalSpacer_3;
    QLabel *target_label;
    QLineEdit *target;
    QRadioButton *target_valid;
    QSpacerItem *horizontalSpacer;
    QFrame *separator0;
    QLabel *infogather_title;
    QTabWidget *infogather;
    QWidget *infogather_osint_tab;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *infogather_footprint_tab;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QWidget *infogather_scan_tab;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *vulnscan_title;
    QTabWidget *vulnscan;
    QWidget *vulnscan_database_tab;
    QWidget *vulnscan_stress_tab;
    QLabel *exploit_title;
    QTabWidget *exploit;
    QWidget *exploit_metasploit_tab;
    QWidget *exploit_crack_tab;
    QWidget *exploit_maintain_tab;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *jailbird)
    {
        if (jailbird->objectName().isEmpty())
            jailbird->setObjectName(QStringLiteral("jailbird"));
        jailbird->resize(500, 600);
        jailbird->setMinimumSize(QSize(500, 600));
        jailbird->setMaximumSize(QSize(500, 600));
        jailbird->setLocale(QLocale(QLocale::C, QLocale::AnyCountry));
        centralWidget = new QWidget(jailbird);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 9, 491, 531));
        box0 = new QVBoxLayout(verticalLayoutWidget);
        box0->setSpacing(6);
        box0->setContentsMargins(11, 11, 11, 11);
        box0->setObjectName(QStringLiteral("box0"));
        box0->setSizeConstraint(QLayout::SetMinAndMaxSize);
        box0->setContentsMargins(0, 0, 0, 0);
        separator1 = new QFrame(verticalLayoutWidget);
        separator1->setObjectName(QStringLiteral("separator1"));
        separator1->setMinimumSize(QSize(0, 50));
        separator1->setFrameShape(QFrame::HLine);
        separator1->setFrameShadow(QFrame::Sunken);

        box0->addWidget(separator1);

        header_box = new QHBoxLayout();
        header_box->setSpacing(6);
        header_box->setObjectName(QStringLiteral("header_box"));
        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        header_box->addItem(horizontalSpacer_3);

        target_label = new QLabel(verticalLayoutWidget);
        target_label->setObjectName(QStringLiteral("target_label"));

        header_box->addWidget(target_label);

        target = new QLineEdit(verticalLayoutWidget);
        target->setObjectName(QStringLiteral("target"));
        QFont font;
        font.setFamily(QStringLiteral("Monospace"));
        target->setFont(font);
        target->setToolTipDuration(10);

        header_box->addWidget(target);

        target_valid = new QRadioButton(verticalLayoutWidget);
        target_valid->setObjectName(QStringLiteral("target_valid"));
        target_valid->setEnabled(true);
        target_valid->setMouseTracking(false);
#ifndef QT_NO_TOOLTIP
        target_valid->setToolTip(QStringLiteral(""));
#endif // QT_NO_TOOLTIP
        target_valid->setCheckable(true);
        target_valid->setChecked(false);
        target_valid->setAutoRepeat(false);
        target_valid->setAutoExclusive(true);

        header_box->addWidget(target_valid);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        header_box->addItem(horizontalSpacer);


        box0->addLayout(header_box);

        separator0 = new QFrame(verticalLayoutWidget);
        separator0->setObjectName(QStringLiteral("separator0"));
        separator0->setMinimumSize(QSize(0, 50));
        separator0->setFrameShape(QFrame::HLine);
        separator0->setFrameShadow(QFrame::Sunken);

        box0->addWidget(separator0);

        infogather_title = new QLabel(verticalLayoutWidget);
        infogather_title->setObjectName(QStringLiteral("infogather_title"));

        box0->addWidget(infogather_title);

        infogather = new QTabWidget(verticalLayoutWidget);
        infogather->setObjectName(QStringLiteral("infogather"));
        infogather_osint_tab = new QWidget();
        infogather_osint_tab->setObjectName(QStringLiteral("infogather_osint_tab"));
        horizontalLayoutWidget = new QWidget(infogather_osint_tab);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 481, 71));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        infogather->addTab(infogather_osint_tab, QString());
        infogather_footprint_tab = new QWidget();
        infogather_footprint_tab->setObjectName(QStringLiteral("infogather_footprint_tab"));
        horizontalLayoutWidget_2 = new QWidget(infogather_footprint_tab);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 0, 481, 71));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMinAndMaxSize);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        infogather->addTab(infogather_footprint_tab, QString());
        infogather_scan_tab = new QWidget();
        infogather_scan_tab->setObjectName(QStringLiteral("infogather_scan_tab"));
        horizontalLayoutWidget_3 = new QWidget(infogather_scan_tab);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(0, 0, 481, 71));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetMinAndMaxSize);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        infogather->addTab(infogather_scan_tab, QString());

        box0->addWidget(infogather);

        vulnscan_title = new QLabel(verticalLayoutWidget);
        vulnscan_title->setObjectName(QStringLiteral("vulnscan_title"));

        box0->addWidget(vulnscan_title);

        vulnscan = new QTabWidget(verticalLayoutWidget);
        vulnscan->setObjectName(QStringLiteral("vulnscan"));
        vulnscan_database_tab = new QWidget();
        vulnscan_database_tab->setObjectName(QStringLiteral("vulnscan_database_tab"));
        vulnscan->addTab(vulnscan_database_tab, QString());
        vulnscan_stress_tab = new QWidget();
        vulnscan_stress_tab->setObjectName(QStringLiteral("vulnscan_stress_tab"));
        vulnscan->addTab(vulnscan_stress_tab, QString());

        box0->addWidget(vulnscan);

        exploit_title = new QLabel(verticalLayoutWidget);
        exploit_title->setObjectName(QStringLiteral("exploit_title"));

        box0->addWidget(exploit_title);

        exploit = new QTabWidget(verticalLayoutWidget);
        exploit->setObjectName(QStringLiteral("exploit"));
        exploit_metasploit_tab = new QWidget();
        exploit_metasploit_tab->setObjectName(QStringLiteral("exploit_metasploit_tab"));
        exploit->addTab(exploit_metasploit_tab, QString());
        exploit_crack_tab = new QWidget();
        exploit_crack_tab->setObjectName(QStringLiteral("exploit_crack_tab"));
        exploit->addTab(exploit_crack_tab, QString());
        exploit_maintain_tab = new QWidget();
        exploit_maintain_tab->setObjectName(QStringLiteral("exploit_maintain_tab"));
        exploit->addTab(exploit_maintain_tab, QString());

        box0->addWidget(exploit);

        jailbird->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(jailbird);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 500, 27));
        jailbird->setMenuBar(menuBar);
        mainToolBar = new QToolBar(jailbird);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        jailbird->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(jailbird);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        jailbird->setStatusBar(statusBar);

        retranslateUi(jailbird);

        infogather->setCurrentIndex(0);
        vulnscan->setCurrentIndex(0);
        exploit->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(jailbird);
    } // setupUi

    void retranslateUi(QMainWindow *jailbird)
    {
        jailbird->setWindowTitle(QApplication::translate("jailbird", "JailBird Autopwn", 0));
        target_label->setText(QApplication::translate("jailbird", "Insert target", 0));
#ifndef QT_NO_TOOLTIP
        target->setToolTip(QApplication::translate("jailbird", "target.parrotsec.org", 0));
#endif // QT_NO_TOOLTIP
        target_valid->setText(QString());
        infogather_title->setText(QApplication::translate("jailbird", "information Gathering", 0));
        infogather->setTabText(infogather->indexOf(infogather_osint_tab), QApplication::translate("jailbird", "OSINT", 0));
        infogather->setTabText(infogather->indexOf(infogather_footprint_tab), QApplication::translate("jailbird", "Footprinting", 0));
        infogather->setTabText(infogather->indexOf(infogather_scan_tab), QApplication::translate("jailbird", "Deep scanning", 0));
        vulnscan_title->setText(QApplication::translate("jailbird", "Vulnerability scanning", 0));
        vulnscan->setTabText(vulnscan->indexOf(vulnscan_database_tab), QApplication::translate("jailbird", "Databases", 0));
        vulnscan->setTabText(vulnscan->indexOf(vulnscan_stress_tab), QApplication::translate("jailbird", "Stress Testing", 0));
        exploit_title->setText(QApplication::translate("jailbird", "Exploiting", 0));
        exploit->setTabText(exploit->indexOf(exploit_metasploit_tab), QApplication::translate("jailbird", "Metasploit", 0));
        exploit->setTabText(exploit->indexOf(exploit_crack_tab), QApplication::translate("jailbird", "Cracking", 0));
        exploit->setTabText(exploit->indexOf(exploit_maintain_tab), QApplication::translate("jailbird", "Maintaining access", 0));
    } // retranslateUi

};

namespace Ui {
    class jailbird: public Ui_jailbird {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JAILBIRD_H
