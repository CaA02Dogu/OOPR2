#include "draaideur.h"

Draaideur::Draaideur(bool lie, bool stat, int x, int y, unsigned len): Deur(stat, x, y, len), liggend(lie)
{

}

void Draaideur::teken(QPaintDevice * door){
    QPainter p(door);
    QColor kleur;
    // p.setBrush(Qt::SolidPattern);
    kleur=Qt::black;

     p.setBrush(kleur);
     QPen pen(kleur,2,Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
     p.setPen(pen);
     if(liggend){
        if(isDeurOpen())
            p.drawLine(this->coordinaten().first, this->coordinaten().second, this->coordinaten().first, this->coordinaten().second - returnLength());
        else
            p.drawLine(this->coordinaten().first, this->coordinaten().second, this->coordinaten().first - returnLength(), this->coordinaten().second);
     }
     else{
         if(isDeurOpen())
             p.drawLine(this->coordinaten().first, this->coordinaten().second, this->coordinaten().first + returnLength(), this->coordinaten().second + returnLength());
         else
             p.drawLine(this->coordinaten().first, this->coordinaten().second, this->coordinaten().first, this->coordinaten().second - returnLength());
     }
}
