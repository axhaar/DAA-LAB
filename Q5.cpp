// Given a sorted array of positive integers, design an algorithm and implement it using a program to find three indices i, j, k such that arr[i] + arr[j] = arr[k].

#include <iostream>

using namespace std;

int findPairs(int arr[], int n)     //O(n*n)
{
    int i, j, k, c = 0;
    for(k=0;k<n;k++)
    {
        i = 0;
        j = n-1;
        while(i < j)
        {
            if((arr[i] + arr[j]) > arr[k])
                j--;
            else if((arr[i] + arr[j]) < arr[k])
                i++;
            else if((arr[i] + arr[j]) == arr[k])
            {
                cout<<i<<" "<<j<<" "<<k<<endl;
                c++;
                break;
            }
            else if(i+j == n)
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
        int arr[n], c;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        c = findPairs(arr, n);
        cout<<"Number of pairs are: "<<c<<endl;
    }
    return 0;
}
