#include "hallsensor.h"

HallSensor::HallSensor(int x, int y) : Sensor(x,y)
{

}


void HallSensor::teken(QPaintDevice* tp){
    // Komt uit Sensor.cpp maar met private atributen vervangen voor publieke

    QPainter p(tp);
    QColor kleur;
    p.setBrush(Qt::SolidPattern);
    if(this->isGeactiveerd())
        kleur=Qt::blue;
     else
         kleur=Qt::yellow;

     p.setBrush(kleur);
     QPen pen(kleur,2,Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
     p.setPen(pen);
     p.drawEllipse(this->coordinaten().first,this->coordinaten().second,20,20);
}
