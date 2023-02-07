// 1. Hacer un programa para rellenar una matriz pidiendo al usuario el n�mero de filas y columnas. 
//    Posteriormente, mostrar la matriz en pantalla.

#include <iostream>
#include <locale.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    setlocale(LC_ALL, "es_Es");

    int mNumeros[50][50], N;
    int fila, columna;

    cout << "Ingrese el n�mero de filas: "; cin >> fila;
    cout << "Ingrese el n�mero de columnas: "; cin >> columna;

    if (fila > 50) {
        cout << "Error: el n�mero de filas no puede superar las 50.";
        return 0;
    }

    if (columna > 50) {
        cout << "Error: el n�mero de columnas no puede superar las 50.";
        return 0;
    }

    cout << endl;
    for (int i = 0; i < fila; i++) {
        for (int x = 0; x < columna; x++) {
            cout << "Ingrese un n�mero (" << i + 1 << "-" << x + 1 << "): "; cin >> N;
            mNumeros[i][x] = N;
        }
    }

    cout << endl;
    for (int i = 0; i < fila; i++) {
        for (int x = 0; x < columna; x++) {
            cout << mNumeros[i][x] << " ";
        }
        cout << "\n";
    }
    return 0;
}
