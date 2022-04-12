//Question 3 from ques.txt

#include <iostream>

using namespace std;

int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7};
	int arr2[] = { 2, 3, 4, 7, 8, 9, 10, 11};
	int n1 = sizeof(arr1)/sizeof(int);
	int n2 = sizeof(arr2)/sizeof(int);
	int big;
	if(n1 > n2)
		big = n1;
	else
		big = n2;
	int arr3[big];
	int j=0;
	for(int i=0;i<big && j<big;i++)
	{
		if(arr2[i] == arr1[j])
		{
			arr3[j] = arr2[i];
			j++;
		}
		else if(arr2[j] == arr1[i])
		{
			arr3[j] = arr1[i];
			j++;
		}
	}
	for(int i=0;i<big;i++)
		cout<<arr3[i]<<" ";
	cout<<endl;
	return 0;
}
