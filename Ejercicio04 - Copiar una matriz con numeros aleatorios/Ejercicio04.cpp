// 4. Hacer una matriz preguntando al usuario el numero de filas y columnas, llenarla de números aleatorios, 
//    copiar el contenido a otra matriz y por último mostrarla en pantalla.

#include <iostream>
#include <locale.h>
#include <time.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    setlocale(LC_ALL, "es_ES");

    int mMatriz1[50][50], mMatrizCopia[50][50], numero;
    int filas, columnas;

    cout << "Ingrese el número de filas: "; cin >> filas;
    cout << "Ingrese el número de columnas: "; cin >> columnas;
    cout << endl;

    if (filas > 50) {
        cout << "Error: el número de filas no puede superar las 50.";
        return 0;
    }

    if (columnas > 50) {
        cout << "Error: el número de columnas no puede superar las 50.";
        return 0;
    }

    srand(time(NULL)); // Los numeros son aleatorios cada vez que se compila

    for (int i = 0; i < filas; i++) {
        for (int x = 0; x < columnas; x++) {
            numero = 0 + rand() % (100); // Esto genera un numero aleatorio desde el 0 al 100.
            mMatriz1[i][x] = numero;
        }
    }

    for (int i = 0; i < filas; i++) {
        for (int x = 0; x < columnas; x++) {
            mMatrizCopia[i][x] = mMatriz1[i][x];
        }
    }

    cout << "Primera matriz:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int x = 0; x < columnas; x++) {
            cout << mMatriz1[i][x] << " ";
        }
        cout << "\n";
    }

    cout << endl;
    cout << "Segunda matriz:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int x = 0; x < columnas; x++) {
            cout << mMatrizCopia[i][x] << " ";
        }
        cout << "\n";
    }

    return 0;
}
