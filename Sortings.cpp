#include <iostream>

using namespace std;

template <class T>
void Print(T& vec, int n, string s){
    cout << s << ": [" << flush;
    for (int i=0; i<n; i++){
        cout << vec[i] << flush;
        if (i < n-1){
            cout << ", " << flush;
        }
    }
    cout << "]" << endl;
}

void merge(int a[], int low, int mid, int high)
{
    int i = low, j = mid+1, k = low;
    int b[high+1];
    while(i<=mid && j<=high)
    {
        if(a[i] < a[j])
            b[k++] = a[i++];
        else
            b[k++] = a[j++];
    }
    for(;i<=high;i++)
        b[k++] = a[i];
    for(;j<=high;j++)
        b[k++] = a[i];
    for(i=low;i<=high;i++)
        a[i] = b[i];
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low, j = high;
    do
    {
        do{i++;}while(a[i] <= pivot);
        do{j--;}while(a[j] > pivot);
        
        if(i<j)swap(&a[i],&a[j]);
    }while(i<j);
    
    swap(&a[low],&a[j]);
    return j;
}

void QuickSort(int a[], int low, int high)
{
    if(low < high)
    {
        int j = partition(a, low, high);
        QuickSort(a, low, j);
        QuickSort(a, j+1, high);
    }
}

void MergeSort(int a[], int low, int high)
{
    if(low < high)
    {
        int mid = low + (high - low) / 2;
        //cout<<mid<<endl;
        MergeSort(a, low, mid);
        MergeSort(a, mid+1, high);
        merge(a, low, mid, high);
    }
}

void BubbleSort(int a[], int n)
{
    int flag = 0;
    for(int i=0;i<n-1;i++)
    {
        flag = 0;
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j] > a[j+1])
            {
                swap(&a[j],&a[j+1]);
                flag = 1;
            }
        }
        if(flag == 0)
            break;
    }
}

void InsertionSort(int a[], int n)
{
    int temp, j;
    for(int i=0;i<n;i++)
    {
        j = i - 1;
        temp = a[i];
        while(j>=0 && a[j] > temp)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
}

void SelectionSort(int a[], int n)
{
    int i, j, k;
    for(i=0;i<n-1;i++)
    {
        for(j=k=i;j<n;j++)
        {
            if(a[j] < a[k])
                k = j;
        }
        swap(&a[i],&a[k]);
    }
}

int main()
{
    int arr[] = { 11, 13, 7, 12, 16, 9, 24, 5, 10, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    
    //MergeSort(arr, 0, n-1);
    QuickSort(arr, 0, n);
    //BubbleSort(arr,n);
    //InsertionSort(arr,n);
    //SelectionSort(arr,n);
    
    cout<<"Sorted:\n";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";                      //3 5 7 9 10 11 12 13 16 24
    cout<<endl;
    
    return 0;
}
