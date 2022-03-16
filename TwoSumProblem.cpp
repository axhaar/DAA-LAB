// Write a program that, given an sorted array A[ ] of n numbers and a value as val, determines whether or not there exist two indices (i,j) of  A[ ],  such that A[i] + A[j] = val    [ i and j can be equal also]

#include <iostream>

using namespace std;

int findPairs(int arr[], int key, int n)    // O(n)
{
    int c = 0, i = 0, j = n - 1;
    while(i <= j)
    {
        if((arr[i] + arr[j]) > key)
        {
            j--;
        }
        else if((arr[i] + arr[j]) < key)
        {
            i++;
        }
        else if(((arr[i] + arr[j]) == key) && (i == j))
        {
            cout<<"("<<i<<","<<j<<")"<<endl;
            c++;
            j--;
            if((i+j) >= n)
                return c;
        }
        else if((arr[i] + arr[j]) == key)
        {
            cout<<"("<<i<<","<<j<<")"<<endl;
            c++;
            j--;
            if((i+j) >= n)
                return c;
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
