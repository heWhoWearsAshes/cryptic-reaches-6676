#ifndef SCANNER_H
#define SCANNER_H

#include "scannerID.h"
#include "wristID.h"

namespace jspace {
class Scanner {
public:
        //mutators
        void scan();

        //accessors
        const scannerID & getID() const;
private:
        //has-a's
        scannerID id;
}//Scanner
}//jspace

#endif
