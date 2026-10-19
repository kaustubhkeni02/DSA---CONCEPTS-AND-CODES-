// for finding the maximum sum of a subarray in an array

#include<bits/stdc++.h>
using namespace std;

long long max_sum_in_subarray(vector<int> arr){
    int sum = 0;
    int max = LONG_MIN;
    int start;
    int ansS = -1;
    int ansE = -1;

    for(int i = 0 ; i < arr.size() ; i++){
        if(sum==0){
            start = i;
        }
        sum = sum + arr[i];

        if(sum>max){
            max = sum;
            ansS = start;
            ansE = i;
        }
        
        if(sum<0){
            sum = 0;
        }
    }
    cout<<"The subarray with maximum sum is: "<<endl;

    for(int i = ansS ; i <= ansE ; i++){
        cout<<arr[i]<<"   ";
    }

    cout<<endl;

    return max;
}

int main(){
    vector<int>v ={-2,-3,4,-1,-2,1,5,-3};

    cout<<"Maximum sum is: "<<max_sum_in_subarray(v);

    return 0;

    
}