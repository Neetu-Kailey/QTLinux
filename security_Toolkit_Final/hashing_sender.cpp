#include "hashing_sender.h"
#include "ui_hashing_sender.h"

hashing_sender::hashing_sender(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::hashing_sender)
{
    ui->setupUi(this);
    QPixmap bkgnd("black");
            bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
            QPalette palette;
            palette.setBrush(QPalette::Background, bkgnd);
            this->setPalette(palette);

        ui->title_hashingsender->setStyleSheet("QLabel {  color : orange; }");
        ui->lineone->setStyleSheet("QLineEdit { background: orange; border: orange }");
        ui->label->setStyleSheet("QLabel { color : orange; }");
        ui->label_2->setStyleSheet("QLabel { color : orange; }");
}

hashing_sender::~hashing_sender()
{
    delete ui;
}

void hashing_sender::on_sender_clicked()
{

}
