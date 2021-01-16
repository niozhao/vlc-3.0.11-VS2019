#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading UI file 'open_file.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef OPEN_FILE_H
#define OPEN_FILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OpenFile
{
public:
    QGridLayout *gridLayout;
    QGroupBox *subGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *subInput;
    QPushButton *subBrowseButton;
    QGroupBox *tempWidget;
    QGridLayout *gridLayout1;
    QLabel *label;
    QListWidget *fileListWidg;
    QPushButton *fileBrowseButton;
    QPushButton *removeFileButton;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *OpenFile)
    {
        if (OpenFile->objectName().isEmpty())
            OpenFile->setObjectName(QStringLiteral("OpenFile"));
        OpenFile->resize(564, 258);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OpenFile->sizePolicy().hasHeightForWidth());
        OpenFile->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(OpenFile);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        subGroupBox = new QGroupBox(OpenFile);
        subGroupBox->setObjectName(QStringLiteral("subGroupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(subGroupBox->sizePolicy().hasHeightForWidth());
        subGroupBox->setSizePolicy(sizePolicy1);
        subGroupBox->setCheckable(true);
        subGroupBox->setChecked(false);
        horizontalLayout_2 = new QHBoxLayout(subGroupBox);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        subInput = new QLineEdit(subGroupBox);
        subInput->setObjectName(QStringLiteral("subInput"));
        subInput->setReadOnly(true);

        horizontalLayout_2->addWidget(subInput);

        subBrowseButton = new QPushButton(subGroupBox);
        subBrowseButton->setObjectName(QStringLiteral("subBrowseButton"));
        subBrowseButton->setMinimumSize(QSize(100, 0));

        horizontalLayout_2->addWidget(subBrowseButton);


        gridLayout->addWidget(subGroupBox, 1, 0, 1, 1);

        tempWidget = new QGroupBox(OpenFile);
        tempWidget->setObjectName(QStringLiteral("tempWidget"));
        gridLayout1 = new QGridLayout(tempWidget);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        label = new QLabel(tempWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout1->addWidget(label, 0, 0, 1, 3);

        fileListWidg = new QListWidget(tempWidget);
        fileListWidg->setObjectName(QStringLiteral("fileListWidg"));
        fileListWidg->setMaximumSize(QSize(16777215, 100));
        fileListWidg->setContextMenuPolicy(Qt::DefaultContextMenu);
        fileListWidg->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        fileListWidg->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        fileListWidg->setEditTriggers(QAbstractItemView::NoEditTriggers);
        fileListWidg->setAlternatingRowColors(true);

        gridLayout1->addWidget(fileListWidg, 1, 0, 3, 2);

        fileBrowseButton = new QPushButton(tempWidget);
        fileBrowseButton->setObjectName(QStringLiteral("fileBrowseButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/buttons/playlist/playlist_add.svg"), QSize(), QIcon::Normal, QIcon::Off);
        fileBrowseButton->setIcon(icon);

        gridLayout1->addWidget(fileBrowseButton, 1, 2, 1, 1);

        removeFileButton = new QPushButton(tempWidget);
        removeFileButton->setObjectName(QStringLiteral("removeFileButton"));
        removeFileButton->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(removeFileButton->sizePolicy().hasHeightForWidth());
        removeFileButton->setSizePolicy(sizePolicy2);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/buttons/playlist/playlist_remove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        removeFileButton->setIcon(icon1);

        gridLayout1->addWidget(removeFileButton, 2, 2, 1, 1);


        gridLayout->addWidget(tempWidget, 0, 0, 1, 1);

        spacerItem = new QSpacerItem(273, 16, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(spacerItem, 2, 0, 1, 1);

        QWidget::setTabOrder(fileListWidg, fileBrowseButton);
        QWidget::setTabOrder(fileBrowseButton, removeFileButton);

        retranslateUi(OpenFile);

        QMetaObject::connectSlotsByName(OpenFile);
    } // setupUi

    void retranslateUi(QWidget *OpenFile)
    {
        OpenFile->setWindowTitle(Q_("Open File", Q_NULLPTR));
        subGroupBox->setTitle(Q_("Use a sub&title file", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        subBrowseButton->setToolTip(Q_("Select the subtitle file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        subBrowseButton->setText(Q_("Browse...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        tempWidget->setToolTip(Q_("Choose one or more media file to open", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        tempWidget->setTitle(Q_("File Selection", Q_NULLPTR));
        label->setText(Q_("You can select local files with the following list and buttons.", Q_NULLPTR));
        fileBrowseButton->setText(Q_("Add...", Q_NULLPTR));
        removeFileButton->setText(Q_("Remove", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OpenFile: public Ui_OpenFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // OPEN_FILE_H
