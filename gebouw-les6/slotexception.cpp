#include "slotexception.h"

SlotException::SlotException(shared_ptr<IdKaart> card, string plaats):kaartId(""), slotPlaats(plaats){
    if(card != nullptr)
        kaartId = card->userId();
}

SlotException::~SlotException(){

}

string SlotException::kaartVanBinnendringer(){
    return kaartId;
}

string SlotException::plaatsVanHetSlot(){
    return slotPlaats;
}
