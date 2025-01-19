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
    int arr[5] = {1,2,3,4,5};
    
    int result = findSum(arr, 5);

    cout << result;
}