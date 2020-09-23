#ifndef POEWR_KEY_H
#define POEWR_KEY_H

#include <QWidget>
#include <Windows.h>
#include <QString>
#include <QCryptographicHash>
namespace Ui {
class Poewr_Key;
}

class Poewr_Key : public QWidget
{
    Q_OBJECT

public:
    explicit Poewr_Key(QWidget *parent = 0);
    ~Poewr_Key();
private:
    const QString get_SerialNumber();
    const QString hash_Encryption(const QString temp);
    const QString format_HASHString(const QString hashtemp);
    const QString remove_Format(const QString formathash);

private slots:
    void on_pushButton_read_clicked();

    void on_pushButton__clicked();

private:
    Ui::Poewr_Key *ui;
};

#endif // POEWR_KEY_H
