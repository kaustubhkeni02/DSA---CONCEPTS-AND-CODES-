#include <bits/stdc++.h>
using namespace std;
// quick sort practice
// int partition(int arr[], int low, int high)
// {
//     int pivot = arr[low];
//     int i = low;
//     int j = high;

//     while (i < j)
//     {
//         while (arr[i] <= pivot && i <= high - 1)
//         {
//             i++;
//         }

//         while (arr[j] >= pivot && j >= low + 1)
//         {
//             j--;
//         }

//         if (i < j)
//         {
//             swap(arr[i], arr[j]);
//         }
//     }

//     swap(arr[low], arr[j]);

//     return j;
// }

// void qs(int arr[], int low, int high)
// {
//     if (low < high)
//     {
//         int Pindex = partition(arr, low, high);
//         qs(arr, low, Pindex - 1);
//         qs(arr, Pindex + 1, high);
//     }
// }

// int main()
// {
//     int arr[] = {66, 8, 9, 10, 3, 7, 2};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int low = 0;
//     int high = size - 1;

//     qs(arr, low, high);

//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << "   ";
//     }

//     return 0;
// }

void merge(int arr[], int low, int mid, int high)
{
    int left = low;
    int right = mid + 1;
    vector<int> v;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            v.push_back(arr[left]);
            left++;
        }

        else
        {
            v.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        v.push_back(arr[left]);
        left++;
    }

    while (right <= high)
    {
        v.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = v[i - low];
    }
}

void merge_sort(int arr[], int low, int high)
{
    if (low >= high)
    {
        return;
    }

    int mid = (low + high) / 2;

    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main()
{
    int arr[] = {56, 23, 64, 34, 54, 26};
    int size = sizeof(arr) / sizeof(arr[0]);
    int low = 0;
    int high = size - 1;
    merge_sort(arr, low, high);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "   ";
    }

    return 0;
}