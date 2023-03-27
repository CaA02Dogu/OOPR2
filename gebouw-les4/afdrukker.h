#ifndef AFDRUKKER_H
#define AFDRUKKER_H

#include <string>

class Afdrukker
{
public:
    Afdrukker(){}
    virtual void toonText(std::string tekst) = 0;
    virtual void clearMedium() = 0;
};

#endif // AFDRUKKER_H
