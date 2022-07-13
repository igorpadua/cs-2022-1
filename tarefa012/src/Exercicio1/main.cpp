#include <iostream>

int main(void)
{
    double num1, num2;
    std::cin.exceptions(std::istream::failbit | std::istream::badbit);
    try
    {
        std::cout << "Digite um número: ";
        std::cin >> num1;
        std::cout << "Digite outro número: ";
        std::cin >> num2;
        if (num2 == 0)
        {
            throw 0;
        }

    }
    catch(std::istream::failure)
    {
        std::cout << "Falha ao ler o valor" << '\n';
    }
    catch(int para) 
    {
        std::cout << "Não é possível dividir por zero" << '\n';
    }

    double div = num1/num2;
    std::cout << "A divisão de " << num1 << " por " << num2 << " é " << div << '\n';

    return 0;
}
