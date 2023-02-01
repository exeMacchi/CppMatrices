// 3. Hacer una matriz de tipo entera de 2 * 2, llenarla de números y luego copiar todo su contenido hacia otra matriz.

#include <iostream>
#include <locale.h>

using std::cout;
using std::cin;
using std::endl;


int main()
{
    setlocale(LC_ALL, "es_ES");

    int mTabla1[2][2], mTabla2[2][2];

    // Rellenar la matriz
    for (int i = 0; i < 2; i++) {
        for (int x = 0; x < 2; x++) {
            cout << "Ingrese un número (" << i << "-" << x << "): "; cin >> mTabla1[i][x];
        }
    }

    // Copiar
    cout << endl;
    for (int i = 0; i < 2; i++) {
        for (int x = 0; x < 2; x++) {
            mTabla2[i][x] = mTabla1[i][x];
        }
    }

    // Mostrar la primera matriz
    for (int i = 0; i < 2; i++) {
        for (int x = 0; x < 2; x++) {
            cout << mTabla1[i][x] << " ";
        }
        cout << "\n";
    }
    cout << endl;

    // Mostrar la segunda matriz
    for (int i = 0; i < 2; i++) {
        for (int x = 0; x < 2; x++) {
            cout << mTabla2[i][x] << " ";
        }
        cout << "\n";
    }
    return 0;
}
