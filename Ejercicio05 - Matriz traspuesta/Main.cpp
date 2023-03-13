/*
    5. Realice un programa que lea una matriz de 3x3 y cree su matriz traspuesta.
       La matriz traspuesta es aquella en la que la columna i era la fila i de la 
       matriz original.
*/

#include <iostream>
#include <locale>

int main()
{
    setlocale(LC_ALL, "es_ES");

    constexpr int maxFilas{ 3 }, maxColumnas{ 3 };
    int mMatrixOriginal[maxFilas][maxColumnas]{},
        mMatrixTranspuesta[maxFilas][maxColumnas]{};

    // Pedir datos
    for (int i{ 0 }; i < maxFilas; i++)
    {
        for (int x{ 0 }; x < maxColumnas; x++)
        {
            std::cout << "Ingrese un número (" << i << "-" << x << "): "; 
            std::cin >> mMatrixOriginal[i][x];
        }
    }

    // Copiar en la matriz transpuesta
    for (int i{ 0 }; i < maxFilas; i++)
    {
        for (int x{ 0 }; x < maxColumnas; x++)
        {
            mMatrixTranspuesta[x][i] = mMatrixOriginal[i][x];
        }
    }

    // Mostrar matriz original
    std::cout << "\n";
    std::cout << "Matriz original: " << "\n";
    for (int i{ 0 }; i < maxFilas; i++)
    {
        for (int x{ 0 }; x < maxColumnas; x++)
        {
            std::cout << mMatrixOriginal[i][x] << " ";
        }
        std::cout << "\n";
    }

    // Mostrar matriz transpuesta
    std::cout << "\n";
    std::cout << "Matriz transpuesta: " << "\n";
    for (int i{ 0 }; i < maxFilas; i++)
    {
        for (int x{ 0 }; x < maxColumnas; x++)
        {
            std::cout << mMatrixTranspuesta[i][x] << " ";
        }
        std::cout << "\n";
    } 

    return 0;
}