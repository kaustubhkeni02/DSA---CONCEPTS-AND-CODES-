
// time complexity best case , worst case - O(n^2)

#include <iostream>
using namespace std;

// void selection_sort(int arr[] , int n){

//     for(int i = 0 ; i <= n-2 ; i++){
//         int mini = i;
//         for(int j = i ; j <= n-1 ; j++ ){
//             if(arr[j]<arr[mini]){

//                 mini = j;

//             }

//             swap(arr[i],arr[mini]);

//         }
//     }

// }

// void selection_sort(int arr[], int n)
// {

//     for (int i = 0; i < n - 1; i++)
//     {
//         int mini = i;

//         for (int j = i+1; j < n; j++)
//         {
//             if (arr[j] < arr[mini])
//             {
//                 mini = j;
//             }
//         }

//         if (mini != i)
//         {
//             swap(arr[i], arr[mini]);
//         }
//     }
// }

void selection_sort(int arr[] , int n){
    
    for(int i = 0 ; i < n-1 ; i++){
        int mini = i;

        for(int j = i+1 ; j < n ; j++){
            if(arr[mini] > arr[j]){
                mini = j;
            }
        }

        if(mini != i){
            swap(arr[mini] , arr[i]);
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

    selection_sort(arr, n);
    
    cout<<"SORTED ARRAY--->"<<endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}