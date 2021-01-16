#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading UI file 'open_capture.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef OPEN_CAPTURE_H
#define OPEN_CAPTURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OpenCapture
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *deviceCombo;
    QFrame *line;
    QGroupBox *cardBox;
    QGroupBox *optionsBox;
    QSpacerItem *spacerItem;
    QPushButton *advancedButton;

    void setupUi(QWidget *OpenCapture)
    {
        if (OpenCapture->objectName().isEmpty())
            OpenCapture->setObjectName(QStringLiteral("OpenCapture"));
        OpenCapture->resize(392, 134);
        gridLayout = new QGridLayout(OpenCapture);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(OpenCapture);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        deviceCombo = new QComboBox(OpenCapture);
        deviceCombo->setObjectName(QStringLiteral("deviceCombo"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(deviceCombo->sizePolicy().hasHeightForWidth());
        deviceCombo->setSizePolicy(sizePolicy);

        gridLayout->addWidget(deviceCombo, 0, 2, 1, 2);

        line = new QFrame(OpenCapture);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 4);

        cardBox = new QGroupBox(OpenCapture);
        cardBox->setObjectName(QStringLiteral("cardBox"));

        gridLayout->addWidget(cardBox, 2, 0, 1, 4);

        optionsBox = new QGroupBox(OpenCapture);
        optionsBox->setObjectName(QStringLiteral("optionsBox"));

        gridLayout->addWidget(optionsBox, 3, 0, 1, 4);

        spacerItem = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(spacerItem, 5, 0, 1, 4);

        advancedButton = new QPushButton(OpenCapture);
        advancedButton->setObjectName(QStringLiteral("advancedButton"));

        gridLayout->addWidget(advancedButton, 4, 3, 1, 1);


        retranslateUi(OpenCapture);

        QMetaObject::connectSlotsByName(OpenCapture);
    } // setupUi

    void retranslateUi(QWidget *OpenCapture)
    {
        label->setText(Q_("Capture mode", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        deviceCombo->setToolTip(Q_("Select the capture device type", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cardBox->setTitle(Q_("Device Selection", Q_NULLPTR));
        optionsBox->setTitle(Q_("Options", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        advancedButton->setToolTip(Q_("Access advanced options to tweak the device", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        advancedButton->setText(Q_("Advanced options...", Q_NULLPTR));
        Q_UNUSED(OpenCapture);
    } // retranslateUi

};

namespace Ui {
    class OpenCapture: public Ui_OpenCapture {};
} // namespace Ui

QT_END_NAMESPACE

#endif // OPEN_CAPTURE_H
