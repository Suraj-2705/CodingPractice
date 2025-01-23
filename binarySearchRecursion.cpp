#include<iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int key)
{
if(high >= low){
    int mid = low + (high - low)/2;
    if(key == arr[mid])
    {
        return mid;
    }

    if(arr[mid] > key)
    {
        return binarySearch(arr, low, mid-1, key);
    }


    return binarySearch(arr, mid+1, high, key);
}


return -1;
}


int main()
{
    int arr[5] = {1, 90, 61, 50, 32};

    int result = binarySearch(arr, 0, 4, 61);

    if(result == -1)
    {
        cout << "The required key is not in the array" << endl;
    }else{
        cout << "Key is at index: " << result << endl;
    }

return 0;
}