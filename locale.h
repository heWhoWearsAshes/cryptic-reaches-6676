#ifndef LOCALE_H
#define LOCALE_H

#include "scannerID.h"
#include "localeID.h"
#include "scanner.h"
#include "scannerNode.h"
#include "address.h"
#include "wristNode.h"

namespace jspace {
class Locale {
public:
        //mutators
        void addScanner(const & scannerID id);
        void setAddress(const Address & address);
        void scanWrist();

        //accessors
        const localeID & getID() const;
        Address & getAddress() const;
        Scanner & findScanner(scannerID & scanner) const;
private:
        //mutators
        void setDefawlt(scannerID & scanner);

        //accessors
        Scanner & findScanner(scannerID & scanner, WristNode * node) const;

        //has-a's
        localeID id;
        Address address;
        ScannerNode * front, * back, * defawlt= front;
}//Locale
}//jspace

#endif
