#include "sleutelslot.h"

SleutelSlot::SleutelSlot(std::string k): key(k), closed(true)
{

}

SleutelSlot::~SleutelSlot()
{}

void SleutelSlot::vergrendel()
{
    closed = true;
}
bool SleutelSlot::isVergrendeld()
{
    return closed;
}

void SleutelSlot::ontgrendel(string givenKey)
{

    if(key.compare(givenKey) == 0)
        closed = false;
    else
        closed = true;
}

// QLineEdit* SleutelSlot::getInput() {
//     return input;
// }

// void SleutelSlot::qpaintEvent(){
//     QPalette event;
//     event.setColor(QPalette::Base, Qt::black);
//     event.setColor(QPalette::Text, Qt::green);
//     if(closed)
//         input->setPalette(event);
// }
