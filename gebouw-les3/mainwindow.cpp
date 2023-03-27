#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <memory>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    s1 = make_shared<HallSensor>(515,160);

    lock.push_back(make_shared<CodeSlot>(1));
    lock.push_back(make_shared<CodeSlot>(2));
    lock.push_back(make_shared<SleutelSlot>("S"));
    lock.push_back(make_shared<CodeSlot>(2));
    lock.push_back(make_shared<SleutelSlot>("S"));

    door.push_back(make_shared<Draaideur>(0,0,248,140,40));
    door.push_back(make_shared<Draaideur>(1,0,295,290,30));
    door.push_back(make_shared<Schuifdeur>(0,503,250,80,s1));

    door.at(0)->addSlot(lock.at(0));
    door.at(1)->addSlot(lock.at(1));
    door.at(1)->addSlot(lock.at(4));
    door.at(2)->addSlot(lock.at(2));
    door.at(2)->addSlot(lock.at(3));
}

MainWindow::~MainWindow()
{

}

void MainWindow::paintEvent(QPaintEvent *event){

    QPainter painter(this);
    QPen pen;
    QImage image("/home/gaos/Documents/NSE/Semester4/OOPR2/gebouw/Gebouw.png");

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
    if(door.at(2)->isDeurOpen()){
        door.at(2)->sluit();
        for(int i = 0; i < door.at(2)->getSlotIndex(); i++)
            door.at(2)->getSlot(i)->vergrendel();
    }
    else{
        for(int i = 0; i < door.at(2)->getSlotIndex(); i++){
            if(door.at(2)->getSlot(i)->isVergrendeld())
                door.at(2)->getSlot(i)->ontgrendel(ui->lineEditS->text().toStdString());
            
        }
        ui->lineEditS->setText("");
        door.at(2)->open();
    }
    update();
}

void MainWindow::on_deur_1_clicked(){
    if(door.at(0)->isDeurOpen()){
        door.at(0)->sluit();
        for(int i = 0; i < door.at(0)->getSlotIndex(); i++)
            door.at(0)->getSlot(i)->vergrendel();
    }
    else{
        for(int i = 0; i < door.at(0)->getSlotIndex(); i++){
            if(door.at(0)->getSlot(i)->isVergrendeld())
                door.at(0)->getSlot(i)->ontgrendel(ui->lineEditD1->text().toStdString());
            
        }
        ui->lineEditD1->setText("");
        door.at(0)->open();
    }
    update();
}

void MainWindow::on_deur_2_clicked(){
    if(door.at(1)->isDeurOpen()){
        door.at(1)->sluit();
        for(int i = 0; i < door.at(1)->getSlotIndex(); i++)
            door.at(1)->getSlot(i)->vergrendel();
    }
    else{
        for(int i = 0; i < door.at(1)->getSlotIndex(); i++){
            if(door.at(1)->getSlot(i)->isVergrendeld())
                door.at(1)->getSlot(i)->ontgrendel(ui->lineEditD2->text().toStdString());
            
        }
        ui->lineEditD2->setText("");
        door.at(1)->open();
    }
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

