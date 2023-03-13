/*
    6. Realice un programa que calcule la suma de dos matrices cuadradas de 3x3
       con números aleatorios.
*/

#include <iostream>
#include <time.h>
#include <locale>

int main()
{
    setlocale(LC_ALL, "es_ES");

    constexpr int maxFilas{ 3 }, maxColumnas{ 3 };
    int mMatrixUno[maxFilas][maxColumnas]{},
        mMatrixDos[maxFilas][maxColumnas]{},
        mSumaMatrix[maxFilas][maxColumnas]{};

    // Rellenar las matrices
    srand(time(NULL));
    for (int i{ 0 }; i < maxFilas; i++)
    {
        for (int x{ 0 }; x < maxColumnas; x++)
        {
            mMatrixUno[i][x] = 0 + rand() % (9);
            mMatrixDos[i][x] = 0 + rand() % (9);
        }
    }

    // Sumar matrices
    for (int i{ 0 }; i < maxFilas; i++)
    {
        for (int x{ 0 }; x < maxColumnas; x++) 
        {
            mSumaMatrix[i][x] = mMatrixUno[i][x] + mMatrixDos[i][x];
        }
    }

    // Mostrar resultados
    std::cout << "La primera matriz: " << "\n";
    for (int i{ 0 }; i < maxFilas; i++)
    {
        for (int x{ 0 }; x < maxColumnas; x++)
        {
            std::cout << mMatrixUno[i][x] << " ";
        }
        std::cout << "\n";
    }

    std::cout << "\n";
    std::cout << "La segunda matriz: " << "\n";
    for (int i{ 0 }; i < maxFilas; i++)
    {
        for (int x{ 0 }; x < maxColumnas; x++)
        {
            std::cout << mMatrixDos[i][x] << " ";
        }
        std::cout << "\n";
    }

    std::cout << "\n";
    std::cout << "Suma de matrices: " << "\n";
    for (int i{ 0 }; i < maxFilas; i++)
    {
        for (int x{ 0 }; x < maxColumnas; x++)
        {
            std::cout << mSumaMatrix[i][x] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}