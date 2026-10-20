#include<bits/stdc++.h>
using namespace std;
// using hashing (but this is a better solution)
// int longestsubarraywithsumk(vector<int> nums , int k){
//     unordered_map<int , int> mpp;
//     int presum = 0;
//     int length = 0;
//     for(int i = 0 ; i < nums.size() ; i++){
//         presum = presum + nums[i];
//         if(presum == k){
//             length = max(length , i+1);
//         }

//         int remove = presum - k;
//         if(mpp.find(remove) != mpp.end()){
//             int len = i - mpp[remove];
//             length = max(length , len);
//         }

//         if(mpp.find(presum) == mpp.end()){
//             mpp[presum] = i;
//         }
//     }

//     return length;
// }

// two pointer approach (optimal solution)

int longestsubarraywithsumk(vector<int> nums , int k){
    int left = 0;
    int right = 0;
    int maxLen = 0;
    int sum = nums[0];

    while(right < nums.size()){
        while(left <= right && sum > k){
            sum = sum - nums[left];
            left += 1;
        }

        if(sum == k){
            maxLen = max(maxLen , right - left + 1);
        }

        right++;
        if(right < nums.size()) sum = sum + nums[right];
    }

    return maxLen;
}


int main(){
    vector<int> v = {1,1,1,4,5,6,3,2,6,7};
    int k = 3 ;

    int maxlen = longestsubarraywithsumk(v , k);

    cout<<"The longest subarray length with sum k is: "<<maxlen;

    return 0;
}