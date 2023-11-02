#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "BasePlusComissionEmployee.h"

using namespace std;

BasePlusComissionEmployee::BasePlusComissionEmployee(const std::string &first, 
        const std::string& last, const std::string& ssn, double sales, 
        double rate, double salary) 
        : ComissionEmployee(first, last, ssn, sales, rate) {
    setBaseSalary(salary);
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

double BasePlusComissionEmployee::earnings() const {
    return baseSalary + ComissionEmployee::earnings();
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