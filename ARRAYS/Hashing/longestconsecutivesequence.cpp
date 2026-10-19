#include<bits/stdc++.h>
using namespace std;
// using hashing(optimal solution)
// int longest_consecutive_sequence(vector<int> nums){
//     unordered_set<int> st;
//     if(nums.size() == 0){
//         return 0;
//     }

//     for(int i = 0 ; i < nums.size() ; i++){
//         st.insert(nums[i]);
//     }

//     int cnt = 0;
//     int longest = 1;

//     for(auto it : st){
//         if(st.find(it-1)==st.end()){
//             int x = it;
//             cnt = 1;
//             while(st.find(x+1) != st.end()){
//                 x = x + 1;
//                 cnt+=1;
//             }

//             longest = max(cnt , longest);
//         }

//     }

//     return longest;
// }

// using better solution
int longest_consecutive_sequence(vector<int> nums){
    if(nums.size()==0) return 0;
    sort(nums.begin() , nums.end());
    int cnt = 0 ;
    int longest = 0;
    int last_smaller = INT_MIN;
    for(int i = 0 ; i < nums.size() ; i++){
        if(nums[i] - 1 == last_smaller){
            last_smaller = nums[i];
            cnt++;
        }

        else if(nums[i]==last_smaller){
            continue;
        }

        else if(nums[i] - 1 != last_smaller){
            cnt = 1;
            last_smaller = nums[i];
        }

        longest = max(longest , cnt);
    }

    return longest;
}

int main(){
    vector<int> v = {1,2,3,4,101,102,103,104,105};
    int length = longest_consecutive_sequence(v);

    cout<<"longest consecutive sequence: "<<length;

    return 0;
}