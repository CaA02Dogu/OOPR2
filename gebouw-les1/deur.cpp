#include "deur.h"

Deur::Deur(bool stat, int x, int y, unsigned length): status(stat), x_coordinaat(x), y_coordinaat(y), lengte(length) {

}

Deur::~Deur(){

}

void Deur::open(){
    status = true;
}

void Deur::sluit(){
    status = false;
}

bool Deur::isDeurOpen(){
    return status;
}

pair<int,int> Deur::coordinaten() const {

    pair<int,int> temp;
    temp.first=x_coordinaat;
    temp.second=y_coordinaat;
    return temp;

}

unsigned int Deur::returnLength() const{
    return lengte;
}
