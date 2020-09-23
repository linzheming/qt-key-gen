/********************************************************************************
** Form generated from reading UI file 'poewr_key.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POEWR_KEY_H
#define UI_POEWR_KEY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Poewr_Key
{
public:
    QLineEdit *lineEdit_serial;
    QLabel *label_serial;
    QLineEdit *lineEdit_key;
    QLabel *label_key;
    QGroupBox *groupBox;
    QRadioButton *radioButton_use;
    QRadioButton *radioButton_debug;
    QRadioButton *radioButton_legal;
    QPushButton *pushButton_read;
    QPushButton *pushButton_;
    QPushButton *pushButton_copy;

    void setupUi(QWidget *Poewr_Key)
    {
        if (Poewr_Key->objectName().isEmpty())
            Poewr_Key->setObjectName(QStringLiteral("Poewr_Key"));
        Poewr_Key->resize(800, 600);
        lineEdit_serial = new QLineEdit(Poewr_Key);
        lineEdit_serial->setObjectName(QStringLiteral("lineEdit_serial"));
        lineEdit_serial->setGeometry(QRect(150, 70, 421, 20));
        label_serial = new QLabel(Poewr_Key);
        label_serial->setObjectName(QStringLiteral("label_serial"));
        label_serial->setGeometry(QRect(80, 70, 54, 12));
        lineEdit_key = new QLineEdit(Poewr_Key);
        lineEdit_key->setObjectName(QStringLiteral("lineEdit_key"));
        lineEdit_key->setGeometry(QRect(150, 130, 421, 20));
        label_key = new QLabel(Poewr_Key);
        label_key->setObjectName(QStringLiteral("label_key"));
        label_key->setGeometry(QRect(80, 130, 54, 12));
        groupBox = new QGroupBox(Poewr_Key);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(80, 200, 221, 151));
        radioButton_use = new QRadioButton(groupBox);
        radioButton_use->setObjectName(QStringLiteral("radioButton_use"));
        radioButton_use->setGeometry(QRect(40, 30, 89, 16));
        radioButton_debug = new QRadioButton(groupBox);
        radioButton_debug->setObjectName(QStringLiteral("radioButton_debug"));
        radioButton_debug->setGeometry(QRect(40, 70, 89, 16));
        radioButton_legal = new QRadioButton(groupBox);
        radioButton_legal->setObjectName(QStringLiteral("radioButton_legal"));
        radioButton_legal->setGeometry(QRect(40, 100, 89, 16));
        pushButton_read = new QPushButton(Poewr_Key);
        pushButton_read->setObjectName(QStringLiteral("pushButton_read"));
        pushButton_read->setGeometry(QRect(590, 290, 75, 23));
        pushButton_ = new QPushButton(Poewr_Key);
        pushButton_->setObjectName(QStringLiteral("pushButton_"));
        pushButton_->setGeometry(QRect(590, 330, 75, 23));
        pushButton_copy = new QPushButton(Poewr_Key);
        pushButton_copy->setObjectName(QStringLiteral("pushButton_copy"));
        pushButton_copy->setGeometry(QRect(590, 130, 75, 23));

        retranslateUi(Poewr_Key);

        QMetaObject::connectSlotsByName(Poewr_Key);
    } // setupUi

    void retranslateUi(QWidget *Poewr_Key)
    {
        Poewr_Key->setWindowTitle(QApplication::translate("Poewr_Key", "Poewr_Key", Q_NULLPTR));
        label_serial->setText(QApplication::translate("Poewr_Key", "\345\272\217\345\210\227\345\217\267:", Q_NULLPTR));
        label_key->setText(QApplication::translate("Poewr_Key", "\345\257\206\351\222\245:", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Poewr_Key", "\345\257\206\351\222\245\347\261\273\345\236\213", Q_NULLPTR));
        radioButton_use->setText(QApplication::translate("Poewr_Key", "\350\257\225\347\224\250Key", Q_NULLPTR));
        radioButton_debug->setText(QApplication::translate("Poewr_Key", "\350\260\203\350\257\225Key", Q_NULLPTR));
        radioButton_legal->setText(QApplication::translate("Poewr_Key", "\346\255\243\347\211\210KEy", Q_NULLPTR));
        pushButton_read->setText(QApplication::translate("Poewr_Key", "\350\257\273\345\217\226\345\272\217\345\210\227\345\217\267", Q_NULLPTR));
        pushButton_->setText(QApplication::translate("Poewr_Key", "\347\224\237\346\210\220\345\257\206\351\222\245", Q_NULLPTR));
        pushButton_copy->setText(QApplication::translate("Poewr_Key", "\346\213\267\350\264\235", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Poewr_Key: public Ui_Poewr_Key {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POEWR_KEY_H
