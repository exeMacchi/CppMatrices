// 5. Realice un programa que lea una matriz de 3x3 y cree su matriz traspuesta. La matriz traspuesta es aquella
//    en la que la columna i era la fila i de la matriz original.

#include <iostream>
#include <locale.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    setlocale(LC_ALL, "es_ES");

    int mMatrix[3][3], mMatrixCopia[3][3];

    for (int i = 0; i < 3; i++) {
        for (int x = 0; x < 3; x++) {
            cout << "Ingrese un número (" << i << "-" << x << "): "; cin >> mMatrix[i][x];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int x = 0; x < 3; x++) {
            mMatrixCopia[x][i] = mMatrix[i][x];
        }
    }
    cout << endl;

    cout << "Matriz original: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int x = 0; x < 3; x++) {
            cout << mMatrix[i][x] << " ";
        }
        cout << "\n";
    }

    cout << endl;
    cout << "Matriz transpuesta: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int x = 0; x < 3; x++) {
            cout << mMatrixCopia[i][x] << " ";
        }
        cout << "\n";
    }
    return 0;
}
