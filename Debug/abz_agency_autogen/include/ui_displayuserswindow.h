/********************************************************************************
** Form generated from reading UI file 'displayuserswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYUSERSWINDOW_H
#define UI_DISPLAYUSERSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DisplayUsersWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout_3;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_38;
    QVBoxLayout *verticalLayout_13;
    QLabel *nameLabel1_3;
    QLabel *positionLabel1_3;
    QLabel *emailLabel1_3;
    QLabel *phoneLabel1_3;
    QFrame *line_10;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_39;
    QVBoxLayout *verticalLayout_14;
    QLabel *nameLabel2_3;
    QLabel *positionLabel2_3;
    QLabel *emailLabel2_3;
    QLabel *phoneLabel2_3;
    QFrame *line_11;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_40;
    QVBoxLayout *verticalLayout_15;
    QLabel *nameLabel3_3;
    QLabel *positionLabel3_3;
    QLabel *emailLabel3_3;
    QLabel *phoneLabel3_3;
    QFrame *line_12;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_41;
    QVBoxLayout *verticalLayout_16;
    QLabel *nameLabel4_3;
    QLabel *positionLabel4_3;
    QLabel *emailLabel4_3;
    QLabel *phoneLabel4_3;
    QFrame *line_13;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_42;
    QVBoxLayout *verticalLayout_17;
    QLabel *nameLabel5_3;
    QLabel *positionLabel5_3;
    QLabel *emailLabel5_3;
    QLabel *phoneLabel5_3;
    QFrame *line_14;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_43;
    QVBoxLayout *verticalLayout_18;
    QLabel *nameLabel6_3;
    QLabel *positionLabel6_3;
    QLabel *emailLabel6_3;
    QLabel *phoneLabel6_3;
    QFrame *line_15;
    QHBoxLayout *horizontalLayout_22;
    QPushButton *prev_page_btn_2;
    QPushButton *next_page_btn_2;
    QLabel *label_25;
    QWidget *tab_2;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *nameInput;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *emailInput;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *phoneInput;
    QHBoxLayout *horizontalLayout_36;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_14;
    QGridLayout *layoutForRadioBtns;
    QHBoxLayout *horizontalLayout_38;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_18;
    QHBoxLayout *horizontalLayout_39;
    QPushButton *choosePictureBtn;
    QLabel *chosenPicture;
    QSpacerItem *verticalSpacer;
    QPushButton *addUserBrn;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *successfullyAdded;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *showUsersBtn;
    QPushButton *addOnMoreUser;
    QLabel *addUserLabel;

    void setupUi(QMainWindow *DisplayUsersWindow)
    {
        if (DisplayUsersWindow->objectName().isEmpty())
            DisplayUsersWindow->setObjectName(QString::fromUtf8("DisplayUsersWindow"));
        DisplayUsersWindow->resize(600, 755);
        DisplayUsersWindow->setMinimumSize(QSize(600, 755));
        DisplayUsersWindow->setMaximumSize(QSize(600, 755));
        centralwidget = new QWidget(DisplayUsersWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 601, 811));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(100);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMaximumSize(QSize(701, 16777215));
        QFont font;
        font.setPointSize(11);
        tabWidget->setFont(font);
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(16, 16));
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        formLayoutWidget = new QWidget(tab);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 60, 581, 671));
        formLayout_3 = new QFormLayout(formLayoutWidget);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_38 = new QLabel(formLayoutWidget);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setMinimumSize(QSize(50, 50));
        label_38->setMaximumSize(QSize(50, 50));
        label_38->setAutoFillBackground(false);
        label_38->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background-color: gray;"));

        horizontalLayout_16->addWidget(label_38);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        nameLabel1_3 = new QLabel(formLayoutWidget);
        nameLabel1_3->setObjectName(QString::fromUtf8("nameLabel1_3"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        nameLabel1_3->setFont(font1);

        verticalLayout_13->addWidget(nameLabel1_3);

        positionLabel1_3 = new QLabel(formLayoutWidget);
        positionLabel1_3->setObjectName(QString::fromUtf8("positionLabel1_3"));

        verticalLayout_13->addWidget(positionLabel1_3);

        emailLabel1_3 = new QLabel(formLayoutWidget);
        emailLabel1_3->setObjectName(QString::fromUtf8("emailLabel1_3"));

        verticalLayout_13->addWidget(emailLabel1_3);

        phoneLabel1_3 = new QLabel(formLayoutWidget);
        phoneLabel1_3->setObjectName(QString::fromUtf8("phoneLabel1_3"));

        verticalLayout_13->addWidget(phoneLabel1_3);


        horizontalLayout_16->addLayout(verticalLayout_13);


        formLayout_3->setLayout(0, QFormLayout::SpanningRole, horizontalLayout_16);

        line_10 = new QFrame(formLayoutWidget);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        line_10->setMinimumSize(QSize(100, 3));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);

        formLayout_3->setWidget(1, QFormLayout::SpanningRole, line_10);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_39 = new QLabel(formLayoutWidget);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setMinimumSize(QSize(50, 50));
        label_39->setMaximumSize(QSize(50, 50));
        label_39->setAutoFillBackground(false);
        label_39->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background-color: gray;"));

        horizontalLayout_17->addWidget(label_39);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        nameLabel2_3 = new QLabel(formLayoutWidget);
        nameLabel2_3->setObjectName(QString::fromUtf8("nameLabel2_3"));
        nameLabel2_3->setFont(font1);

        verticalLayout_14->addWidget(nameLabel2_3);

        positionLabel2_3 = new QLabel(formLayoutWidget);
        positionLabel2_3->setObjectName(QString::fromUtf8("positionLabel2_3"));

        verticalLayout_14->addWidget(positionLabel2_3);

        emailLabel2_3 = new QLabel(formLayoutWidget);
        emailLabel2_3->setObjectName(QString::fromUtf8("emailLabel2_3"));

        verticalLayout_14->addWidget(emailLabel2_3);

        phoneLabel2_3 = new QLabel(formLayoutWidget);
        phoneLabel2_3->setObjectName(QString::fromUtf8("phoneLabel2_3"));

        verticalLayout_14->addWidget(phoneLabel2_3);


        horizontalLayout_17->addLayout(verticalLayout_14);


        formLayout_3->setLayout(2, QFormLayout::SpanningRole, horizontalLayout_17);

        line_11 = new QFrame(formLayoutWidget);
        line_11->setObjectName(QString::fromUtf8("line_11"));
        line_11->setMinimumSize(QSize(100, 3));
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);

        formLayout_3->setWidget(3, QFormLayout::SpanningRole, line_11);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_40 = new QLabel(formLayoutWidget);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setMinimumSize(QSize(50, 50));
        label_40->setMaximumSize(QSize(50, 50));
        label_40->setAutoFillBackground(false);
        label_40->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background-color: gray;"));

        horizontalLayout_18->addWidget(label_40);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        nameLabel3_3 = new QLabel(formLayoutWidget);
        nameLabel3_3->setObjectName(QString::fromUtf8("nameLabel3_3"));
        nameLabel3_3->setFont(font1);

        verticalLayout_15->addWidget(nameLabel3_3);

        positionLabel3_3 = new QLabel(formLayoutWidget);
        positionLabel3_3->setObjectName(QString::fromUtf8("positionLabel3_3"));

        verticalLayout_15->addWidget(positionLabel3_3);

        emailLabel3_3 = new QLabel(formLayoutWidget);
        emailLabel3_3->setObjectName(QString::fromUtf8("emailLabel3_3"));

        verticalLayout_15->addWidget(emailLabel3_3);

        phoneLabel3_3 = new QLabel(formLayoutWidget);
        phoneLabel3_3->setObjectName(QString::fromUtf8("phoneLabel3_3"));

        verticalLayout_15->addWidget(phoneLabel3_3);


        horizontalLayout_18->addLayout(verticalLayout_15);


        formLayout_3->setLayout(4, QFormLayout::SpanningRole, horizontalLayout_18);

        line_12 = new QFrame(formLayoutWidget);
        line_12->setObjectName(QString::fromUtf8("line_12"));
        line_12->setMinimumSize(QSize(100, 3));
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);

        formLayout_3->setWidget(5, QFormLayout::SpanningRole, line_12);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        label_41 = new QLabel(formLayoutWidget);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setMinimumSize(QSize(50, 50));
        label_41->setMaximumSize(QSize(50, 50));
        label_41->setAutoFillBackground(false);
        label_41->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background-color: gray;"));

        horizontalLayout_19->addWidget(label_41);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        nameLabel4_3 = new QLabel(formLayoutWidget);
        nameLabel4_3->setObjectName(QString::fromUtf8("nameLabel4_3"));
        nameLabel4_3->setFont(font1);

        verticalLayout_16->addWidget(nameLabel4_3);

        positionLabel4_3 = new QLabel(formLayoutWidget);
        positionLabel4_3->setObjectName(QString::fromUtf8("positionLabel4_3"));

        verticalLayout_16->addWidget(positionLabel4_3);

        emailLabel4_3 = new QLabel(formLayoutWidget);
        emailLabel4_3->setObjectName(QString::fromUtf8("emailLabel4_3"));

        verticalLayout_16->addWidget(emailLabel4_3);

        phoneLabel4_3 = new QLabel(formLayoutWidget);
        phoneLabel4_3->setObjectName(QString::fromUtf8("phoneLabel4_3"));

        verticalLayout_16->addWidget(phoneLabel4_3);


        horizontalLayout_19->addLayout(verticalLayout_16);


        formLayout_3->setLayout(6, QFormLayout::SpanningRole, horizontalLayout_19);

        line_13 = new QFrame(formLayoutWidget);
        line_13->setObjectName(QString::fromUtf8("line_13"));
        line_13->setMinimumSize(QSize(100, 3));
        line_13->setFrameShape(QFrame::HLine);
        line_13->setFrameShadow(QFrame::Sunken);

        formLayout_3->setWidget(7, QFormLayout::SpanningRole, line_13);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_42 = new QLabel(formLayoutWidget);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setMinimumSize(QSize(50, 50));
        label_42->setMaximumSize(QSize(50, 50));
        label_42->setAutoFillBackground(false);
        label_42->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background-color: gray;"));

        horizontalLayout_20->addWidget(label_42);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        nameLabel5_3 = new QLabel(formLayoutWidget);
        nameLabel5_3->setObjectName(QString::fromUtf8("nameLabel5_3"));
        nameLabel5_3->setFont(font1);

        verticalLayout_17->addWidget(nameLabel5_3);

        positionLabel5_3 = new QLabel(formLayoutWidget);
        positionLabel5_3->setObjectName(QString::fromUtf8("positionLabel5_3"));

        verticalLayout_17->addWidget(positionLabel5_3);

        emailLabel5_3 = new QLabel(formLayoutWidget);
        emailLabel5_3->setObjectName(QString::fromUtf8("emailLabel5_3"));

        verticalLayout_17->addWidget(emailLabel5_3);

        phoneLabel5_3 = new QLabel(formLayoutWidget);
        phoneLabel5_3->setObjectName(QString::fromUtf8("phoneLabel5_3"));

        verticalLayout_17->addWidget(phoneLabel5_3);


        horizontalLayout_20->addLayout(verticalLayout_17);


        formLayout_3->setLayout(8, QFormLayout::SpanningRole, horizontalLayout_20);

        line_14 = new QFrame(formLayoutWidget);
        line_14->setObjectName(QString::fromUtf8("line_14"));
        line_14->setMinimumSize(QSize(100, 3));
        line_14->setFrameShape(QFrame::HLine);
        line_14->setFrameShadow(QFrame::Sunken);

        formLayout_3->setWidget(9, QFormLayout::SpanningRole, line_14);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        label_43 = new QLabel(formLayoutWidget);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setMinimumSize(QSize(50, 50));
        label_43->setMaximumSize(QSize(50, 50));
        label_43->setAutoFillBackground(false);
        label_43->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background-color: gray;"));

        horizontalLayout_21->addWidget(label_43);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        nameLabel6_3 = new QLabel(formLayoutWidget);
        nameLabel6_3->setObjectName(QString::fromUtf8("nameLabel6_3"));
        nameLabel6_3->setFont(font1);

        verticalLayout_18->addWidget(nameLabel6_3);

        positionLabel6_3 = new QLabel(formLayoutWidget);
        positionLabel6_3->setObjectName(QString::fromUtf8("positionLabel6_3"));

        verticalLayout_18->addWidget(positionLabel6_3);

        emailLabel6_3 = new QLabel(formLayoutWidget);
        emailLabel6_3->setObjectName(QString::fromUtf8("emailLabel6_3"));

        verticalLayout_18->addWidget(emailLabel6_3);

        phoneLabel6_3 = new QLabel(formLayoutWidget);
        phoneLabel6_3->setObjectName(QString::fromUtf8("phoneLabel6_3"));

        verticalLayout_18->addWidget(phoneLabel6_3);


        horizontalLayout_21->addLayout(verticalLayout_18);


        formLayout_3->setLayout(10, QFormLayout::SpanningRole, horizontalLayout_21);

        line_15 = new QFrame(formLayoutWidget);
        line_15->setObjectName(QString::fromUtf8("line_15"));
        line_15->setMinimumSize(QSize(100, 3));
        line_15->setFrameShape(QFrame::HLine);
        line_15->setFrameShadow(QFrame::Sunken);

        formLayout_3->setWidget(11, QFormLayout::SpanningRole, line_15);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        prev_page_btn_2 = new QPushButton(formLayoutWidget);
        prev_page_btn_2->setObjectName(QString::fromUtf8("prev_page_btn_2"));

        horizontalLayout_22->addWidget(prev_page_btn_2);

        next_page_btn_2 = new QPushButton(formLayoutWidget);
        next_page_btn_2->setObjectName(QString::fromUtf8("next_page_btn_2"));
        next_page_btn_2->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_22->addWidget(next_page_btn_2);


        formLayout_3->setLayout(12, QFormLayout::SpanningRole, horizontalLayout_22);

        label_25 = new QLabel(tab);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(250, 10, 91, 41));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        label_25->setFont(font2);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        formLayoutWidget_2 = new QWidget(tab_2);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(10, 50, 581, 671));
        formLayout = new QFormLayout(formLayoutWidget_2);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        label_3 = new QLabel(formLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        horizontalLayout_25->addWidget(label_3);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_25->addItem(horizontalSpacer_6);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_25);

        nameInput = new QLineEdit(formLayoutWidget_2);
        nameInput->setObjectName(QString::fromUtf8("nameInput"));

        formLayout->setWidget(1, QFormLayout::FieldRole, nameInput);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        label_2 = new QLabel(formLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        horizontalLayout_24->addWidget(label_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer_4);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_24);

        emailInput = new QLineEdit(formLayoutWidget_2);
        emailInput->setObjectName(QString::fromUtf8("emailInput"));

        formLayout->setWidget(3, QFormLayout::FieldRole, emailInput);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        label = new QLabel(formLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);

        horizontalLayout_23->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_2);


        formLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout_23);

        phoneInput = new QLineEdit(formLayoutWidget_2);
        phoneInput->setObjectName(QString::fromUtf8("phoneInput"));

        formLayout->setWidget(5, QFormLayout::FieldRole, phoneInput);

        horizontalLayout_36 = new QHBoxLayout();
        horizontalLayout_36->setObjectName(QString::fromUtf8("horizontalLayout_36"));
        label_7 = new QLabel(formLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);

        horizontalLayout_36->addWidget(label_7);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_36->addItem(horizontalSpacer_14);


        formLayout->setLayout(6, QFormLayout::FieldRole, horizontalLayout_36);

        layoutForRadioBtns = new QGridLayout();
        layoutForRadioBtns->setObjectName(QString::fromUtf8("layoutForRadioBtns"));

        formLayout->setLayout(7, QFormLayout::FieldRole, layoutForRadioBtns);

        horizontalLayout_38 = new QHBoxLayout();
        horizontalLayout_38->setObjectName(QString::fromUtf8("horizontalLayout_38"));
        label_9 = new QLabel(formLayoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font1);

        horizontalLayout_38->addWidget(label_9);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_38->addItem(horizontalSpacer_18);


        formLayout->setLayout(8, QFormLayout::FieldRole, horizontalLayout_38);

        horizontalLayout_39 = new QHBoxLayout();
        horizontalLayout_39->setObjectName(QString::fromUtf8("horizontalLayout_39"));
        choosePictureBtn = new QPushButton(formLayoutWidget_2);
        choosePictureBtn->setObjectName(QString::fromUtf8("choosePictureBtn"));
        choosePictureBtn->setMaximumSize(QSize(115, 16777215));

        horizontalLayout_39->addWidget(choosePictureBtn);

        chosenPicture = new QLabel(formLayoutWidget_2);
        chosenPicture->setObjectName(QString::fromUtf8("chosenPicture"));

        horizontalLayout_39->addWidget(chosenPicture);


        formLayout->setLayout(9, QFormLayout::FieldRole, horizontalLayout_39);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(10, QFormLayout::FieldRole, verticalSpacer);

        addUserBrn = new QPushButton(formLayoutWidget_2);
        addUserBrn->setObjectName(QString::fromUtf8("addUserBrn"));

        formLayout->setWidget(11, QFormLayout::FieldRole, addUserBrn);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(12, QFormLayout::FieldRole, verticalSpacer_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(13, QFormLayout::FieldRole, verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        successfullyAdded = new QLabel(formLayoutWidget_2);
        successfullyAdded->setObjectName(QString::fromUtf8("successfullyAdded"));
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setWeight(75);
        successfullyAdded->setFont(font3);

        horizontalLayout_2->addWidget(successfullyAdded);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        formLayout->setLayout(14, QFormLayout::FieldRole, horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        showUsersBtn = new QPushButton(formLayoutWidget_2);
        showUsersBtn->setObjectName(QString::fromUtf8("showUsersBtn"));

        horizontalLayout->addWidget(showUsersBtn);

        addOnMoreUser = new QPushButton(formLayoutWidget_2);
        addOnMoreUser->setObjectName(QString::fromUtf8("addOnMoreUser"));

        horizontalLayout->addWidget(addOnMoreUser);


        formLayout->setLayout(15, QFormLayout::FieldRole, horizontalLayout);

        addUserLabel = new QLabel(tab_2);
        addUserLabel->setObjectName(QString::fromUtf8("addUserLabel"));
        addUserLabel->setGeometry(QRect(250, 10, 91, 17));
        addUserLabel->setFont(font2);
        tabWidget->addTab(tab_2, QString());
        DisplayUsersWindow->setCentralWidget(centralwidget);

        retranslateUi(DisplayUsersWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DisplayUsersWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DisplayUsersWindow)
    {
        DisplayUsersWindow->setWindowTitle(QApplication::translate("DisplayUsersWindow", "DisplayUsersWindow", nullptr));
        label_38->setText(QString());
        nameLabel1_3->setText(QApplication::translate("DisplayUsersWindow", "TextLabel", nullptr));
        positionLabel1_3->setText(QApplication::translate("DisplayUsersWindow", "TextLabel", nullptr));
        emailLabel1_3->setText(QApplication::translate("DisplayUsersWindow", "TextLabel", nullptr));
        phoneLabel1_3->setText(QApplication::translate("DisplayUsersWindow", "TextLabel", nullptr));
        label_39->setText(QString());
        nameLabel2_3->setText(QApplication::translate("DisplayUsersWindow", "TextLabel", nullptr));
        positionLabel2_3->setText(QApplication::translate("DisplayUsersWindow", "TextLabel", nullptr));
        emailLabel2_3->setText(QApplication::translate("DisplayUsersWindow", "TextLabel", nullptr));
        phoneLabel2_3->setText(QApplication::translate("DisplayUsersWindow", "TextLabel", nullptr));
        label_40->setText(QString());
        nameLabel3_3->setText(QApplication::translate("DisplayUsersWindow", "TextLabel", nullptr));
        positionLabel3_3->setText(QApplication::translate("DisplayUsersWindow", "TextLabel", nullptr));
        emailLabel3_3->setText(QApplication::translate("DisplayUsersWindow", "TextLabel", nullptr));
        phoneLabel3_3->setText(QApplication::translate("DisplayUsersWindow", "TextLabel", nullptr));
        label_41->setText(QString());
        nameLabel4_3->setText(QApplication::translate("DisplayUsersWindow", "TextLabel", nullptr));
        positionLabel4_3->setText(QApplication::translate("DisplayUsersWindow", "TextLabel", nullptr));
        emailLabel4_3->setText(QApplication::translate("DisplayUsersWindow", "TextLabel", nullptr));
        phoneLabel4_3->setText(QApplication::translate("DisplayUsersWindow", "TextLabel", nullptr));
        label_42->setText(QString());
        nameLabel5_3->setText(QApplication::translate("DisplayUsersWindow", "TextLabel", nullptr));
        positionLabel5_3->setText(QApplication::translate("DisplayUsersWindow", "TextLabel", nullptr));
        emailLabel5_3->setText(QApplication::translate("DisplayUsersWindow", "TextLabel", nullptr));
        phoneLabel5_3->setText(QApplication::translate("DisplayUsersWindow", "TextLabel", nullptr));
        label_43->setText(QString());
        nameLabel6_3->setText(QApplication::translate("DisplayUsersWindow", "TextLabel", nullptr));
        positionLabel6_3->setText(QApplication::translate("DisplayUsersWindow", "TextLabel", nullptr));
        emailLabel6_3->setText(QApplication::translate("DisplayUsersWindow", "TextLabel", nullptr));
        phoneLabel6_3->setText(QApplication::translate("DisplayUsersWindow", "TextLabel", nullptr));
        prev_page_btn_2->setText(QApplication::translate("DisplayUsersWindow", "Previous Page", nullptr));
        next_page_btn_2->setText(QApplication::translate("DisplayUsersWindow", "Next Page", nullptr));
        label_25->setText(QApplication::translate("DisplayUsersWindow", "Users List", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("DisplayUsersWindow", "Users", nullptr));
        label_3->setText(QApplication::translate("DisplayUsersWindow", "Name :", nullptr));
        nameInput->setPlaceholderText(QApplication::translate("DisplayUsersWindow", "Taras Shevchenko", nullptr));
        label_2->setText(QApplication::translate("DisplayUsersWindow", "Email : ", nullptr));
        emailInput->setPlaceholderText(QApplication::translate("DisplayUsersWindow", "taras.shevchenko@gmail.com", nullptr));
        label->setText(QApplication::translate("DisplayUsersWindow", "Phone :", nullptr));
        phoneInput->setInputMask(QString());
        phoneInput->setPlaceholderText(QApplication::translate("DisplayUsersWindow", "+38 066 777 77 77", nullptr));
        label_7->setText(QApplication::translate("DisplayUsersWindow", "Position :", nullptr));
        label_9->setText(QApplication::translate("DisplayUsersWindow", "Photo :", nullptr));
        choosePictureBtn->setText(QApplication::translate("DisplayUsersWindow", "Choose Picture", nullptr));
        chosenPicture->setText(QString());
        addUserBrn->setText(QApplication::translate("DisplayUsersWindow", "Add User", nullptr));
        successfullyAdded->setText(QApplication::translate("DisplayUsersWindow", "User added successfully!", nullptr));
        showUsersBtn->setText(QApplication::translate("DisplayUsersWindow", "Users List", nullptr));
        addOnMoreUser->setText(QApplication::translate("DisplayUsersWindow", "Add one more user", nullptr));
        addUserLabel->setText(QApplication::translate("DisplayUsersWindow", "Add User", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("DisplayUsersWindow", "Add User", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DisplayUsersWindow: public Ui_DisplayUsersWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYUSERSWINDOW_H
