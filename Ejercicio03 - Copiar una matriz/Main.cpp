/*
    3. Hacer una matriz de tipo entera de 2x2, llenarla de números y luego 
       copiar todo su contenido hacia otra matriz.
*/

#include <iostream>
#include <locale>

int main()
{
    setlocale(LC_ALL, "es_ES");

    constexpr int maxFilas{ 2 }, maxColumnas{ 2 };
    int mTablaUno[maxFilas][maxColumnas]{}, 
        mTablaDos[maxFilas][maxColumnas]{};

    // Rellenar la matriz
    for (int i{ 0 }; i < maxFilas; i++)
    {
        for (int x{ 0 }; x < maxColumnas; x++)
        {
            std::cout << "Ingrese un número (" << i << "-" << x << "): "; 
            std::cin >> mTablaUno[i][x];
        }
    }

    // Copiarla
    for (int i{ 0 }; i < maxFilas; i++)
    {
        for (int x{ 0 }; x < maxColumnas; x++)
        {
            mTablaDos[i][x] = mTablaUno[i][x];
        }
    }

    // Mostrar la primera matriz
    std::cout << "\n";
    for (int i{ 0 }; i < maxFilas; i++)
    {
        for (int x{ 0 }; x < maxColumnas; x++)
        {
            std::cout << mTablaUno[i][x] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";

    // Mostrar la segunda matriz
    std::cout << "\n";
    for (int i{ 0 }; i < maxFilas; i++)
    {
        for (int x{ 0 }; x < maxColumnas; x++)
        {
            std::cout << mTablaDos[i][x] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";

    return 0;
}