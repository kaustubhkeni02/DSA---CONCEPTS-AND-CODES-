#include<bits/stdc++.h>
using namespace std;

int subarray_count_with_sum_k(vector<int> nums , int k){
    map<int , int> mpp;
    mpp[0] = 1;
    int cnt = 0;
    int presum = 0;

    for(int i = 0; i < nums.size() ; i++){
        presum = presum + nums[i];
        int remove = presum - k;
        cnt = cnt + mpp[remove];
        mpp[presum] = mpp[presum] + 1;
    }

    return cnt;
}

int main(){
    vector<int> v = {1,2,3,4,5,6,7,8,9};
    int k = 3;
    int count = subarray_count_with_sum_k(v , k);

    cout<<"The count of subarrays with sum k is: "<<count;


    return 0;

}