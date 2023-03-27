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
        if(Deur::isDeurOpen())
            p.drawLine(Deur::coordinaten().first, Deur::coordinaten().second, Deur::coordinaten().first, Deur::coordinaten().second - returnLength());
        else
            p.drawLine(Deur::coordinaten().first, Deur::coordinaten().second, Deur::coordinaten().first - returnLength(), Deur::coordinaten().second);
     }
     else{
         if(Deur::isDeurOpen())
             p.drawLine(Deur::coordinaten().first, Deur::coordinaten().second, Deur::coordinaten().first + returnLength(), Deur::coordinaten().second + returnLength());
         else
             p.drawLine(Deur::coordinaten().first, Deur::coordinaten().second, Deur::coordinaten().first, Deur::coordinaten().second - returnLength());
     }
}
