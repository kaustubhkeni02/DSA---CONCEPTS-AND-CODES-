#include <bits/stdc++.h>
using namespace std;

vector<int> union_sorted_arrays(vector<int> arr1, vector<int> arr2, int n, int m)
{
    int i = 0;
    int j = 0;
    vector<int> temp;
    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
        {
            if (temp.size() == 0|| temp.back()!=arr1[i])
            {
                temp.push_back(arr1[i]);
            }
            i++;
        }

        else
        {
            if (temp.size() == 0|| temp.back()!=arr2[j])
            {
                temp.push_back(arr2[j]);
            }
            j++;
        }
    }

    while (i < n)
    {
        if (temp.size() == 0|| temp.back()!=arr1[i])
        {
            temp.push_back(arr1[i]);
        }
        i++;
    }

    while (j < m)
    {
        if (temp.size() == 0|| temp.back()!=arr2[j])
        {
            temp.push_back(arr2[j]);
        }
        j++;
    }

    return temp;
}

int main()
{
    vector<int>arr1 = {1, 1, 2, 4, 7, 8};
    vector<int>arr2 = {1, 3, 4, 6, 7, 8, 9, 60};

    int n = arr1.size();
    int m = arr2.size();

    vector<int> temp = union_sorted_arrays(arr1, arr2, n, m);

    cout << "Union of the two sorted array is: " << endl;

    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i] << "    ";
    }

    return 0;
}