//print n to 1 without using loop

#include<iostream>
using namespace std;

void printNumber(int n)
{
    if(n<1)
    return;

    cout << n << " ";
    printNumber(n-1);
    
} 

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    printNumber(n);
}