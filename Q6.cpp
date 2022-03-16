// Given an array of nonnegative integers, design an algorithm and a program to count the number of pairs of integers such that their difference is equal to a given key, K.


#include <iostream>

using namespace std;

int findPairs(int arr[], int key, int n)    // O(n*n)
{
    int c = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((arr[i]-arr[j] == key) || (arr[j]-arr[i] == key))
            {
                cout<<"("<<i<<","<<j<<")"<<endl;
                c++;
                if((i+j) == n)
                    return c;
            }
        }
    }
    return c;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n], key, c;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>key;
        c = findPairs(arr, key, n);
        cout<<"Number of pairs are: "<<c<<endl;
    }
    return 0;
}
