#include <iostream>
using namespace std;

const int N = 5;

void cargarVector(int v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el elemento [" << i << "]: ";
        cin >> v[i];
    }
}

void sumarVectores(int v1[], int v2[], int v3[], int n) {
    for (int i = 0; i < n; i++) {
        v3[i] = v1[i] + v2[i];
    }
}

void mostrarVector(int v[], int n) {
    cout << "[ ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << "]" << endl;
}

int main() {
    int vectorA[N];
    int vectorB[N];
    int vectorC[N];

    cout << "Carga del primer vector:" << endl;
    cargarVector(vectorA, N);

    cout << "Carga del segundo vector:" << endl;
    cargarVector(vectorB, N);

    sumarVectores(vectorA, vectorB, vectorC, N);

    cout << "\n--- Resultados ---" << endl;
    cout << "Vector A: ";
    mostrarVector(vectorA, N);
    cout << "Vector B: ";
    mostrarVector(vectorB, N);
    cout << "Vector C (A + B): ";
    mostrarVector(vectorC, N);

    return 0;
