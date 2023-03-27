#include "herkenningsslot.h"

HerkenningsSlot::HerkenningsSlot(shared_ptr<Afdrukker> a): afdrukker(a), closed(true)
{

}

HerkenningsSlot::~HerkenningsSlot(){
    
}

void HerkenningsSlot::vergrendel()
{
    closed = true;
}
bool HerkenningsSlot::isVergrendeld()
{
    return closed;
}

void HerkenningsSlot::ontgrendel(string naam)
{
    if(kaartenbak[naam])
        closed = false;
}

void HerkenningsSlot::toonKaartenbak(){
    for(auto it = kaartenbak.begin(); it != kaartenbak.end(); ++it)
        afdrukker->toonText(it->first);
}

void HerkenningsSlot::voegAutorisatieToe(std::string naam, bool toegang) {
        kaartenbak[naam] = toegang;
}