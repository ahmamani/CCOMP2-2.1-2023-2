#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "BasePlusComissionEmployee.h"

using namespace std;

BasePlusComissionEmployee::BasePlusComissionEmployee(const std::string &first, 
        const std::string& last, const std::string& ssn, double sales, 
        double rate, double salary) {
    firstName = first;
    lastName = last;
    socialSecurityNumber = ssn;
    setGrossSales(sales);
    setComissionRate(rate);
    setBaseSalary(salary);
}

void BasePlusComissionEmployee::setFirstName(const std::string& first){
    firstName = first;
}
std::string BasePlusComissionEmployee::getFirstName() const {
    return firstName;
}
        
void BasePlusComissionEmployee::setLastName(const std::string& last) {
    lastName = last;
}
std::string BasePlusComissionEmployee::getLastName() const{
    return lastName;
}
        
void BasePlusComissionEmployee::setSocialSecurityNumber(const std::string& ssn) {
    socialSecurityNumber = ssn;
}
std::string BasePlusComissionEmployee::getSocialSecurityNumber() const{
    return socialSecurityNumber;
}

void BasePlusComissionEmployee::setGrossSales(double sales) {
    if(sales < 0.0) {
        throw invalid_argument("Gross sales must be >= 0.0");
    }
    grossSales = sales;
}
double BasePlusComissionEmployee::getGrossSales() const {
    return grossSales;
}

void BasePlusComissionEmployee::setBaseSalary(double salary) {
    if(salary < 0.0) {
        throw invalid_argument("Salary must be >= 0.0");
    }
    baseSalary = salary;
}
double BasePlusComissionEmployee::getBaseSalary() const {
    return baseSalary;
}

void BasePlusComissionEmployee::setComissionRate(double rate){
    if(rate <= 0.0 || rate >= 1.0) {
        throw invalid_argument("Comission rate must be > 0.0 and < 1.0");
    }
    comissionRate = rate;
}
double BasePlusComissionEmployee::getComissionRate() const {
    return comissionRate;
}

double BasePlusComissionEmployee::earnings() const {
    return baseSalary + (comissionRate * grossSales);
}

std::string BasePlusComissionEmployee::toString() const {
    ostringstream output;
    output << fixed << setprecision(2);
    output << "comission employee: " << firstName << " " << lastName
            << "\nsocial security number: " << socialSecurityNumber
            << "\ngross sales: " << grossSales
            << "\ncomission rate: " << comissionRate
            << "\nbase salary " << baseSalary;
    return output.str();    
}