#ifndef IDKAART_H
#define IDKAART_H

#include <string>
#include <vector>

using namespace std;

class KaartSlot;

class IdKaart
{
public:
    IdKaart(string, string, string);
    string userId();
    void geefToegang(KaartSlot*);
    void verwijderToegang(KaartSlot*);
    bool heeftToegangTot(KaartSlot*);

private:
    string id;
    vector<KaartSlot*> toegang;
    string naamEigenaar;
    string adresEigenaar;
    
};

#endif // IDKAART_H
