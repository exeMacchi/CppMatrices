/*
    4. Hacer una matriz preguntando al usuario el numero de filas y columnas, 
       llenarla de números aleatorios, copiar el contenido a otra matriz y por 
       último mostrarla en pantalla.
*/

#include <iostream>
#include <locale>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "es_ES");

    constexpr int maxFilas{ 50 }, maxColumnas{ 50 };
    int mMatrizOriginal[maxFilas][maxColumnas]{}, 
        mMatrizCopia[maxFilas][maxColumnas]{};
    int filas{}, columnas{};


    // Pedir tamaño
    do
    {
        std::cout << "Ingrese el número de filas: "; std::cin >> filas;
        std::cout << "Ingrese el número de columnas: "; std::cin >> columnas;

        if (filas > maxFilas && columnas > maxColumnas)
        {
            std::cout << "Error: no se puede superar el máximo de filas ("
                << maxFilas << ") ni de columnas (" << maxColumnas << ")."
                << "\n";
        }
        else if (filas > maxFilas)
        {
            std::cout << "Error: el número de filas no puede superar las "
                << maxFilas << ".\n";
        }
        else if (columnas > maxColumnas)
        {
            std::cout << "Error: el número de columnas no puede superar las "
                << maxColumnas << ".\n";
        }
    } while (filas > maxFilas || columnas > maxColumnas);

    // Rellenar matriz original con números aleatorios

    // Los números son aleatorios cada vez que se compila
    std::srand(std::time(NULL)); 

    for (int i{ 0 }; i < filas; i++)
    {
        for (int x = 0; x < columnas; x++) {

            // Esto genera un numero aleatorio desde el 0 al 100. 
            int numero{ 0 + rand() % (100) };

            mMatrizOriginal[i][x] = numero;
        }
    }

    // Copiar la matriz
    for (int i{ 0 }; i < filas; i++)
    {
        for (int x{ 0 }; x < columnas; x++)
        {
            mMatrizCopia[i][x] = mMatrizOriginal[i][x];
        }
    }

    // Mostrar la matriz original
    std::cout << "\n";
    std::cout << "Primera matriz:" << "\n";
    for (int i{ 0 }; i < filas; i++)
    {
        for (int x{ 0 }; x < columnas; x++)
        {
            std::cout << mMatrizOriginal[i][x] << " ";
        }
        std::cout << "\n";
    }

    // Mostrar la matriz copia
	std::cout << "\n";
    std::cout << "Segunda matriz:" << "\n";
    for (int i{ 0 }; i < filas; i++) 
    {
        for (int x{ 0 }; x < columnas; x++)
        {
            std::cout << mMatrizCopia[i][x] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}