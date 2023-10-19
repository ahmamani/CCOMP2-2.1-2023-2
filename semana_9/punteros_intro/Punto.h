#include <iostream>

class Punto {
    private:
        int x, y;
    public:
        void setX(int _x) {
            x = _x;
        } 
        void setY(int _y) {
            y = _y;
        } 
        void print() const {
            std::cout << "(" << x << ", " << y << ")" 
                        << std::endl;
        }
};