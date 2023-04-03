#include "kaartslot.h"

std::map<std::string, shared_ptr<IdKaart>> KaartSlot::idKaarten{};

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

void KaartSlot::voegIdKaartToe(shared_ptr<IdKaart> k){
    idKaarten[k->userId()] = k;
}

void KaartSlot::verwijderIdKaart(string eenID){
    auto iterator = idKaarten.find(eenID);
    if(iterator != idKaarten.end())
        idKaarten.erase(iterator);
}

shared_ptr<IdKaart> KaartSlot::returnId(string eenID){
    auto iterator = idKaarten.find(eenID);
    if(iterator != idKaarten.end()) {
        shared_ptr<IdKaart> idk = iterator->second;
        return idk;
    }
    else
        return nullptr;
}

//static map<string, IdKaart*> KaartSlot::returnMap(){
//    return idKaarten;
//}
