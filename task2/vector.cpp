#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> numbers;
    int num;

    
    while(true)
    {
        cout << "Enter the numbers: ";
        cin >> num;
        if(num == 0)
            break;
        numbers.push_back(num);
    }
    
    for(int i = numbers.size() - 1; i >= 0; i--)
    {
        cout << numbers[i] << endl;
    } 
    return 0;

}