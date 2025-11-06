#include "Searching.h"
#include <iostream>

int main() 
{
	std::array<int, 14> a ({ 2,4,7,9,12,15,15,15,15,15,29,70,80,80});
	std::vector<int> v ({ 2,4,7,9,12,15,15,15,15,15,29,70,80,80});
	int result;
	result = binarySearchFirst(a, 15);
	int result_vector;
	result_vector = binarySearchFirst(v, 70);
	std::cout << result << std::endl << result_vector << std::endl;
	
}