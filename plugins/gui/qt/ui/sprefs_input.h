#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading UI file 'sprefs_input.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef SPREFS_INPUT_H
#define SPREFS_INPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SPrefsInputAndCodecs
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QLabel *x264Label;
    QSpacerItem *horizontalSpacer;
    QLabel *hwAccelLabel;
    QComboBox *hwAccelModule;
    QLabel *ppLabel;
    QFrame *line;
    QComboBox *presetBox;
    QComboBox *profileBox;
    QComboBox *loopFilterBox;
    QLabel *filterLabel;
    QLabel *x264profileLabel;
    QComboBox *tuneBox;
    QSpinBox *PostProcLevel;
    QLineEdit *levelBox;
    QCheckBox *fastSeekBox;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QLabel *DVDLabel;
    QComboBox *DVDDeviceComboBox;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_3;
    QLabel *recordLabel;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *recordPath;
    QPushButton *recordBrowse;
    QLabel *aviLabel;
    QComboBox *AviRepair;
    QFrame *line_2;
    QCheckBox *mkvPreloadBox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *httpProxyLabel;
    QLineEdit *proxy;
    QHBoxLayout *horizontalLayout;
    QRadioButton *live555TransportHTTPRadio;
    QRadioButton *live555TransportRTSP_TCPRadio;
    QLabel *live555TransportLabel;
    QLabel *label_2;
    QComboBox *cachingCombo;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SPrefsInputAndCodecs)
    {
        if (SPrefsInputAndCodecs->objectName().isEmpty())
            SPrefsInputAndCodecs->setObjectName(QStringLiteral("SPrefsInputAndCodecs"));
        SPrefsInputAndCodecs->resize(737, 631);
        verticalLayout = new QVBoxLayout(SPrefsInputAndCodecs);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_3 = new QGroupBox(SPrefsInputAndCodecs);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        x264Label = new QLabel(groupBox_3);
        x264Label->setObjectName(QStringLiteral("x264Label"));
        x264Label->setMinimumSize(QSize(250, 0));

        gridLayout->addWidget(x264Label, 14, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 6, 1, 1, 1);

        hwAccelLabel = new QLabel(groupBox_3);
        hwAccelLabel->setObjectName(QStringLiteral("hwAccelLabel"));

        gridLayout->addWidget(hwAccelLabel, 4, 0, 1, 1);

        hwAccelModule = new QComboBox(groupBox_3);
        hwAccelModule->setObjectName(QStringLiteral("hwAccelModule"));

        gridLayout->addWidget(hwAccelModule, 4, 1, 1, 2);

        ppLabel = new QLabel(groupBox_3);
        ppLabel->setObjectName(QStringLiteral("ppLabel"));
        ppLabel->setMinimumSize(QSize(250, 0));

        gridLayout->addWidget(ppLabel, 6, 0, 1, 1);

        line = new QFrame(groupBox_3);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 12, 0, 1, 3);

        presetBox = new QComboBox(groupBox_3);
        presetBox->setObjectName(QStringLiteral("presetBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(presetBox->sizePolicy().hasHeightForWidth());
        presetBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(presetBox, 13, 1, 1, 1);

        profileBox = new QComboBox(groupBox_3);
        profileBox->setObjectName(QStringLiteral("profileBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(profileBox->sizePolicy().hasHeightForWidth());
        profileBox->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(profileBox, 14, 1, 1, 1);

        loopFilterBox = new QComboBox(groupBox_3);
        loopFilterBox->setObjectName(QStringLiteral("loopFilterBox"));

        gridLayout->addWidget(loopFilterBox, 10, 1, 1, 2);

        filterLabel = new QLabel(groupBox_3);
        filterLabel->setObjectName(QStringLiteral("filterLabel"));
        filterLabel->setMinimumSize(QSize(250, 0));

        gridLayout->addWidget(filterLabel, 10, 0, 1, 1);

        x264profileLabel = new QLabel(groupBox_3);
        x264profileLabel->setObjectName(QStringLiteral("x264profileLabel"));
        x264profileLabel->setMinimumSize(QSize(250, 0));

        gridLayout->addWidget(x264profileLabel, 13, 0, 1, 1);

        tuneBox = new QComboBox(groupBox_3);
        tuneBox->setObjectName(QStringLiteral("tuneBox"));

        gridLayout->addWidget(tuneBox, 13, 2, 1, 1);

        PostProcLevel = new QSpinBox(groupBox_3);
        PostProcLevel->setObjectName(QStringLiteral("PostProcLevel"));
        PostProcLevel->setMaximumSize(QSize(100, 16777215));
        PostProcLevel->setLayoutDirection(Qt::LeftToRight);
        PostProcLevel->setAlignment(Qt::AlignRight);
        PostProcLevel->setMinimum(0);
        PostProcLevel->setMaximum(6);
        PostProcLevel->setValue(6);

        gridLayout->addWidget(PostProcLevel, 6, 1, 1, 1);

        levelBox = new QLineEdit(groupBox_3);
        levelBox->setObjectName(QStringLiteral("levelBox"));

        gridLayout->addWidget(levelBox, 14, 2, 1, 1);

        fastSeekBox = new QCheckBox(groupBox_3);
        fastSeekBox->setObjectName(QStringLiteral("fastSeekBox"));

        gridLayout->addWidget(fastSeekBox, 5, 0, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        groupBox = new QGroupBox(SPrefsInputAndCodecs);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout1 = new QGridLayout(groupBox);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        DVDLabel = new QLabel(groupBox);
        DVDLabel->setObjectName(QStringLiteral("DVDLabel"));
        DVDLabel->setMinimumSize(QSize(250, 0));

        gridLayout1->addWidget(DVDLabel, 0, 0, 1, 1);

        DVDDeviceComboBox = new QComboBox(groupBox);
        DVDDeviceComboBox->setObjectName(QStringLiteral("DVDDeviceComboBox"));
        sizePolicy.setHeightForWidth(DVDDeviceComboBox->sizePolicy().hasHeightForWidth());
        DVDDeviceComboBox->setSizePolicy(sizePolicy);
        DVDDeviceComboBox->setEditable(true);

        gridLayout1->addWidget(DVDDeviceComboBox, 0, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_4 = new QGroupBox(SPrefsInputAndCodecs);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_3 = new QGridLayout(groupBox_4);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        recordLabel = new QLabel(groupBox_4);
        recordLabel->setObjectName(QStringLiteral("recordLabel"));
        recordLabel->setMinimumSize(QSize(250, 0));

        gridLayout_3->addWidget(recordLabel, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        recordPath = new QLineEdit(groupBox_4);
        recordPath->setObjectName(QStringLiteral("recordPath"));

        horizontalLayout_4->addWidget(recordPath);

        recordBrowse = new QPushButton(groupBox_4);
        recordBrowse->setObjectName(QStringLiteral("recordBrowse"));

        horizontalLayout_4->addWidget(recordBrowse);


        gridLayout_3->addLayout(horizontalLayout_4, 1, 1, 1, 1);

        aviLabel = new QLabel(groupBox_4);
        aviLabel->setObjectName(QStringLiteral("aviLabel"));

        gridLayout_3->addWidget(aviLabel, 4, 0, 1, 1);

        AviRepair = new QComboBox(groupBox_4);
        AviRepair->setObjectName(QStringLiteral("AviRepair"));

        gridLayout_3->addWidget(AviRepair, 4, 1, 1, 1);

        line_2 = new QFrame(groupBox_4);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_2, 2, 0, 1, 2);

        mkvPreloadBox = new QCheckBox(groupBox_4);
        mkvPreloadBox->setObjectName(QStringLiteral("mkvPreloadBox"));

        gridLayout_3->addWidget(mkvPreloadBox, 3, 0, 1, 2);


        verticalLayout->addWidget(groupBox_4);

        groupBox_2 = new QGroupBox(SPrefsInputAndCodecs);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        httpProxyLabel = new QLabel(groupBox_2);
        httpProxyLabel->setObjectName(QStringLiteral("httpProxyLabel"));
        httpProxyLabel->setMinimumSize(QSize(250, 0));

        gridLayout_2->addWidget(httpProxyLabel, 2, 0, 1, 1);

        proxy = new QLineEdit(groupBox_2);
        proxy->setObjectName(QStringLiteral("proxy"));

        gridLayout_2->addWidget(proxy, 2, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        live555TransportHTTPRadio = new QRadioButton(groupBox_2);
        live555TransportHTTPRadio->setObjectName(QStringLiteral("live555TransportHTTPRadio"));
        live555TransportHTTPRadio->setCheckable(true);
        live555TransportHTTPRadio->setChecked(true);

        horizontalLayout->addWidget(live555TransportHTTPRadio);

        live555TransportRTSP_TCPRadio = new QRadioButton(groupBox_2);
        live555TransportRTSP_TCPRadio->setObjectName(QStringLiteral("live555TransportRTSP_TCPRadio"));

        horizontalLayout->addWidget(live555TransportRTSP_TCPRadio);


        gridLayout_2->addLayout(horizontalLayout, 3, 1, 1, 1);

        live555TransportLabel = new QLabel(groupBox_2);
        live555TransportLabel->setObjectName(QStringLiteral("live555TransportLabel"));
        live555TransportLabel->setMinimumSize(QSize(250, 0));

        gridLayout_2->addWidget(live555TransportLabel, 3, 0, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(250, 0));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        cachingCombo = new QComboBox(groupBox_2);
        cachingCombo->setObjectName(QStringLiteral("cachingCombo"));

        gridLayout_2->addWidget(cachingCombo, 0, 1, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

#ifndef QT_NO_SHORTCUT
        x264Label->setBuddy(levelBox);
        hwAccelLabel->setBuddy(hwAccelModule);
        ppLabel->setBuddy(PostProcLevel);
        filterLabel->setBuddy(loopFilterBox);
        x264profileLabel->setBuddy(tuneBox);
        DVDLabel->setBuddy(DVDDeviceComboBox);
        recordLabel->setBuddy(recordPath);
        aviLabel->setBuddy(AviRepair);
        httpProxyLabel->setBuddy(proxy);
        live555TransportLabel->setBuddy(live555TransportHTTPRadio);
        label_2->setBuddy(cachingCombo);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(hwAccelModule, fastSeekBox);
        QWidget::setTabOrder(fastSeekBox, PostProcLevel);
        QWidget::setTabOrder(PostProcLevel, loopFilterBox);
        QWidget::setTabOrder(loopFilterBox, presetBox);
        QWidget::setTabOrder(presetBox, tuneBox);
        QWidget::setTabOrder(tuneBox, profileBox);
        QWidget::setTabOrder(profileBox, levelBox);
        QWidget::setTabOrder(levelBox, DVDDeviceComboBox);
        QWidget::setTabOrder(DVDDeviceComboBox, recordPath);
        QWidget::setTabOrder(recordPath, recordBrowse);
        QWidget::setTabOrder(recordBrowse, mkvPreloadBox);
        QWidget::setTabOrder(mkvPreloadBox, AviRepair);
        QWidget::setTabOrder(AviRepair, cachingCombo);
        QWidget::setTabOrder(cachingCombo, proxy);
        QWidget::setTabOrder(proxy, live555TransportHTTPRadio);
        QWidget::setTabOrder(live555TransportHTTPRadio, live555TransportRTSP_TCPRadio);

        retranslateUi(SPrefsInputAndCodecs);

        QMetaObject::connectSlotsByName(SPrefsInputAndCodecs);
    } // setupUi

    void retranslateUi(QWidget *SPrefsInputAndCodecs)
    {
        SPrefsInputAndCodecs->setWindowTitle(Q_("Form", Q_NULLPTR));
        groupBox_3->setTitle(Q_("Codecs", Q_NULLPTR));
        x264Label->setText(Q_("x264 profile and level selection", Q_NULLPTR));
        hwAccelLabel->setText(Q_("Hardware-accelerated decoding", Q_NULLPTR));
        ppLabel->setText(Q_("Video quality post-processing level", Q_NULLPTR));
        filterLabel->setText(Q_("Skip H.264 in-loop deblocking filter", Q_NULLPTR));
        x264profileLabel->setText(Q_("x264 preset and tuning selection", Q_NULLPTR));
        fastSeekBox->setText(Q_("Fast seek", Q_NULLPTR));
        groupBox->setTitle(Q_("Optical drive", Q_NULLPTR));
        DVDLabel->setText(Q_("Default optical device", Q_NULLPTR));
        groupBox_4->setTitle(Q_("Files", Q_NULLPTR));
        recordLabel->setText(Q_("Record directory or filename", Q_NULLPTR));
        recordBrowse->setText(Q_("Browse...", Q_NULLPTR));
        aviLabel->setText(Q_("Damaged or incomplete AVI file", Q_NULLPTR));
        mkvPreloadBox->setText(Q_("Preload MKV files in the same directory", Q_NULLPTR));
        groupBox_2->setTitle(Q_("Network", Q_NULLPTR));
        httpProxyLabel->setText(Q_("HTTP proxy URL", Q_NULLPTR));
        live555TransportHTTPRadio->setText(Q_("HTTP (default)", Q_NULLPTR));
        live555TransportRTSP_TCPRadio->setText(Q_("RTP over RTSP (TCP)", Q_NULLPTR));
        live555TransportLabel->setText(Q_("Live555 stream transport", Q_NULLPTR));
        label_2->setText(Q_("Default caching policy", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SPrefsInputAndCodecs: public Ui_SPrefsInputAndCodecs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SPREFS_INPUT_H
