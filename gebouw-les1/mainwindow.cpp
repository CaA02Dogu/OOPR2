#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <memory>
#include "sensor.h"
#include "schuifdeur.h"
#include "draaideur.h"
#include "hallsensor.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    s1 = make_shared<HallSensor>(515,160);
    door.push_back(make_shared<Draaideur>(0,0,248,140,40));
    door.push_back(make_shared<Draaideur>(1,0,295,290,30));
    door.push_back(make_shared<Schuifdeur>(0,503,250,80,s1));
}

MainWindow::~MainWindow()
{

}

void MainWindow::paintEvent(QPaintEvent *event){

    QPainter painter(this);
    QPen pen;
    QImage image("../Gebouw.png");

    pen.setColor(Qt::green);
    pen.setWidth(4);
    painter.setPen(pen);
    painter.drawImage(10,10,image);

    s1->teken(this);
    door.at(0)->teken(this);
    door.at(1)->teken(this);
    door.at(2)->teken(this);

}

void MainWindow::on_sensor_act_clicked()
{
    if(s1->isGeactiveerd()){
         s1->deactiveer();
    }
     else
         s1->activeer();
     update();
}

void MainWindow::on_schuifdeurKnop_clicked(){
    if(door.at(2)->isDeurOpen())
        door.at(2)->sluit();
    else
        door.at(2)->open();
    update();
}

void MainWindow::on_deur_1_clicked(){
    if(door.at(0)->isDeurOpen())
        door.at(0)->sluit();
    else
        door.at(0)->open();
    update();
}

void MainWindow::on_deur_2_clicked(){
    if(door.at(1)->isDeurOpen())
        door.at(1)->sluit();
    else
        door.at(1)->open();
    update();
}

// void MainWindow::on_AuthP_clicked(){
//     herkenningsSlot->voegAutorissatieToe(ui->lineEditAuthP->text().toStdString(), true);
//     ui->lineEditAuthP->setText("");
//     update();
// }

// void MainWindow::on_AuthN_clicked(){
//     herkenningsSlot->voegAutorissatieToe(ui->lineEditAuthN->text().toStdString(), false);
//     ui->lineEditAuthN->setText("");
//     update();
// }

