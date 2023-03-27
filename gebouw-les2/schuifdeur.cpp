#include "schuifdeur.h"

Schuifdeur::Schuifdeur(bool stat, int x, int y, unsigned len, shared_ptr<Sensor> senior): Deur(stat,x,y,len), seniorita(senior)
{

}

void Schuifdeur::teken(QPaintDevice* door){
    QPainter p(door);
    QColor kleur;
    // p.setBrush(Qt::SolidPattern);
    kleur=Qt::black;

     // p.setBrush(kleur);
     QPen pen(kleur,2,Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
     p.setPen(pen);
     if(Deur::isDeurOpen())
         p.drawLine(Deur::coordinaten().first, Deur::coordinaten().second, Deur::coordinaten().first, Deur::coordinaten().second + returnLength());
     else
         p.drawLine(Deur::coordinaten().first, Deur::coordinaten().second - returnLength(), Deur::coordinaten().first, Deur::coordinaten().second);
}

void Schuifdeur::sluit(){
    if(seniorita->isGeactiveerd())
        Deur::sluit();
}
