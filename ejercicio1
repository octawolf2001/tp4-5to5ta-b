#include <iostream>
using namespace std;

const int N = 8;

void cargarVector(int v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el elemento [" << i << "]: ";
        cin >> v[i];
    }
}

int acumularTodos(int v[], int n) {
    int acum = 0;
    for (int i = 0; i < n; i++) {
        acum += v[i];
    }
    return acum;
}

int acumularMayoresA(int v[], int n, int limite) {
    int acum = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] > limite) {
            acum += v[i];
        }
    }
    return acum;
}

int contarMayoresA(int v[], int n, int limite) {
    int cantidad = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] > limite) {
            cantidad++;
        }
    }
    return cantidad;
}

int main() {
    int vector[N];

    cargarVector(vector, N);

    int totalAcumulado = acumularTodos(vector, N);
    int acumuladoMayores36 = acumularMayoresA(vector, N, 36);
    int cantidadMayores50 = contarMayoresA(vector, N, 50);

    cout << "\n--- Resultados ---" << endl;
    cout << "Valor acumulado de todos los elementos: " << totalAcumulado << endl;
    cout << "Valor acumulado de los elementos mayores a 36: " << acumuladoMayores36 << endl;
    cout << "Cantidad de valores mayores a 50: " << cantidadMayores50 << endl;

    return 0;
}
