#include <iostream>

using namespace std;

int main()
{
    int arr[] = { 3, 7, 3, 5, 6, 1, 4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int comparisons = 0, write = 0;
    for(int i=1;i<size;i++)
    {
        int key = arr[i];
        int j = i - 1;
        while(j>=0)
        {
            comparisons++;
            if(key < arr[j])
            {
                arr[j+1] = arr[j];
                write++;
            }
            else
                break;
            j--;
        }
        arr[j + 1] = key;
        write++;
    }
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<"\nTotal Comparisons = "<<comparisons<<"\nTotal Write Operations = "<<write<<endl;
    return 0;
}
