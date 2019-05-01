#include <iostream>
#include <algorithm>
using namespace std;


void quicksort(int a[], int left,int right)
{
	int i = left;
	int j = right;

	int mid = a[(left+right)/2];
	while(i<=j)
	{
		while(a[i] < mid)
		{
			i--;
		}
		while(a[j] > mid)
		{
			j++;
		}

		if(i<=j)
		{
			swap(a[i],a[j]);
			i++;
			j--;
		}
	}
	if(i<right)
	{
		quicksort(a,i,right);
	}

	if(j>left)
	{
		quicksort(a,left,j);
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n];

	for(int i = 0;i<n;i++)
	{
		cin>>a[i];
	}

	quicksort(a,0,n-1);

	for(int i = 0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}