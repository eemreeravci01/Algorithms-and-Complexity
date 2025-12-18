#include <iostream>
#include <string>
#include "Sorting.h"
#include "RandomNumber.h"
#include "Benchmark.h"

int main()
{
    //when i want to change size i am updating manually while using SIZE variable
    const int SIZE = 50000;

    auto v1 = generateRandomNumbers(SIZE);
    auto v2 = generateSortedVector(SIZE);
    auto v3 = generateReverseSortedVector(SIZE);
    
    // bubble sort
    /*
    Benchmark<> b1;
    bubleSort(v1, ascending<int>); 
    std::cout << "Random: " << b1.elapsed() / 1000000.0 << "\n";
    bubleSort(v2, ascending<int>);
    std::cout << "Sorted: " << b1.elapsed() / 1000000.0 << "\n";
    bubleSort(v3, ascending<int>);
    std::cout << "Reverse Sorted: " << b1.elapsed() / 1000000.0 << "\n";
    */
    
    // bubble sort with flag
    /*
    Benchmark<> b2;
    bubleSortWithFlag(v1, ascending<int>);
    std::cout << "Random: " << b2.elapsed() / 1000000.0 << "\n";
    bubleSortWithFlag(v2, ascending<int>);
    std::cout << "Sorted: " << b2.elapsed() / 1000000.0 << "\n";
    bubleSortWithFlag(v3, ascending<int>);
    std::cout << "Reverse Sorted: " << b2.elapsed() / 1000000.0 << "\n"; 
    */

    // insertion sort
    /*
    Benchmark<> b3;
    insertionSort(v1, ascending<int>);
    std::cout << "Random: " << b3.elapsed() / 1000000.0 << "\n";
    insertionSort(v2, ascending<int>);
    std::cout << "Sorted: " << b3.elapsed() / 1000000.0 << "\n";
    insertionSort(v3, ascending<int>);
    std::cout << "Reverse Sorted: " << b3.elapsed() / 1000000.0 << "\n"; 
    */
    
    // selection sort
    Benchmark<> b4;
    selectionSort(v1, ascending<int>);
    std::cout << "Random: " << b4.elapsed() / 1000000.0 << "\n";
    selectionSort(v2, ascending<int>);
    std::cout << "Sorted: " << b4.elapsed() / 1000000.0 << "\n";
    selectionSort(v3, ascending<int>);
    std::cout << "Reverse Sorted: " << b4.elapsed() / 1000000.0 << "\n"; 

}