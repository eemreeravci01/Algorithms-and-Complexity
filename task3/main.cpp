#include "Std2DArray.h"
#include <iostream>
using namespace std;

int main() {
    array<array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS> arr;
    int rows, columns;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> columns;

    inputArray(arr, rows, columns); // User inputs data

    cout << "\nArray elements:\n";
    printArray(arr, rows, columns);

    int maxValue = findMaxValue(arr, rows, columns);
    cout << "\nMaximum value in the array: " << maxValue << endl;

    return 0;
}
