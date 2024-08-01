#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int x)
{
    int leftPointer = 0;
    int rightPointer = n - 1;
    int mid = leftPointer + (rightPointer - leftPointer) / 2;
    while (leftPointer <= rightPointer)
    {
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            leftPointer = mid + 1;
        }
        else
        {
            rightPointer = mid - 1;
        }
        mid = leftPointer + (rightPointer - leftPointer) / 2;
    }
    return -1;
}

int main()
{
    int arr[] = {19, 17, 13, 11, 9, 8, 6, -5, -11};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout << "Enter the value of key you went to search in array : ";
    cin >> key;
    int index = binarySearch(arr, size, key);
    if (index == -1)
    {
        cout << "Key is not present in the array." << endl;
    }
    else
    {
        cout << "Key is present in the array at index : " << index << endl;
    }
    return 0;
}