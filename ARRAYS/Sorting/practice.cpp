#include <iostream>
using namespace std;

void merge(int arr[], int n, int low, int mid, int high)
{
    int left = low;
    int right = mid + 1;
    int i = 0;
    int temp[n];

    while (left <= mid && right <= high)
    {
        if (arr[left] < arr[right])
        {
            temp[i] = arr[left];
            left++;
            i++;
        }

        else
        {
            temp[i] = arr[right];
            right++;
            i++;
        }
    }

    while (left <= mid)
    {
        temp[i] = arr[left];
        i++;
        left++;
    }

    while (right <= high)
    {
        temp[i] = arr[right];
        i++;
        ;
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

    int mid;
    mid = (low + high) / 2;

    merge_sort(arr, n, low, mid);
    merge_sort(arr, n, mid + 1, high);
    merge(arr, n, low, mid, high);
}

int main()
{
    int n;
    cout << "Enter the array size: ";
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

    cout << "Sorted array-->  ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "    ";
    }

    return 0;
}