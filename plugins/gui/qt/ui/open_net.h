#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading UI file 'open_net.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef OPEN_NET_H
#define OPEN_NET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OpenNetwork
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_1;
    QLabel *examples;
    QComboBox *urlComboBox;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *OpenNetwork)
    {
        if (OpenNetwork->objectName().isEmpty())
            OpenNetwork->setObjectName(QStringLiteral("OpenNetwork"));
        OpenNetwork->resize(487, 273);
        vboxLayout = new QVBoxLayout(OpenNetwork);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        groupBox = new QGroupBox(OpenNetwork);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_1 = new QLabel(groupBox);
        label_1->setObjectName(QStringLiteral("label_1"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_1->sizePolicy().hasHeightForWidth());
        label_1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_1, 0, 0, 1, 1);

        examples = new QLabel(groupBox);
        examples->setObjectName(QStringLiteral("examples"));
        examples->setStyleSheet(QStringLiteral("color: #838383; "));
        examples->setText(QLatin1String("http://www.example.com/stream.avi\n"
"rtp://@:1234\n"
"mms://mms.examples.com/stream.asx\n"
"rtsp://server.example.org:8080/test.sdp\n"
"http://www.yourtube.com/watch?v=gg64x"));
        examples->setMargin(5);
        examples->setIndent(10);

        gridLayout->addWidget(examples, 2, 0, 1, 1);

        urlComboBox = new QComboBox(groupBox);
        urlComboBox->setObjectName(QStringLiteral("urlComboBox"));
        urlComboBox->setMaximumSize(QSize(600, 16777215));
        urlComboBox->setEditable(true);
        urlComboBox->setInsertPolicy(QComboBox::NoInsert);

        gridLayout->addWidget(urlComboBox, 1, 0, 1, 1);


        vboxLayout->addWidget(groupBox);

        spacerItem = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        vboxLayout->addItem(spacerItem);


        retranslateUi(OpenNetwork);

        QMetaObject::connectSlotsByName(OpenNetwork);
    } // setupUi

    void retranslateUi(QWidget *OpenNetwork)
    {
        OpenNetwork->setWindowTitle(Q_("Form", Q_NULLPTR));
        groupBox->setTitle(Q_("Network Protocol", Q_NULLPTR));
        label_1->setText(Q_("Please enter a network URL:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OpenNetwork: public Ui_OpenNetwork {};
} // namespace Ui

QT_END_NAMESPACE

#endif // OPEN_NET_H
