#include <iostream>
using namespace std;

const int N = 5;

void cargarVector(float alturas[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Ingrese la altura de la persona [" << i << "] (en metros): ";
        cin >> alturas[i];
    }
}

float calcularPromedio(float alturas[5]) {
    float suma = 0;
    for (int i = 0; i < 5; i++) {
        suma += alturas[i];
    }
    return suma / 5;
}

void contarRespectoAlPromedio(float alturas[], int n, float promedio, int &masAltos, int &masBajos) {
    masAltos = 0;
    masBajos = 0;
    for (int i = 0; i < n; i++) {
        if (alturas[i] > promedio) {
            masAltos++;
        } else if (alturas[i] < promedio) {
            masBajos++;
        }
    }
}

int main() {
    float alturas[N];

    cargarVector(alturas, N);

    float promedio = calcularPromedio(alturas);

    int masAltos, masBajos;
    contarRespectoAlPromedio(alturas, N, promedio, masAltos, masBajos);

    cout << "\n--- Resultados ---" << endl;
    cout << "Promedio de alturas: " << promedio << " m" << endl;
    cout << "Personas mas altas que el promedio: " << masAltos << endl;
    cout << "Personas mas bajas que el promedio: " << masBajos << endl;

    return 0;
}
