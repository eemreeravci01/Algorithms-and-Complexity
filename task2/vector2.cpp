#include <vector>
#include <iostream>

using namespace std;

vector<int> generate_Divisors(int num)
{
    vector<int> divisors;
    for(int i = 1; i < num; i++)
    {
        if(num % i == 0)
            divisors.push_back(i);
    }
    return divisors;
}
int main()
{
   // vector<int> numbers;
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    vector<int> res = generate_Divisors(num);
    for(int num : res)
    {
        cout << num << " " <<endl;
    }
    /*for(int i = 1; i <= num; i++)
    {
        if(num % i == 0)
            cout << i << endl;
    }*/

}
