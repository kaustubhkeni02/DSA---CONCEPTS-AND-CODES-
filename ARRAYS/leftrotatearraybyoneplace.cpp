// time complexity - O(n) and space complexity - O(1) because i am solving using the given space only which is the array

#include<iostream>
using namespace std;

int left_rotate_by_oneplace(int arr[] , int n) {
    int temp = arr[0];

    for(int i =1 ; i < n ; i++ ){
        arr[i-1] = arr[i];

    }

    arr[n-1] = temp;

    return arr[n];


}


int main(){
    int n ;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];

    for(int i = 0 ; i < n ; i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }

    left_rotate_by_oneplace(arr,n);

     for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<"   ";
    }

    return 0;




}