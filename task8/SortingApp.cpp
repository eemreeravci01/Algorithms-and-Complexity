#include <iostream>
#include <string>
#include "Sorting.h"

int main()
{
    std::vector<int> v1={2, 7, 1, 3, 6, 2, 6};
    std::vector<double> v2={1.5, 2, 6.3, 5.6, 1.1, 0.9};
    std::vector<std::string> v3= {"enes", "emre", "eravci", "hello", "world", "ale"};
    for(int i = 0; i<v3.size(); i++)
    {
        std::cout<< v3[i] << " ";
    }
    std::cout << std::endl;
    bubleSort(v3, descending<std::string>);
    for(int i = 0; i < v3.size(); i++)
    {
        std::cout << v3[i] << " ";
    }
    std::cout << std::endl;
}