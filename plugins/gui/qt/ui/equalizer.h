#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading UI file 'equalizer.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef EQUALIZER_H
#define EQUALIZER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EqualizerWidget
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QCheckBox *enableCheck;
    QCheckBox *eq2PassCheck;
    QSpacerItem *spacerItem;
    QLabel *presetLabel;
    QComboBox *presetsCombo;
    QSlider *preampSlider;
    QLabel *preampLabel;
    QSpacerItem *horizontalSpacer;
    QWidget *slidersPlaceholder;
    QLabel *preampValue;

    void setupUi(QWidget *EqualizerWidget)
    {
        if (EqualizerWidget->objectName().isEmpty())
            EqualizerWidget->setObjectName(QStringLiteral("EqualizerWidget"));
        EqualizerWidget->resize(341, 241);
        gridLayout = new QGridLayout(EqualizerWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        enableCheck = new QCheckBox(EqualizerWidget);
        enableCheck->setObjectName(QStringLiteral("enableCheck"));

        hboxLayout->addWidget(enableCheck);

        eq2PassCheck = new QCheckBox(EqualizerWidget);
        eq2PassCheck->setObjectName(QStringLiteral("eq2PassCheck"));

        hboxLayout->addWidget(eq2PassCheck);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        presetLabel = new QLabel(EqualizerWidget);
        presetLabel->setObjectName(QStringLiteral("presetLabel"));
        presetLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        hboxLayout->addWidget(presetLabel);

        presetsCombo = new QComboBox(EqualizerWidget);
        presetsCombo->setObjectName(QStringLiteral("presetsCombo"));
        presetsCombo->setMinimumSize(QSize(110, 0));

        hboxLayout->addWidget(presetsCombo);


        gridLayout->addLayout(hboxLayout, 0, 0, 1, 3);

        preampSlider = new QSlider(EqualizerWidget);
        preampSlider->setObjectName(QStringLiteral("preampSlider"));
        preampSlider->setMaximum(400);
        preampSlider->setValue(320);
        preampSlider->setOrientation(Qt::Vertical);

        gridLayout->addWidget(preampSlider, 1, 0, 1, 1);

        preampLabel = new QLabel(EqualizerWidget);
        preampLabel->setObjectName(QStringLiteral("preampLabel"));

        gridLayout->addWidget(preampLabel, 3, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        slidersPlaceholder = new QWidget(EqualizerWidget);
        slidersPlaceholder->setObjectName(QStringLiteral("slidersPlaceholder"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(slidersPlaceholder->sizePolicy().hasHeightForWidth());
        slidersPlaceholder->setSizePolicy(sizePolicy);

        gridLayout->addWidget(slidersPlaceholder, 1, 2, 4, 1);

        preampValue = new QLabel(EqualizerWidget);
        preampValue->setObjectName(QStringLiteral("preampValue"));

        gridLayout->addWidget(preampValue, 4, 0, 1, 2);

#ifndef QT_NO_SHORTCUT
        presetLabel->setBuddy(presetsCombo);
        preampLabel->setBuddy(preampSlider);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(enableCheck, eq2PassCheck);
        QWidget::setTabOrder(eq2PassCheck, presetsCombo);
        QWidget::setTabOrder(presetsCombo, preampSlider);

        retranslateUi(EqualizerWidget);

        QMetaObject::connectSlotsByName(EqualizerWidget);
    } // setupUi

    void retranslateUi(QWidget *EqualizerWidget)
    {
        EqualizerWidget->setWindowTitle(Q_("Form", Q_NULLPTR));
        enableCheck->setText(Q_("Enable", Q_NULLPTR));
        eq2PassCheck->setText(Q_("2 Pass", Q_NULLPTR));
        presetLabel->setText(Q_("Preset", Q_NULLPTR));
        preampLabel->setText(Q_("Preamp", Q_NULLPTR));
        preampValue->setText(Q_("0.00 dB", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EqualizerWidget: public Ui_EqualizerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // EQUALIZER_H
