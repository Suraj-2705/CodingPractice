//Sum of 1 to n without using loop

#include<iostream>
using namespace std;

int sumNumber(int n)
{
    if(n<1)
    return 0;
    
    return sumNumber(n-1) + n;
    
} 

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int result = sumNumber(n);
    cout << result;
    return 0;
}