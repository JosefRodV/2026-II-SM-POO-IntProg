#include <iostream>
#include <fstream>
#include <cstddef>

using namespace std;

template <typename T>
void print(T v[], size_t n, ostream &os) {
    for (size_t i = 0; i < n; ++i) {
        os << v[i] << " " << endl;
    }
}

int main() {
    const int tam = 10;
    int vec[tam] = {3, 7, 8};

    print(vec, tam, cout);

    ofstream of("salida.txt");
    if (of.is_open()) {
        of << "Hola" << endl;
        print(vec, tam, of);
        of.close();
    }

    double v2[6] = {3.14, 8.9};
    print(v2, 5, cout);

    return 0;
}