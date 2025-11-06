#include <array>
#include <vector>
/*
template <typename T, unsigned long N>
int linearSearch(std::array<T, N> arr, T target) {
	for (int i = 0; i < N; i++) {
		if (arr[i] == target) {
			return i;
		}
	}
	return -1;
}

template <typename T, unsigned long N>
int linearSearch(std::array<T, N> arr, T target, int k) {
	int count = 0;
	for (int i = 0; i < N; i++) {
		if (arr[i] == target) {
			count++;
			if (count == k) {
				return i;
			}
		}
	}
	
	if (count == 0)
	return -1;
	else
		return -2;
}

template <typename T>
int linearSearch(std::vector<T> v, T target) {
	for (int i = 0; i < v.size(); i++) {
		if (v[i] == target) {
			return i;
		}
	}
	return -1;
}

template <typename T>
int linearSearch(std::vector<T> v, T target, int k) {
	//write the block instructions
}



template <typename T, unsigned long N>
int binarySearch(std::array<T, N> arr, T target) {
	int left = 0, right = N - 1;
	while (left <= right) {
		int middle = left + (right - left) / 2;
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
template <typename T>
int binarySearch(std::vector<T> arr, T target) {
	int left = 0, right = arr.size() - 1;
	while (left <= right) {
		int middle = left + (right - left) / 2;
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
*/

template <typename T, unsigned long N>
int binarySearchFirst(const std::array<T, N> arr, T target) 
{
	//write the body for this function
	//function must return the index of the first occurence for the target element or
	//must return -1 if target doesnt exists
    int left = 0, right = N - 1;
    int result = -1;
    while (left <= right) 
	{
		int middle = left + (right - left) / 2;

        if (arr[middle] == target) {
            result = middle;   
            right = middle - 1; 
        } 
        else if (arr[middle] > target) {
            right = middle - 1;
        } 
        else {
            left = middle + 1;
        }
    }
    return result;
}

template <typename T>
int binarySearchFirst(const std::vector<T>& v, T target) {
	//write the body for this function
	//function must return the index of the first occurence for the target element or
	//must return -1 if target doesnt exists
	int left = 0;
    int right = v.size() - 1;
    int result = -1;

    while (left <= right) {
        int middle = left + (right - left) / 2;

        if (v[middle] == target) {
            result = middle;   
			right = middle - 1;   
        }
        else if (v[middle] > target) {
            right = middle - 1;   
        }
        else {
            left = middle + 1;    
        }
    }
    return result;
}
