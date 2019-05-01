#include<iostream>

using namespace std;

int main()
{  
    int n;
	int a[n];
	int b[1000000];
	int k = 0;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	for(int i = 0;i<n;i++)
	{
		int q = 0;
		for(int  j = 1;j<n;j++)
		{
			if(a[i] == a[j])
			{
				a[k] = a[i];
				q++;
			}


		}
		if(q==0)
		{
              b[k] = a[i];
              k++;
		}
	}


for(int i = 0;i<k-1;i++)
{
      cout<<b[i]<< " ";
}


	return 0;
}