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
