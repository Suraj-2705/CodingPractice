//print 1 to n without using loop

#include<iostream>
using namespace std;

void printNumber(int n)
{
    if(n<1)
    return;

    printNumber(n-1);
    cout << n << " ";
} 

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    printNumber(n);
}