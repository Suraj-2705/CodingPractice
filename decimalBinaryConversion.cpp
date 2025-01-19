//decimal to binary conversion using recurssion 

#include<iostream>
#include<string>
using namespace std;

string printBinary(int n)
{
    if(n==0)
    return "0";

   return printBinary(n/2) + to_string(n%2);
}

int main()
{
    int n; 
    cout << "Enter the value of n: ";

    cin >> n;

    cout << printBinary(n);
}