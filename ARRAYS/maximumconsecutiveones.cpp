#include <bits/stdc++.h>
using namespace std;

int maximumconsecutive_ones(vector<int> arr)
{
    int Max = 0;
    int cnt = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 1)
        {
            cnt++;
            Max = max(Max, cnt);
        }

        else
        {
            cnt = 0;
        }
    }

    return Max;
}

int main()
{
    vector<int> arr;

    arr = {1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 0};

    int result = maximumconsecutive_ones(arr);

    cout << "The maximum consecutive no of ones are: " << result;
    return 0;
}
