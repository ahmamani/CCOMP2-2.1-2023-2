#include "Integer.h"

using namespace std;

int main() {
    
    Integer i(3);

    Integer *p = new Integer(5);
    delete p;

    return 0;
} 