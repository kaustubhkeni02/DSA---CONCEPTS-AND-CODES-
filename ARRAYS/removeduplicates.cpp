
// using two pointer approach for optimal solution , we can also use set but it will take nlogn + n time complexity and O(n) as space complexity
#include<bits/stdc++.h>
using namespace std;

int remove_duplicates(int arr[] , int n){
    int i = 0;
    for(int j = 1 ; j < n ; j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }

    cout<<"No of unique elements: "<<i+1<<endl;
    
    
}

int main(){
    int n;
    cout<<"Enter the size of your array: ";
    cin>>n;
    int arr[n];

    for(int i = 0 ; i < n ; i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }

    remove_duplicates(arr , n);

    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<"   ";
    }

    return 0;
}


