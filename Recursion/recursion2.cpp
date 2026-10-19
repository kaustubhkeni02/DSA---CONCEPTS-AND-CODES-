// reverse an array using recursion
#include<bits/stdc++.h>
using namespace std;
int temp=0;


void swap_array(int l , int r , int array[]){

    if(l>=r){
        return;
    }

    swap(array[l],array[r]);

    swap_array(l+1,r-1,array);
}


int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int array[n];

    for(int i = 0; i<n;i++){
        cout<<"Element"<<i+1<<": ";
        cin>>array[i];
    }
    
    swap_array(0,n-1,array);

    for(int i =0 ; i<n ; i++){
        cout<<array[i]<<" ";
    }
    return 0;
    

}