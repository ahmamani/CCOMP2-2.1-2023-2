#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
        std::string style;
    public:
        Car(const std::string &myLicense, const int myYear,
                const std::string &myStyle) :
                Vehicle(myLicense, myYear), style(myStyle) {}
        
        const std::string getDesc() const {
            std::ostringstream output;
            output << year << " " << style << " " <<
                    license;
            return output.str();
        }
        const std::string &getStyle() const {
            return style;
        }
};

#endif