// 2. Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para que muestre la diagonal principal 
//    de la matriz.

#include <iostream>
#include <locale.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    setlocale(LC_ALL, "es_ES");

    int mTabla[3][3];
    int vDiagonal[3];

    for (int i = 0; i < 3; i++) {
        for (int x = 0; x < 3; x++) {
            cout << "Ingrese un número (" << i << "-" << x << "): "; cin >> mTabla[i][x];
        }
    }
    cout << endl;
    for (int i = 0; i < 3; i++) {
        for (int x = 0; x < 3; x++) {
            cout << mTabla[i][x] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 3; i++) {
        for (int x = 0; x < 3; x++) {
            if (i == x) {
                vDiagonal[i] = mTabla[i][x];
            }
        }
    }
    cout << "La diagonal principal es: ";
    for (int i = 0; i < 3; i++) {
        cout << vDiagonal[i] << " ";
    }
    cout << endl;
    return 0;
}
