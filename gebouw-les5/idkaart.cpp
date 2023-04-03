#include "idkaart.h"

IdKaart::IdKaart(string ID, string name, string address): id(ID), naamEigenaar(name), adresEigenaar(address)
{

}

string IdKaart::userId(){
    return id;
}

void IdKaart::geefToegang(KaartSlot* eenKaartSlot){
    if(eenKaartSlot != nullptr)
        toegang.push_back(eenKaartSlot);
}

void IdKaart::verwijderToegang(KaartSlot* eenKaartSlot){
    for(auto iterator = toegang.begin(); iterator != toegang.end(); ++iterator)
        if(*iterator == eenKaartSlot)
            toegang.erase(iterator);
}

bool IdKaart::heeftToegangTot(KaartSlot* eenKaartSlot){
    for(auto iterator = toegang.begin(); iterator != toegang.end(); ++iterator)
        if(*iterator == eenKaartSlot)
            return true;
        else 
            return false;
}
