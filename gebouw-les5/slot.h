#ifndef SLOT_H
#define SLOT_H

#include<string>
#include<memory>
#include <QLineEdit>
#include <vector>
#include <map>
#include "afdrukker.h"
#include "idkaart.h"

using namespace std;

class Slot
{
public:
    Slot(){}
    virtual void ontgrendel(string) = 0;
    virtual void vergrendel() = 0;
    virtual bool isVergrendeld() = 0;

};

#endif // SLOT_H
