#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "hashing_receiver.h"
#include "hashing_sender.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_hashing_clicked()
{
    this->destroy();
    Hashing_Receiver hasr;
    hasr.setModal(true);
    hasr.exec();
}


void MainWindow::on_sender_clicked()
{
    this->destroy();
    hashing_sender hass;
    hass.setModal(true);
    hass.exec();
}
