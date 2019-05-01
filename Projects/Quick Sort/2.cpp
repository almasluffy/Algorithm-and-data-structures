#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

void quicksort(int a[], int left, int right)
{    
	int i = left;
	int j = right;

	int mid = a[(left+right)/2];

	while(i<=j)
	{
		while(a[i] < mid){
             i++;
		}

		while(a[j] > mid){
			j--;
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
    map<int,int > m;
	for(int i = 0;i<n;i++)
	{
		cin>>a[i];
	}
    
	quicksort(a,0,n-1);
    int k = 0;
    for(int i = 0;i<n - 1;i++)
    {
    	if(a[i] != a[i+1])
    	{
               k++;
    	}
    }
    
    cout<<k+1;
	return 0;
}