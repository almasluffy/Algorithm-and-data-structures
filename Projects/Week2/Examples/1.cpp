#include <iostream> 
#include <stdlib.h>
#include <stdio.h>
#include<cmath>
using namespace std;

int main()
{
    int a[5];
	
	for(int i=0;i<5;i++)
	{
		a[i] = rand();
		
	}

    int mx = a[0];
    int mn = a[0];

    for(int i=1;i<5;i++)
    {
    	mx = max(mx,a[i]);
    	mn = min(mn,a[i]);
    }

    cout<<mx<<" "<<mn;

	return 0;
}