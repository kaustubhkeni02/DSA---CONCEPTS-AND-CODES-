#include<bits/stdc++.h>
using namespace std;

// brute force - time complexity - O(2n) and space complexity - O(n)

int shift_zerostoleft(int arr[] , int n){
    int temp[n];
    int j = 0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i]!=0){
            temp[j]=arr[i];
            j++;
        }
    }

    for(int i = 0 ; i < j ; i++){
        arr[i]=temp[i];
    }

    for(int i = j ; i < n ; i++){
        arr[i]=0;

    }

    return arr[n];
}

// optimal solution - time complexity  O(n) and space complexity - O(1);

int shift_zerosto_left(int arr[] , int n){
    int j = -1 ;
    for(int i = 0 ; i < n ; i++){
        if(arr[i]==0){
            j = i;
            break;
        }
    }

    for(int i = j + 1 ; i < n ; i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }

    return arr[n];
}


int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];

    for(int i = 0 ; i < n ; i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }

    shift_zerosto_left(arr,n);
    cout<<"All zeros shifted to left"<<endl;

    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<"  ";
    }
}