#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>   
#include <ctime> 

template <typename T>
int linearSearch(std::vector<T> v, T target, int &comp) {
	comp = 0;
    for (int i = 0; i < v.size(); i++) 
    {
        comp++;
		if (v[i] == target) {
			return i;
		}
	}
	return -1;
}


template <typename T>
int binarySearch(std::vector<T> arr, T target, int &comp) {
	int left = 0, right = arr.size() - 1;
    comp = 0;
	while (left <= right) {
		int middle = left + (right - left) / 2;
        comp++;
		if (arr[middle] == target) {
			return middle;
		}
		else if (target < arr[middle]) {
			right = middle - 1;
		}
		else {
			left = middle + 1;
		}
	}
	return -1;
}

std::vector<int> generateSortedVector(int size) {
    std::vector<int> vec;
    for (int i = 0; i < size; i++) {
        vec.push_back(rand() % 100);
    }

    std::sort(vec.begin(), vec.end());

    return vec;
}

