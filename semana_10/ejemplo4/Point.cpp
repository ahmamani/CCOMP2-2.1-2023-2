#include <iostream>
#include "Point.h"

Point::Point(int x = 0, int y = 0) {
    this->x = x;
    this->y = y;
}
Point::~Point() {
    std::cout << "POINT: Invocando al destructor" 
            << std::endl;
}
void Point::setX(int x) {
    this->x = x;
}
void Point::setY(int y) {
    this->y = y;
}
int Point::getX() const {
    return x;
}
int Point::getY() const {
    return y;
}
