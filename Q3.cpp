// Given an already sorted array of positive integers, design an algorithm and implement it using a program to find whether a given key element is present in the sorted array or not. For an array arr[n], search at the indexes arr[0], arr[2], arr[4],. ,arr[2k] and so on. Once the interval (arr[2k] < key < arr[ 2k+1] ) is found, perform a linear search operation from the index 2k to find the element key. (Complexity < O(n), where n is the number of elements need to be scanned for searching): Jump Search

#include <iostream>

using namespace std;

int jump(int arr[], int key)         //O(root(n))
{
    int i = 0;
    while(key > arr[i])
    {
        if(i == 0)
            i = 1;
        else
            i *= 2;
        if(i >= 15)
            break;
    }
    i /= 2;
    for(int j=i;j<15;j++)
    {
        if(key == arr[j])
            return j;
    }
    return -1;
}

int main()
{
    int arr[] = { -12, 0, 4, 12, 34, 45, 56, 87, 98, 111, 544, 654, 745, 856, 967 };
    int key = 544;
    int index = jump(arr, key);
    if (index != -1) 
        cout<<"Key Found at "<<index<<" position";
    else
        cout<<"Key not found";
    return 0;
}
