#include "codeslot.h"

CodeSlot::CodeSlot(int sleutel): closed(true), key(sleutel)
{

}

CodeSlot::~CodeSlot()
{

}

void CodeSlot::vergrendel()
{
    closed = true;
}

bool CodeSlot::isVergrendeld()
{
    return closed;
}

void CodeSlot::ontgrendel(string givenKey)
{
    if(to_string(key).compare(givenKey) == 0)
        closed = false;
    else
        closed = true;
}

// QLineEdit* CodeSlot::getInput() {
//     return input;
// }

// void CodeSlot::qpaintEvent(){
//     QPalette event;
//     event.setColor(QPalette::Base, Qt::black);
//     event.setColor(QPalette::Text, Qt::green);
//     if(closed)
//         input->setPalette(event);
// }
