//mean of array using recursssion
#include<iostream>
using namespace std;

int findSum(int arr[], int n)
{
    if(n == 1)
    return arr[0];

    return arr[n-1] + findSum(arr, n-1);
}

int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    double result = findSum(arr, 8);
    
    double mean = result/8;
    cout << mean << endl;

    return 0;
}