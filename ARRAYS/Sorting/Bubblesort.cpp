// best case - time complexity - O(n) , worst case - O(n^2);


#include <iostream>
using namespace std;

// void bubble_sort(int arr[], int n)
// {

//     for (int i = n - 1; i >= 1; i--)
//     {
//         int didswap = 0 ;
//         for (int j = 0; j <= i-1 ; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//                 didswap = 1;
//             }

//             else
//             {
//                 continue;
//             }

            
//         }

//         if(didswap==0){
//             break;
//         }
//     }
// }

// void bubble_sort(int arr[] , int n){
//     for(int i = 0 ; i < n-1 ; i++){
//         int flag = 0;
//         for(int j = 0 ; j < n-1 ; j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j] , arr[j+1]);
//                 flag = 1;
//             }

//             else{
//                 continue;
//             }
//         }

//         if(flag == 0){
//             break; 
//         }
//     }
// }

void bubble_sort(int arr[] , int n){
    for(int i = 0 ; i < n-1 ; i++){
        int didswap = 0;
        for(int j = 1 ; j < n-i ; j++){
            if(arr[j-1] > arr[j]){
                swap(arr[j] , arr[j-1]);
                didswap = 1;
            }
        }

        if(didswap == 0){
            break;
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

    bubble_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}