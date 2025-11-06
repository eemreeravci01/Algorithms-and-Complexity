#include <iostream>
#include <array>

const int MAXNUMBEROFROWS = 100;
const int MAXNUMBEROFCOLUMNS =100;

void printArray(std::array < std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS> &arr, int nrrows, int nrcolumns) {
    //write the code to print element from the array
    if(nrrows > MAXNUMBEROFROWS || nrcolumns > MAXNUMBEROFCOLUMNS || nrrows < 0 || nrcolumns < 0)
   {
        std::cout << "Check the number of columns or rows!!!";
        return;
   }
   for(int i = 0; i < nrrows; i++)
   {
        for(int j =0; j < nrcolumns; j++)
        {
            std::cout << arr[i][j] << " "; 
        }
        std::cout << std::endl;
   }
}

void fillArray(std::array < std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS> &arr, int nrrows, int nrcolumns) {
   //write the code to allow user to input data to the matrix - row by row
   if(nrrows > MAXNUMBEROFROWS || nrcolumns > MAXNUMBEROFCOLUMNS || nrrows < 0 || nrcolumns < 0)
   {
        std::cout << "Check the number of columns or rows!!!";
        return;
   }
   for(int i = 0; i < nrrows; i++)
   {
       for(int j =0; j < nrcolumns; j++)
        {
            std::cout << "Enter a number: ";
            std::cin >> arr[i][j];
        }
   }
   
}

int main()
{
    std::array<std::array<int,MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS > matrix;
    fillArray(matrix, 5, 4); //elements are entered row by row
    printArray(matrix, 5, 4);
}
