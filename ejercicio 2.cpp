#include <iostream>
using namespace std;

const int N = 5;

void cargarVector(int v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el elemento [" << i << "]: ";
        cin >> v[i];
    }
}

void mostrarVector(int v[], int n) {
    cout << "Vector: [ ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << "]" << endl;
}

int main() {
    int vector[N];

    cargarVector(vector, N);
    mostrarVector(vector, N);

    return 0;
}
//hola nono
