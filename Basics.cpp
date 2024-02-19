#include <iostream>

int main(int argc, char const *argv[])
{
    /* std::cout << "Ola, mundo!"; */

    /* int MyInt = 0;

    MyInt = MyInt + 20;

    MyInt *= 2;

    std::cout << MyInt; */

    /* Tipos: 1) int (inteiros)
              2) float (float MyFloat = 0.0f, lembrar de colocar o f no final para não confundir com Double)
              3) double (float porém com maior precisão)
              4) bool (booleano)
              5) char (caractere único, para string é necessário criar array)
              6) size_t (inteiro não negativo, semelhante ao próximo tipo)
              7) unsigned int (inteiro sem sinal, não negativo) */

    int x = 0;
    std::cin >> x;
    if (x >= 0) {
        std::cout << "x eh positivo";
    }
    else if (x < 0) {
        std::cout << "x eh negativo";
    }
    else {
        std::cout << "x eh zero";
    }

    // system("pause");
    return 0;
}
