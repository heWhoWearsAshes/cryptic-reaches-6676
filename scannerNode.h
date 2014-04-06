#ifndef SCANNERNODE_H
#define SCANNERNODE_H

#include "scanner.h"
#include "scannerID.h"

namespace jspace {
class ScannerNode {
public:
        //mutators
        void setNext(ScannerNode * node);

        //accessors
        ScannerNode * getNext() const;
        //Scanner & getElement() const;

        //constructors
        ScannerNode(scannerID id);
        ~ScannerNode();
private:
        //has-a's
        ScannerNode * next;
        Scanner scanner;
}//ScannerNode
}//jspace

#endif
