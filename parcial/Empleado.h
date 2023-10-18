#include <string>

class Empleado {
    public:
        Empleado(std::string n, std::string a, double s) : nombre(n), apellido(a) {
            if(s > 0)
                salario = s;
        }
        std::string getNombre() const {
            return nombre;
        }

        void setNombre(std::string n) {
            nombre = n;
        }

    private:
        std::string nombre;
        std::string apellido;
        double salario{0};
};