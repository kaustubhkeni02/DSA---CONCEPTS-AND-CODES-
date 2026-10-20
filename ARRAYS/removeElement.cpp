#include<bits/stdc++.h>
using namespace std;
// using two pointer approach
int removeElement(vector<int> nums , int val){
    int k = 0;
    for(int i = 0 ; i < nums.size() ; i++){
        if(nums[i] != val){
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
}

int main(){
    vector<int> v = {1,2,3,3,5,3,6};
    int val = 3;

    int length = removeElement(v , val);

    cout<<"The number of elements after removing val: "<<length;

    return 0;
}