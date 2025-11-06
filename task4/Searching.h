
#include <array>
#include <vector>

template <typename T,unsigned long N>
/*long linearSearch(std::array<T,N> arr, T target)
{
    for(int i = 0; i <N; i++)
    {
        if(arr[i] == target)
            return i;
    }
    return -1;
}*/
// assignment
template <typename T, unsigned long N>
long linearSearch(std::array<T, N> arr, T target, long k)
{
    long count = 0;
    for(int i = 0; i < N; i++)
    {
        if(arr[i] == target)
            count++;
            if(count == k)
            {
                return i;
            }
    }
    if(count == 0)
        return -1;
    else
        return -2;
}
