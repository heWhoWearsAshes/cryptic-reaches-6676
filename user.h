#ifndef USER_H
#define USER_H

#include "userID.h"
#include "wristID.h"
#include "wristNode.h"

namespace jspace {
class User {
public:
        //mutators
        void addWrist(const wristID & id);
        void removeWrist(const wristID & id);
        void setDefawlt(wristID & wrist);

        //accessors
        const userID & getID() const;
        int howManyWrists() const;
        const wristID & getDefawlt() const;
        Wrist & findWrist(wristID & wrist) const;

        //constructors
        User(const userID id, Wrist * root= NULL);
        ~User();
private:
        //accessors
        WristNode * findWrist(wristID & wrist, WristNode * node) const;

        //has-a's
        userID id;
        WristNode * front, * back, * defawlt= front;
}//User
}//jspace

#endif
