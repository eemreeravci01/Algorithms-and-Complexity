#include <iostream>
#include <string>
#include "Sorting.h"

int main()
{
    std::vector<int> v1={2, 7, 1, 3, 6, 2, 6};
    std::vector<double> v2={1.5, 2, 6.3, 5.6, 1.1, 0.9};
    std::vector<std::string> v3= {"enes", "emre", "eravci", "hello", "world", "ale"};
    for(int i = 0; i<v1.size(); i++)
    {
        std::cout<< v1[i] << " ";
    }
    std::cout << std::endl;
    insertionSort(v1, ascending<int>);
    for(int i = 0; i < v1.size(); i++)
    {
        std::cout << v1[i] << " ";
    }
    std::cout << std::endl;
}