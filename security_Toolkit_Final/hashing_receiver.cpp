#include "hashing_receiver.h"
#include "ui_hashing_receiver.h"

Hashing_Receiver::Hashing_Receiver(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Hashing_Receiver)
{
    ui->setupUi(this);
    QPixmap bkgnd("black");
            bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
            QPalette palette;
            palette.setBrush(QPalette::Background, bkgnd);
            this->setPalette(palette);

        ui->title_hashing->setStyleSheet("QLabel {  color : orange; }");
        ui->lineone->setStyleSheet("QLineEdit { background: orange; border: orange }");
        ui->label->setStyleSheet("QLabel { color : orange; }");
        ui->label_2->setStyleSheet("QLabel { color : orange; }");
        ui->label_3->setStyleSheet("QLabel { color : orange; }");
        ui->lineEdit->setStyleSheet("QLineEdit { background: orange; border: orange }");
      //  ui->textBrowser->setStyleSheet("QTextBrowser { color : orange ;}");

}

Hashing_Receiver::~Hashing_Receiver()
{
    delete ui;
}

void Hashing_Receiver::on_verify_clicked()
{

}
