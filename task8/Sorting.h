#ifndef SORTING_H
#define SORTING_H

#include <vector>

template <typename T, typename Compare>
void bubleSort(std::vector<T> &v, Compare comp)
{
    int len = v.size();

    for(int i = 0; i < len - 1; i++)
    {
        for(int j = 0; j < len - i - 1; j++)
        {
            if(!comp(v[j], v[j+1]))
            {
                T temp;
                temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }
}

template <typename T>

bool ascending(T a, T b)
{
    return a <= b;
}
template <typename T>

bool descending(T a, T b)
{
    return a >= b;
}
template <typename T, typename Compare>
void bubleSortWithFlag(std::vector<T> &v, Compare comp)
{
    int len = v.size();

    for(int i = 0; i < len - 1; i++)
    {
        bool is_sorted = false;
        for(int j = 0; j < len - i - 1; j++)
        {
            if(!comp(v[j], v[j+1]))
            {
                T temp;
                temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
                is_sorted = true;
            }
        }
        if(!is_sorted)
            break;  
    }
}
template <typename T, typename Compare>
void selectionSort(std::vector<T> &v, Compare comp)
{
    int len = v.size();
    for(int i = 0; i < len -1;i++)
    {
        int min = i;
        for (int j = i + 1; j < len; j++)
        {
            if (!comp(v[min], v[j]))
            {
                min = j;   
            }
            
        }
        T temp;
        temp = v[min];
        v[min] = v[i];
        v[i] = temp;
    }

}

template <typename T, typename Compare>
void insertionSort(std::vector<T> &v, Compare comp)
{
    int len  = v.size();
    for(int i = 1; i < len; i++)
    {
        T key = v[i];
        int j = i - 1;
        while (j >= 0 && comp(key, v[j]))
        {
            v[j + 1] = v[j];
            j--;        
        }
        v[j+1] = key;
    }
}

#endif