#include <iostream>
using namespace std;

int main()
{
    int n;
    int i;
    cout << "Enter the array size: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int q;
    cout << "Enter the number of queries you want to check: ";
    cin >> q;

    int hash[13] = {0};
    for (int k = 0; k < 13; k++)
    {

        hash[arr[k]] += 1;
    }

    for (int j = 0; j < q; j++)
    {
       

        int number;
        cout << "Enter the number of which you want the frequency: ";
        cin >> number;

        // fetch
        cout << hash[number] << endl;
    }

    return 0;
}