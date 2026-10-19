#include<iostream>
using namespace std;

bool comp(pair<int,int> p1,pair<int,int> p2){
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;

    if(p1.first>p2.second) return true;
    return false;
}

void explainExtra(){
    
    // sort(a,a+n);
    // sort(v.begin(),v.end());

    // sort(a+2,a+4); [start,end)

    pair<int,int> a[]={{1,2},{2,1},{4,1}};

    // sort(a,a+n,comp);

    int num = 7;
    int cnt = __builtin_popcount(num);

    long long num1 = 223242355343;
    int cnt1 = __builtin_popcountll(num1);

    string s = "123";

    // do{
    //     cout<<s<<endl;
        
    // }while(next_permutation(s.begin(),s.end()));
    // 
}