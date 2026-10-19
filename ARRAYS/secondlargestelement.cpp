#include<bits/stdc++.h>
using namespace std;

int slargest(int arr[] , int n){
    int largest = arr[0];
    int slargest = -1;

    for(int i = 0 ; i < n ; i++){
        if(arr[i]>largest){
            slargest = largest;
            largest = arr[i];
        }

        else if(arr[i]<largest && arr[i]>slargest){
            slargest = arr[i];
        }
    }

    return slargest;

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

    cout<<"Second largest element in the array is: "<<slargest(arr,n);

    return 0;
}