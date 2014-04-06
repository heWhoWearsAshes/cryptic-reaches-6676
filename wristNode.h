#ifndef WRISTNODE_H
#define WRISTNODE_H

#include "wrist.h"

namespace jspace {
class WristNode {
public:
        //mutators
        void setNext(WristNode * node);

        //accessors
        WristNode * getNext() const;
        Wrist & getElement() const;

        //constructors
        WristNode(const Wrist & wrist, WristNode * node= NULL);
        ~WristNode();
private:
        //has-a's
        WristNode * next;
        Wrist wrist;
}//WristNode
}//jspace

#endif
