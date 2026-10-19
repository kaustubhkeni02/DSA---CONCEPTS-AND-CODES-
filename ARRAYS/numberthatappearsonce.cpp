#include <bits/stdc++.h>
using namespace std;
// better solution
int appears_onecee(vector<int> arr){

    map<int,int>mpp;
    int result = 0;

    for(int i = 0 ; i < arr.size() ; i++){
        mpp[arr[i]]++;
    }

    for(auto it : mpp){
        if(it.second == 1){
            result = it.first;
        }
    }

    return result;
}
// optimal solution
int appears_once(vector<int> arr)
{
    int xor1 = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        xor1 = xor1 ^ arr[i];
    }

    return xor1;
}

int main()
{
    vector<int> arr = {1, 1, 2, 2, 5, 4, 4};

    // int result = appears_once(arr);
    int result1 = appears_onecee(arr);

    cout << "The number that appears once in the array is: " << result1;

    return 0;
}