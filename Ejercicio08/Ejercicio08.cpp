// 8. Realice un programa que calcule el producto de dos matrices cuadradas de 3x3.

#include <iostream>
#include <locale.h>
#include <time.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    setlocale(LC_ALL, "es_ES");

    int mMatrix1[3][3], mMatrix2[3][3], mMultiplicacionMatrix[3][3];

    srand(time(NULL));
    for (int i = 0; i < 3; i++) {
        for (int x = 0; x < 3; x++) {
            mMatrix1[i][x] = 0 + rand() % (9);
            mMatrix2[i][x] = 0 + rand() % (9);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int x = 0; x < 3; x++) {
            mMultiplicacionMatrix[i][x] = mMatrix1[i][x] * mMatrix2[i][x];
        }
    }

    cout << "La primera matriz: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int x = 0; x < 3; x++) {
            cout << mMatrix1[i][x] << " ";
        }
        cout << "\n";
    }

    cout << endl;
    cout << "La segunda matriz: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int x = 0; x < 3; x++) {
            cout << mMatrix2[i][x] << " ";
        }
        cout << "\n";
    }

    cout << endl;
    cout << "La matriz multiplicada: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int x = 0; x < 3; x++) {
            cout << mMultiplicacionMatrix[i][x] << " ";
        }
        cout << "\n";
    }
    return 0;
}
