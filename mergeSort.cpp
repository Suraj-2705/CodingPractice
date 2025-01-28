#include<iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right)
{   
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1];
    int R[n2];

    for(int i = 0; i < n1; i++)
    {
        L[i] = arr[left + i];
    }

    for(int j = 0; j < n2; j++)
    {
        R[j] = arr[mid+1+j];
    }

    int i = 0, j = 0;
    
    int k = left;

    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }

        k++;
    }

    while(i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while(j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }

}

void mergeSort(int arr[], int left, int right)
{
    if(left >= right)
    {
        return;
    }

    int mid = left + (right - left)/2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid+1, right);
    merge(arr, left, mid, right);
}


int main()
{
    int arr[10] = {2, 5, 1, 31, 3, 50, 40, 12, 8, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, 0, n-1);

    cout << "Sorted array is" << endl;

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

return 0;
}