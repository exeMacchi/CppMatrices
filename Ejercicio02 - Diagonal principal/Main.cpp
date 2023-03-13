/*
    2. Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para 
       que muestre la diagonal principal de la matriz.
*/

#include <iostream>
#include <locale>

int main()
{
    setlocale(LC_ALL, "es_ES");

    constexpr int maxFilas{ 3 }, maxColumnas{ 3 };
    int mTabla[maxFilas][maxColumnas]{};
    int vDiagonal[maxFilas]{};

    // Rellenar matriz
    for (int i{ 0 }; i < maxFilas; i++)
    {
        for (int x{ 0 }; x < maxColumnas; x++)
        {
            std::cout << "Ingrese un número (" << i << "-" << x << "): "; 
            std::cin >> mTabla[i][x];
        }
    }

    // Hallar la diagonal principal
    for (int i{ 0 }; i < maxFilas; i++)
    {
        for (int x{ 0 }; x < maxColumnas; x++)
        {
            if (i == x) 
            {
                vDiagonal[i] = mTabla[i][x];
            }
        }
    }

    // Mostrar matriz 
    std::cout << "\n";
    for (int i{ 0 }; i < maxFilas; i++)
    {
        for (int x{ 0 }; x < maxColumnas; x++)
        {
            std::cout << mTabla[i][x] << " ";
        }
        std::cout << "\n";
    }

    // Mostrar la diagonal
    std::cout << "\nLa diagonal principal es: ";
    for (int i{ 0 }; i < maxFilas; i++)
    {
        std::cout << vDiagonal[i] << " ";
    }
    std::cout << "\n";

    return 0;
}