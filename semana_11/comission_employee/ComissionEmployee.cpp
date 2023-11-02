#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "ComissionEmployee.h"

using namespace std;

ComissionEmployee::ComissionEmployee(const std::string &first, 
        const std::string& last, const std::string& ssn, double sales, double rate) {
    firstName = first;
    lastName = last;
    socialSecurityNumber = ssn;
    setGrossSales(sales);
    setComissionRate(rate);
}

void ComissionEmployee::setFirstName(const std::string& first){
    firstName = first;
}
std::string ComissionEmployee::getFirstName() const {
    return firstName;
}
        
void ComissionEmployee::setLastName(const std::string& last) {
    lastName = last;
}
std::string ComissionEmployee::getLastName() const{
    return lastName;
}
        
void ComissionEmployee::setSocialSecurityNumber(const std::string& ssn) {
    socialSecurityNumber = ssn;
}
std::string ComissionEmployee::getSocialSecurityNumber() const{
    return socialSecurityNumber;
}

void ComissionEmployee::setGrossSales(double sales) {
    if(sales < 0.0) {
        throw invalid_argument("Gross sales must be >= 0.0");
    }
    grossSales = sales;
}
double ComissionEmployee::getGrossSales() const {
    return grossSales;
}

void ComissionEmployee::setComissionRate(double rate){
    if(rate <= 0.0 || rate >= 1.0) {
        throw invalid_argument("Comission rate must be > 0.0 and < 1.0");
    }
    comissionRate = rate;
}
double ComissionEmployee::getComissionRate() const {
    return comissionRate;
}

double ComissionEmployee::earnings() const {
    return comissionRate * grossSales;
}

std::string ComissionEmployee::toString() const {
    ostringstream output;
    output << fixed << setprecision(2);
    output << "comission employee: " << firstName << " " << lastName
            << "\nsocial security number: " << socialSecurityNumber
            << "\ngross sales: " << grossSales
            << "\ncomission rate: " << comissionRate;
    return output.str();    
}