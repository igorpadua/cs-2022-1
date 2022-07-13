#include <iostream>
#include <vector>

int main(void)
{

    std::vector<int> num;

    std::cin.exceptions(std::istream::failbit | std::istream::badbit);

    try
    {
        std::cout << "Digite 10 números:" << '\n';
        for (int i{}; i < 1000; ++i)
        {
            int aux;
            std::cin >> aux;
            num.push_back(aux);
            if (num.at(i) == 0)
            {
                i = 1001;
            }
            
        }

        if (num.size() > 10)
        {
            throw -1;
        }
        

        
    }
    catch(std::istream::failure)
    {
        std::cout << "Falha ao ler o valor" << '\n';
    }
    catch(int aux) {
        num.erase(num.begin() + 10, num.end());
    }


    for (auto it : num)
    {
        std::cout << it << ' ';
    }
    std::cout << '\n';

    return 0;
}
