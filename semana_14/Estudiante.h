#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <iostream>
#include <string>

class Estudiante {
    private:
        std::string name;
        int age;
        int code;
        std::string career;
    public:
        Estudiante(std::string n, int a, int c, std::string ca) {
            name = n;
            age = a;
            code = c;
            career = ca;
        }

        void print() const {
            std::cout << "El nombre es: " << name 
                << "\nLa edad es: " << age 
                << "\nEl código es: " << code
                << "\nLa carrera es:" << career 
                << std::endl;
        }
};

#endif