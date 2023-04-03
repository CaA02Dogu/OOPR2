#include "kaartslot.h"

KaartSlot::KaartSlot(string p): closed(true), plaats(p)
{

}

KaartSlot::~KaartSlot(){

}

void KaartSlot::vergrendel(){
    closed = true;
}

bool KaartSlot::isVergrendeld(){
    return closed;
}

void KaartSlot::ontgrendel(string eenSleutel){
    auto iterator = idKaarten.find(eenSleutel);
    if(iterator != idKaarten.end())
        if(iterator->second->heeftToegangTot(this))
            closed = false;
}

void KaartSlot::voegIdKaartToe(IdKaart* k){
    idKaarten[k->userId()] = k;
}

void KaartSlot::verwijderIdKaart(string eenID){
    auto iterator = idKaarten.find(eenID);
    if(iterator != idKaarten.end())
        idKaarten.erase(iterator);
}

IdKaart* KaartSlot::returnId(string eenID){
    auto iterator = idKaarten.find(eenID);
    if(iterator != idKaarten.end())
        return iterator->second;
    else
        return nullptr;
}