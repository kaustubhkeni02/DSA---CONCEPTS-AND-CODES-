// time complexity O(nlogn) and space complexity - O(1);

#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int n, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j)
    {
        while (arr[i] <= pivot && i <= high-1)
        {
            i++;
        }

        while (arr[j] > pivot && j >= low+1)
        {
            j--;
        }

        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }

    swap(pivot , arr[j]);

    return j;
}

int qs(int arr[], int n, int low, int high)
{
    if (low < high)
    {
        int pIndex = partition(arr, n, low, high);
        qs(arr, n, low, pIndex - 1);
        qs(arr, n, pIndex + 1, high);
    }

}

int quick_sort(int arr[], int n)
{
    int low = 0;
    int high = n - 1;
    qs(arr, n, low, high);

    return arr[n];

}

int main(){
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    int arr[n];

    for(int i = 0 ; i < n ; i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }

    quick_sort(arr,n);

    cout<<"Sorted array: "<<endl;

    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<"  ";
    }
    return 0;


}