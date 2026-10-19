// unique key and value pair is used in map (keys are stored in sorted order)
#include<iostream>
#include <map>
using namespace std;

void explainMap(){
    map<int,int> mpp;
    map<int,pair<int,int>> mpp;
    map<pair<int,int>,int> mpp2;

    mpp[1]=2; //{1,2}
    mpp.emplace(3,1);
    mpp.insert({2,4});

    mpp2[{2,3}]=10; //key is {2,3} and corresponding value is 10

    for(auto it : mpp){
        cout<<it.first<<" "<<it.second<<endl;

    }

    cout<<mpp[1];
    cout<<mpp[5];//as there is no 5 it will give null or zero

    auto it = mpp.find(3);
    // cout<<it.second;

    auto it = mpp.find(5);

    // learn lower bound and upper bound








}


void ExplainMultimap(){
    // everything same as map ,only it can store multiple keys
    // only mpp[key] cannot be used here



}

