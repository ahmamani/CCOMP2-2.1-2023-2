#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <sstream>

class Vehicle {
    protected:
        std::string license;
        int year;
    public:
        Vehicle(const std::string &myLicense, const int myYear)
                : license(myLicense), year(myYear) {}
        virtual const std::string getDesc() const {
            std::ostringstream output;
            output << license << " from " << year;
            return output.str();
        }
        const std::string &getLicense() const {
            return license;
        }
        const int getYear() const {
            return year;
        }
};

#endif