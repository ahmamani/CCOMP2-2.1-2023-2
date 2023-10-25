#ifndef __INTEGER_H__
#define __INTEGER_H__

#include <iostream>

class Integer {
    private:
        int val;
    public:
        Integer(int v = 0) {
            val = v;
            std::cout << "default constructor" << std::endl;
        }
        int getVal() const {
            return val;
        }
};

#endif