#ifndef INTEGER_ARRAY
#define INTEGER_ARRAY

#include <iostream>

class IntegerArray {
    public:
        IntegerArray(int size) {
            data = new int[size];
            this->size = size; 
        }
        IntegerArray(const IntegerArray &o) {
            this->size = o.size;
            data = new int[o.size];
            for (int i = 0; i < size; i++) {
                data[i] = o.data[i];
            }            
        }
        ~IntegerArray() {
            delete[] data;
        }
        void set(int index, int val) {
            data[index] = val;
        }
        int get(int index) const {
            return data[index];
        }
        int getSize() const {
            return size;
        }
        void print() const {
            std::cout << "[ ";
            for (int i = 0; i < size; i++) {
                std::cout << data[i] << " ";
            }
            std::cout << "]" << std::endl;            
        }
    private:
        int *data;
        int size;
};

#endif