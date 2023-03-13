/*
    1. Hacer un programa para rellenar una matriz pidiendo al usuario el n�mero 
       de filas y columnas. Posteriormente, mostrar la matriz en pantalla.
*/

#include <iostream>
#include <locale>

int main()
{
    setlocale(LC_ALL, "es_Es");

    constexpr int maxFilas{ 50 }, maxColumnas{ 50 };
    int mNumeros[maxFilas][maxColumnas]{};
    int filas{}, columnas{};

    // Pedir tama�o
    do
    {
		std::cout << "Ingrese el n�mero de filas: "; std::cin >> filas;
		std::cout << "Ingrese el n�mero de columnas: "; std::cin >> columnas;

        if (filas > maxFilas && columnas > maxColumnas)
        {
            std::cout << "Error: no se puede superar el m�ximo de filas (" 
                      << maxFilas << ") ni de columnas (" << maxColumnas << ")."
                      << "\n";
        }
		else if (filas > maxFilas) 
		{
			std::cout << "Error: el n�mero de filas no puede superar las "
                      << maxFilas << ".\n";
		}
		else if (columnas > maxColumnas) 
		{
            std::cout << "Error: el n�mero de columnas no puede superar las "
                      << maxColumnas << ".\n";
		}
    } while (filas > maxFilas || columnas > maxColumnas);


    // Rellenar matriz
    std::cout << "\n";
    for (int i{ 0 }; i < filas; i++)
    {
        for (int x{ 0 }; x < columnas; x++)
        {
            std::cout << "Ingrese un n�mero (" << i + 1 << "-" << x + 1 << "): ";
            std::cin >> mNumeros[i][x];
        }
    }

    // Mostrar la matriz
    std::cout << "\n";
    for (int i{ 0 }; i < filas; i++)
    {
        for (int x{ 0 }; x < columnas; x++)
        {
            std::cout << mNumeros[i][x] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}