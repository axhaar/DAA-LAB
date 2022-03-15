#include <iostream>

using namespace std;

void binary(int arr[], int key)         //O(log(n))
{
    int start = 0, end = 11, mid;
    while(start <= end)
    {
        mid = start + (end - start) / 2;
        if(arr[mid] > key)
            end = mid - 1;
        else if(arr[mid] < key)
            start = mid + 1;
        else
        {
            cout<<"Key Found at "<<mid<<" position";
            break;
        }
    }
}

int main()
{
    int arr[] = { -12, 0, 4, 12, 34, 45, 56, 87, 98, 111, 544 };
    int key = 111;
    binary(arr, key);
    return 0;
}
