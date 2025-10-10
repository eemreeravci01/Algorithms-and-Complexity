#include <iostream>

int main()
{
    int num1, num2;
    
    std::cout << "Enter the first number\n";
    std::cin >> num1;
    std::cout << "Enter the second number\n";
    std::cin >> num2;
    
    int sum = num1 + num2; // it is not the best way but it works!
    int diff = num1 - num2;
    int product = num1 * num2;

    std::cout << "Sum of 2 numbers: " << sum << "\n";
    std::cout << "Difference of 2 numbers: " << diff << "\n";
    std::cout << "Product of 2 numbers: " << product << "\n";
    std::cout << "Divisors of the first number: ";
    for(int i = 1; i <= num1; i++)
    {
        if(num1 % i == 0)
        {
           std::cout << i << " ";
        }
    }
    std::cout << "\n";
 
}