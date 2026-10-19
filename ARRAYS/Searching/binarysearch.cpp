#include <iostream>
using namespace std;

int binary_search(int array[], int size, int element)
{

    int low, mid, high;

    low = 0;
    high = size - 1;


    while (low <= high)
    {
        mid = (low + high) / 2;

        if (array[mid] == element)
        {
            return mid;
        }

        if (array[mid] < element)
        {
            low = mid + 1;
        }

        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 33, 6564, 67, 535};

    int size = sizeof(arr) / sizeof(int);

    int element;
    cout << "Enter the element you want to search from the array: ";
    cin >> element;

    cout<<"Element found on index no: "<<binary_search(arr, size, element);

    

    return 0;
}