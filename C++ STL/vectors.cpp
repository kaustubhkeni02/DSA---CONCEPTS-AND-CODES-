#include<iostream>
#include<vector>
using namespace std;

void explainVectors(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>> vec;
    vec.push_back({1,3});
    vec.emplace_back(1,2);
    // takes 100 5 times in a vector
    vector<int> vec1(5,100);
    
    vector<int> vec2(5);

// creates the copy of vector 1
    vector<int> vec2(vec1);  
    
    // iterator(to access elements of the vector)

    vector<int>::iterator it = v.begin();
    it++;
    cout<<*(it)<<" ";

    vector<int>::iterator it = v.end();
    vector<int>::reverse_iterator it = v.rend();
    vector<int>::reverse_iterator it = v.rbegin();
    cout<< v[0] << " "<<v.at(0);
// to print the last element of the vector
    cout<<v.back()<< " ";

    // for printing the element in the vector
    for(vector<int>::iterator it = v.begin();it!=v.end();it++){
        cout<<*(it)<<endl;


    }

    for(auto it = v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }

    for(auto it: v){
        cout<<it<<" "<<endl;
    }

    // to delete the specific element
    v.erase(v.begin()+1);
    // to delete continuous elements [start,end)
    v.erase(v.begin()+1,v.begin()+4);

    // insert function

    vector<int>v(2,100);
    // to insert a certain single element at a certain position
    v.insert(v.begin(),300);
    // to insert a element with some frequency
    v.insert(v.begin()+1,2,10);
    // to determine the size of the vector
    cout<<v.size();
    // pop_back-removes the last element from the vector
    vector<int>copy(2,50);  //{50,50}
    // v.insert(v.begin(),copy.begin(),copy.begin(),copy.end());
    vec1.swap(vec2);
    v.clear();

    cout<<v.empty(); // if vector is empty it will return true or else false









}