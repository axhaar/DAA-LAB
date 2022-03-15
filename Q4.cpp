//Given a sorted array of positive integers containing few duplicate elements, design an algorithm and implement it using a program to find whether the given key element is present in the array or not. If present, then also find the number of copies of given key. (Time Complexity = O(log n))

// O(log n)
#include <iostream>

using namespace std;

int pehla(int arr[], int key, int n)
{
    int start = 0, end = n - 1, mid;
    while(start <= end)
    {
        mid = (start + end) / 2;
        if(key > arr[mid])
            start = mid + 1;
        else if(key < arr[mid])
            end = mid;
        else
        {
            if(mid == 0 || arr[mid] != arr[mid - 1])
                return mid;
            else
                end = mid - 1;
        }
    }
    return -1;
}

int akhiri(int arr[], int key, int n)
{
    int start = 0, end = n - 1, mid;
    while(start <= end)
    {
        mid = (start + end) / 2;
        if(key > arr[mid])
            start = mid + 1;
        else if(key < arr[mid])
            end = mid;
        else
        {
            if(mid == n - 1 || arr[mid] != arr[mid + 1])
                return mid;
            else
                start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        int first = pehla(arr, key, n);
        int last = akhiri(arr, key, n);         
        if(first != -1)
            cout<<key<<" occured "<<(last - first + 1)<<" times\n";
        else
            cout<<"Key not found\n";
    }
    return 0;
}
