#include <iostream>
#include <iomanip>
#include "BasePlusComissionEmployee.h"
using namespace std;

int main() {
    BasePlusComissionEmployee employee("Bob", "Lewis", "333-33-3333", 5000, .04, 300);

    cout << fixed << setprecision(2);
    cout << "Employee information obtained by get functions: \n"
            << "\nFirst name is " << employee.getFirstName()
            << "\nLast name is " << employee.getLastName()
            << "\nSocial security number is " << employee.getSocialSecurityNumber()
            << "\nGross sales is " << employee.getGrossSales()
            << "\nComission rate is " << employee.getComissionRate() 
            << "\nBase salary is " << employee.getBaseSalary() << endl;

    employee.setBaseSalary(1000);

    cout << "\nUpdated employee information from function toString; \n\n"
            << employee.toString();

    cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl;

    return 0;
}