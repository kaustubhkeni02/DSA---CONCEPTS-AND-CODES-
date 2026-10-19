#include<bits/stdc++.h>
using namespace std;

vector<int> intersection_of_arrays(vector<int> arr1 , vector<int> arr2){
    int n = arr1.size();
    int m = arr2.size();

    int i = 0;
    int j = 0;
    vector<int> temp;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            i++;
        }

        else if(arr1[i]>arr2[j]){
            j++;
        }
        else{            
            temp.push_back(arr1[i]);
            i++;
            j++;
        }

    }


    return temp;

    
}


int main()
{
    vector<int>arr1 = {1, 1, 2, 4, 7, 8};
    vector<int>arr2 = {1, 3, 4, 6, 7, 8, 9, 60};

    vector<int> temp = intersection_of_arrays(arr1, arr2);

    cout << "Intersection of the two sorted array is: " << endl;

    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i] << "    ";
    }

    return 0;
}
    
