#include <bits/stdc++.h>
using namespace std;

// brute force approach - check for all the elements in range and traverse through array - time compelxity - O(n^2) and space complexity - O(1)

int missing_no(vector<int> arr)
{

    int N = *max_element(arr.begin(), arr.end());
    int flag = 0;
    int miss;
    for (int i = 1; i < N; i++)
    {
        flag = 0;
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[j] == i)
            {
                flag = 1;
                break;
            }

            else
            {
                continue;
            }
        }

        if (flag == 0)
        {
            miss = i;
        }
    }

    return miss;
}

// better solution - time complexity = O(n+n) and space complexity - O(n)

int missing_number(vector<int> arr)
{
    int max = *max_element(arr.begin(), arr.end());
    int hash[max + 1] = {0};
    int miss = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        hash[arr[i]] = 1;
    }

    for (int i = 1; i <= max; i++)
    {
        if (hash[i] == 0)
        {
            miss = i;
        }
    }

    return miss;
}

// optimal solution - time complexity = O(n) and space complexity - O(1);

int missing_number_optimal(vector<int> arr)
{
    int max = *max_element(arr.begin(), arr.end());
    int xor1 = 0;
    int xor2 = 0;

    for (int i = 0; i < arr.size() ; i++)
    {
        xor1 = xor1 ^ arr[i];

        xor2 = xor2 ^ (i+1);
    }

    xor2 = xor2 ^ max;

    int ans = xor1 ^ xor2;

    return ans;
}

int main()
{
    vector<int>arr = {1, 2 , 3 , 4 , 5 , 6 , 7 , 9};

    cout << "The missing no is: " << missing_number_optimal(arr);

    return 0;
}