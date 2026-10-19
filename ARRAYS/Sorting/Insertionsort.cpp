// time complexity worst and avg - O(n^2) and best - when array is sorted O(n)

#include <iostream>
using namespace std;

// void insertion_sort(int arr[], int n)
// {

//     for(int i = 1 ; i < n ; i++){
//         int j=i;
//         while(j>0 && arr[j-1]>arr[j]){
//             swap(arr[j-1],arr[j]);
//             j--;
//         }
//     }


// }

void insertion_sort(int arr[] , int n){
    for(int i = 1 ; i < n ; i++){
        int j = i;
        while(j > 0 && arr[j-1]>arr[j]){
            swap(arr[j] , arr[j-1]);
            j--;
        }
    }
}


int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Sorted array" << endl;

    insertion_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}