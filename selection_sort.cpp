#include <iostream>

using namespace std;

int main()
{
    int arr[] = { 3, 7, 3, 5, 6, 1, 4};
    int comparisons = 0, swap = 0;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size-1;i++)
    {
        int min = i;
        for(int j=i+1;j<size;j++)
        {
            comparisons++;
            if(arr[j] < arr[min])
                min = j;
        }
        swap++;
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<"\nTotal Comparisons = "<<comparisons<<"\nTotal Swaps = "<<swap<<endl;
    return 0;
}
