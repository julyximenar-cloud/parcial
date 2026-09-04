#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x;
    double y;
};

double calcularDistanciaMasCercana(Point puntos[], int n) {
    double menor = 999999999;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            double dx = puntos[i].x - puntos[j].x;
            double dy = puntos[i].y - puntos[j].y;

            double distancia = sqrt(dx * dx + dy * dy);

            if (distancia < menor) {
                menor = distancia;
            }
        }
    }

    return menor;
}

int main() {
    int n;

    cout << "Ingrese la cantidad de puntos: ";
    cin >> n;

    Point puntos[n];

    for (int i = 0; i < n; i++) {
        cout << "Ingrese x del punto " << i + 1 << ": ";
        cin >> puntos[i].x;

        cout << "Ingrese y del punto " << i + 1 << ": ";
        cin >> puntos[i].y;
    }

    double resultado = calcularDistanciaMasCercana(puntos, n);

    cout << "La distancia mas cercana es: " << resultado << endl;

    return 0;
}
