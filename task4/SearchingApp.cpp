#include "Searching.h"
#include <iostream>
int main() {
	std::array<int, 10> a = { 2,16,4,2,8,15,2,3,5,9 };
	std::vector<int> v({ 4,7,12,3 });
	std::cout << linearSearch(a, 2, 2)<<std::endl; //3
	std::cout << linearSearch(v, 7,1)<< std::endl;//1
	std::cout << linearSearch(a, 2, 5) << std::endl;//-2
	std::cout << linearSearch(v, 7, 2) << std::endl;//-2
	}
