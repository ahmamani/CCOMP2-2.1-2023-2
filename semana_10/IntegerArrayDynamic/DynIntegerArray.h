#ifndef INTEGER_ARRAY
#define INTEGER_ARRAY

#include <iostream>

class DynIntegerArray {
    public:
        DynIntegerArray() {
            data = new int[0];
            this->size = 0; 
        }
        DynIntegerArray(int size, int arr[]) {
            this->size = size;
            data = new int[size];
            for (int i = 0; i < size; i++) {
                data[i] = arr[i];
            }
        }
        DynIntegerArray(const DynIntegerArray &o) {
            this->size = o.size;
            data = new int[o.size];
            for (int i = 0; i < size; i++) {
                data[i] = o.data[i];
            }            
        }
        ~DynIntegerArray() {
            delete[] data;
        }
        
        // push_back
        // [ 2 3]  ...... push_back(5)   ->   [ 2 3 5 ]
        void push_back(int val) {
            /*
            1. crear un arreglo tmp con tamaño size+1
            2. copiar los elements de data a tmp
            3. poner el elemento val al final de tmp
            4. borrar data
            5. actualizar el tamaño en 1
            6. apuntar data a tmp
            */
           int *tmp = new int[size+1];
           for (int i = 0; i < this->size; i++){
                tmp[i] = data[i];
           }
           tmp[size] = val;
           delete[] data;
           this->size++;
           data = tmp;
        }

        /*
            [2 3 5 ] --- insert(1, 10) --- [ 2 10 3 5 ]
        */
        void insert(int pos, int val) {
            if (pos < 0 || pos > size){
                std::cout << "No es posible ingresar" << std::endl;
                return;

            }
            int* tmp = new int [size+1];
            for(int i = 0; i < pos; i++){
                tmp[i] = data[i];
            }
            tmp[pos] = val;

            for(int i = pos; i < size; i++){
                tmp[i+1] = data[i];
            }
            delete[] data;
            this -> size++;
            data = tmp;  
         }

        /*
            [ 2 3 5 ] --- remove(1) --- [ 2 5 ]
        */
        void remove(int pos) {
            int* tmp = new int [size-1];
            
            for(int i = 0; i < size-1 ; i++){
                tmp[i]=data[i];
                if(i >= pos){
                    tmp[i]=data[i+1];
                }
                
            }
            delete[] data;
            this -> size--;
            data = tmp;  
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