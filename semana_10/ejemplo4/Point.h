#ifndef __POINT_H__
#define __POINT_H__

#include <iostream>

class Point {
    private:
        int x, y;
    public:
        Point(int = 0, int = 0);
        ~Point();
        void setX(int x);
        void setY(int y);
        int getX() const;
        int getY() const;
};

#endif