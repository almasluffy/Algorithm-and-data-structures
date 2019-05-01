#include <iostream> 
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n], x , b[1000], k = 0;


    for(int i = 1; i <= n; i++)
    {
         cin>>a[i];
    }
    
    cin>>x;

    for(int i = 1;i<=n;i++)
    {
       if(a[i] == x)
       {
        b[k] = i;
        k++;
       }
    }    

    sort(b,b+(k-1));

    for(int i = 1;i<k;i++)
    {
        cout<<b[i]<<" ";
    }
	return 0;
}