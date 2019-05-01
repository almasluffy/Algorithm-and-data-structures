#include <iostream> 
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n], x , min , minI;


    for(int i = 0; i < n; i++)
    {
         cin>>a[i];
    }
    
    cin>>x;
    min = abs(a[0] - x);

    for(int  i = 1; i < n; i++)
    {
    	if(min>abs(a[i]-x))
    	{
    		min = abs(a[i] - x);
    		minI = i;
    	}
    }
  
    cout<<a[minI];
	return 0;
}