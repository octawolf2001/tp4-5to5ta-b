#include <iostream>
using namespace std;

const int N = 10;

void cargarVector(int v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el elemento [" << i << "]: ";
        cin >> v[i];
    }
}

bool estaOrdenado(int v[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (v[i] > v[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int vector[N];

    cargarVector(vector, N);

    if (estaOrdenado(vector, N)) {
        cout << "\nEl vector esta ordenado de menor a mayor." << endl;
    } else {
        cout << "\nEl vector NO esta ordenado de menor a mayor." << endl;
    }

    return 0;
}
//hola hola?
