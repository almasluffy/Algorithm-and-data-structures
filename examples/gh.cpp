#include <iostream>

using namespace std;



int main(){

	  int n,m;
	  cin>>n>>m;
	  int a[n][m];
      int sum = 0;
      double mysum[100000];
      int k = 0;
	  for(int i = 0;i<n;i++)
	  {
	  	for(int j = 0;j<m;j++)
	  	{
	  		cin>>a[i][j];
	  	}
	  }

	  for(int i = 0 ;i<m;i++)
	  {
	  	sum = 0;
	  	for(int j = 0;j<n;j++)
	  	{
              sum+=a[j][i];
        }
	  	  mysum[i] = sum/m;
	  }

	  for(int i = 0;i<m;i++)
	  {
	  	    k  = 0;
	  	   for(int j = 0;j<n;j++)
	  	   {
	  	   	if(a[j][i] > mysum[i])
	  	   	{
	  	   		k++;
	  	   	}
	  	   }
	  	   cout<<i+1<<" column counter is "<<k<<endl;
	  }
	return 0;
}