#include <iostream>

using namespace std;
int a[101][101]
int main(){
    int n;
    cin>>n;
    for(int i = 1;i<=n;i++)
    {
    	for(int j = 1;j<=n;j++)
    	{
    		a[i][j]  = 0;
    	}
    }
    int x,y,z;
    for(int i = 1;i<=n;i++)
    {
    	cin>>y>>z;
    	
    		for(int j = 1;j<=z;j++)
    		{
    			cin>>x;
    			a[y][x] = 1;
    		}


    }

    for(int i = 1;i<=n;i++)
    {
    	for(int j = 1; j<=n;j++)
    	{
    		cout<<a[i][j]<<" ";
    	}
        cout<<a[i][n];
    	cout<<endl;
    }

	return 0;
}