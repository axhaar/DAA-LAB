// Given an array of nonnegative integers, design a linear algorithm and implement it using a program to find whether given key element is present in the array or not. Also, find total number of comparisons for each input case. (Time Complexity = O(n), where n is the size of input)


#include <iostream>

using namespace std;

void linear(int arr[], int key)         //O(n)
{
    for(int i=0;i<9;i++)
    {
        if(arr[i] == key)
        {
            cout<<"Key Found at "<<i<<" position";
            cout<<"\nNumber of comparisons are: "<<i+1<<endl;
        }
    }
}

int main()
{
    int arr[] = { 23, 534, 12, 65, 1, 2, 23, 54, 654 };
    int key = 12;
    linear(arr, key);
    return 0;
}
