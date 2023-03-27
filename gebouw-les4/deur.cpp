#include "deur.h"

Deur::Deur(bool stat, int x, int y, unsigned length): status(stat), x_coordinaat(x), y_coordinaat(y), lengte(length){

}

Deur::~Deur(){

}

void Deur::open(){
    if(slot.empty())
        status = true;

    for(int i; i < slot.size(); i++){
        if(!(slot[i]->isVergrendeld()))
            status = true;
        else{
            status = false;
            break;
        }
    }
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
    slot.push_back(s);
}

shared_ptr<Slot> Deur::getSlot(int i){
    if(i < slot.size())
        return slot[i];
    else
        return nullptr;
}

int Deur::getSlotIndex(){
    return slot.size();
}