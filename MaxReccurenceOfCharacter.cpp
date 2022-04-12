//Question 6 from ques.txt

#include <iostream>

using namespace std;

int main()
{
	char a[] = { 'a', 'b', 'c', 'd', 'a', 'e', 'b', 'A', 'B', 'a'};
	int arr[500] = {0};
	int max;
	int n = sizeof(a)/sizeof(char);
	for(int i=0;i<n;i++)
	{
		if(a[i] >= 65 && a[i] <= 97)
			a[i] = tolower(a[i]);
		arr[a[i]]++;
	}
	for(int i=0;i<n;i++)
	{
		max = arr[a[0]];
		if(max < arr[a[i]])
			max = arr[a[i]];
	}
	cout<<max<<endl;
	return 0;
}
