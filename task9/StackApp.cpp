#include "Stack.h"

int main() {
    //write the program to ask user to input intger numbers as long as the number entered by the user is not equal 0
    //if the number is equal 0 program must display entered numbers in reverse order
    //use Stack to store numbers enetered by the user in memory
    //the maximum number of data enetered by the user will be 100
    Stack<int, 100> stack;
    int number;
    
    while(1)
    {
        std::cout << "Enter an integer: (0 is stop): ";
        std::cin >> number;

        if(number == 0)
            break;
        stack.push(number);
    }
    std::cout << "NUMBERS IN REVERSE ORDER \n";     

    while(!stack.isEmpty())
    {
        std::cout << stack.pop() << " ";
    }
    std::cout << "\n";
}