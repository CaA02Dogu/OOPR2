#include "deur.h"

Deur::Deur(bool stat, int x, int y, unsigned length): status(stat), x_coordinaat(x), y_coordinaat(y), lengte(length), slot(nullptr) {

}

Deur::~Deur(){

}

void Deur::open(){
    if(!(slot == nullptr))
        if(!(slot->isVergrendeld()))
            status = true;
    else
        status = false;
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

void Deur::addSlot(shared_ptr<Slot> s){
    slot = s;
}

shared_ptr<Slot> Deur::getSlot(){
    return slot; 
}
