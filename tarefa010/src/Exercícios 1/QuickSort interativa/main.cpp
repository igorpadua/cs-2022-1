#include "QuickSort.h"
#include <random>

int main(void)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 10000);

    // 100
    int num[100];

    for (int i = 0; i < 100; i++)
    {
        num[i] = dis(gen);
    }

    quickSort(num, 0, 100);
    std::cout << "Para 100" << std::endl;
    for (int i = 0; i < 100; i++)
    {
     std::cout << num[i] << std::endl;   
    }

    // 1000
    int num1[1000];

    for (int i = 0; i < 1000; i++)
    {
        num[i] = dis(gen);
    }

    quickSort(num1, 0, 1000);
    std::cout << "Para 1000" << std::endl;    
    for (int i = 0; i < 1000; i++)
    {
     std::cout << num1[i] << std::endl;   
    }

    // 10000
    int num2[10000];

    for (int i = 0; i < 10000; i++)
    {
        num[i] = dis(gen);
    }

    quickSort(num, 0, 10000);
    std::cout << "Para 10000" << std::endl;
    for (int i = 0; i < 10000; i++)
    {
     std::cout << num2[i] << std::endl;   
    }
    
    return 0;
}
