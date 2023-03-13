/*
    7. Desarrollar un programa que determine si una matriz es simétrica o no. 
       Una matriz es simétrica si es cuadrada y si es igual a su matriz transpuesta.
*/

#include <iostream>
#include <locale>

int main()
{
    setlocale(LC_ALL, "es_ES");

    constexpr int maxFilas{ 50 }, maxColumnas{ 50 };
    int mMatrix[maxFilas][maxColumnas]{};
    int filas{}, columnas{}, simetria{ 0 };

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

    
    // Primera verificación
    if (filas == columnas) 
    {
		// Pedir datos
		for (int i{ 0 }; i < filas; i++)
		{
			for (int x{ 0 }; x < columnas; x++)
			{
				std::cout << "Ingrese un número (" << i << "-" << x << "): "; 
				std::cin >> mMatrix[i][x];
			}
		}

        // Segunda verificación
        for (int i{ 0 }; i < filas; i++)
        {
            for (int x{ 0 }; x < columnas; x++)
            {
                if (mMatrix[i][x] == mMatrix[x][i]) 
                {
                    simetria++;
                }
            }
        }

        // Resultados
		std::cout << "\n";
        for (int i{ 0 }; i < filas; i++)
        {
            for (int x{ 0 }; x < columnas; x++)
            {
				std::cout << mMatrix[i][x] << " ";
			}
			std::cout << "\n";
		}

		if ((filas * columnas) == simetria) 
        {
			std::cout << "\nLa matriz es simétrica." << "\n";
		}
		else 
        {
			std::cout << "\nLa matriz no es simétrica." << "\n";
		}
		return 0;
    }
	else
	{
		std::cout << "La matriz no puede ser simétrica porque el número de "
				  << "filas y de columnas no son iguales.\n";
		return 0;
	}

}