#include <iostream>

using namespace std;
bool used[100];
int a[100][100];
int n;
int count = 0;
void dfs(int v)
{
    cout<<v<<endl;
	used[v] = true;
	for(int i = 0;i<n;i++)
	{
		if(a[v][i] == 1 && !used[i])
		{
			dfs(i);
		}
	}
}
int main()
{
	
	cin>>n;
    for(int i = 0;i<n;i++)
    {
    	used[i] = false;
    }

    for(int i = 0;i<n;i++)
    {
    	for(int j = 0;j<n;j++)
    	{
    		cin>>a[i][j];
    	}
    }
    dfs(0);

	return 0;
}