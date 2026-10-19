
// time complexity = all cases O(nlog n) and space complexity - O(n)

#include <iostream>
using namespace std;

void merge(int arr[], int n, int low, int mid, int high)
{
    int left = low;
    int right = mid + 1;
    int temp[n];
    int j = 0;

    while (left <= mid && right <= high)
    {
        if (arr[left] < arr[right])
        {
            temp[j] = arr[left];
            left++;
            j++;
        }

        else
        {
            temp[j] = arr[right];
            right++;
            j++;
        }
    }

    while (left <= mid)
    {
        temp[j] = arr[left];
        j++;
        left++;
    }

    while (right <= high)
    {
        temp[j] = arr[right];
        j++;
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void merge_sort(int arr[], int n, int low, int high)
{

    if (low >= high)
    {
        return;
    }

    int mid = (low + high) / 2;

    merge_sort(arr, n, low, mid);
    merge_sort(arr, n, mid + 1, high);
    merge(arr, n, low, mid, high);
}

int main()
{
    int n;
    cout << "Enter the size for your array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int low = 0;
    int high = n - 1;

    merge_sort(arr, n, low, high);
    cout << "Sorted array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "   ";
    }

    return 0;
}
