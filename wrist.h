#ifndef WRIST_H
#define WRIST_H

#include "wristID.h"

namespace jspace {
class Wrist {
public:
        //accessors
        const wristID & getID() const;

        //constructors
        Wrist(const wristID & id);
        ~Wrist();
private:
        //has-a's
        wristID id;
}//Wrist
}//jspace

#endif
