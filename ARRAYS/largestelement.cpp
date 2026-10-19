#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    int largest = 0;
    int largest_element(int arr[], int n)
    {
        int largest = arr[0];

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > largest)
            {
                largest = arr[i];
            }
        }

        return largest;
    }
};

int main()
{
    solution c;
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "The largest element in the array is: " << c.largest_element(arr, n);

    return 0;
}