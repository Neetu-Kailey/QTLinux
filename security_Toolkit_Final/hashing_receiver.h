#ifndef HASHING_RECEIVER_H
#define HASHING_RECEIVER_H

#include <QDialog>

namespace Ui {
class Hashing_Receiver;
}

class Hashing_Receiver : public QDialog
{
    Q_OBJECT

public:
    explicit Hashing_Receiver(QWidget *parent = 0);
    ~Hashing_Receiver();

private slots:
    void on_verify_clicked();

private:
    Ui::Hashing_Receiver *ui;
};

#endif // HASHING_RECEIVER_H
