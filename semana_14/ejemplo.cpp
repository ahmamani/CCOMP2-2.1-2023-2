#include <fstream>
#include "Estudiante.h"

using namespace std;

int main() {
    ifstream source("source-file.txt");
    ofstream dest("dest-file.txt");

    string x;
    //source >> x;
    getline(source, x);

    Estudiante e(...);

    source.close();
    dest << x;
    return 0;
}