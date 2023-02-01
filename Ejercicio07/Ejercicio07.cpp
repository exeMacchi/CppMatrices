// 7. Desarrollar un programa que determine si una matriz es sim�trica o no. Una matriz es sim�trica si es cuadrada
//    y si es igual a su matriz transpuesta.

#include <iostream>
#include <locale.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    setlocale(LC_ALL, "es_ES");

    int mMatrix[50][50], simetria = 0;
    int filas, columnas;

    cout << "Ingrese el n�mero de filas: "; cin >> filas;
    cout << "Ingrese el n�mero de columnas: "; cin >> columnas;
    cout << endl;

    if (filas > 50) {
        cout << "Error: el n�mero de filas no puede superar las 50.";
        return 0;
    }

    if (columnas > 50) {
        cout << "Error: el n�mero de columnas no puede superar las 50.";
        return 0;
    }

    for (int i = 0; i < filas; i++) {
        for (int x = 0; x < columnas; x++) {
            cout << "Ingrese un n�mero (" << i << "-" << x << "): "; cin >> mMatrix[i][x];
        }
    }

    if (filas == columnas) {
        for (int i = 0; i < filas; i++) {
            for (int x = 0; x < columnas; x++) {
                if (mMatrix[i][x] == mMatrix[x][i]) {
                    simetria++;
                }
            }
        }

    }

    cout << endl;
    cout << "La matriz es: " << endl;
    for (int i = 0; i < filas; i++) {
        for (int x = 0; x < columnas; x++) {
            cout << mMatrix[i][x] << " ";
        }
        cout << "\n";
    }

    if ((filas * columnas) == simetria) {
        cout << "\nLa matriz es sim�trica." << endl;
    }
    else {
        cout << "\nLa matriz no es sim�trica." << endl;
    }
    return 0;
}
