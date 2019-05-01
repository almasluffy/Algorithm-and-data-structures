#include <iostream>
#include<vector>
using namespace std;
int n,m,k,x;
bool used[101];
vector<int> g[101];
int zachel[101], vyshel[101];
int timer = 1;
void dfs(int v)
{
    
	zachel[v] = timer++;
	used[v] = true;
	for(int i = 0;i<g[v].size();i++)
	{
		int ka = g[v][i];
		if(!used[ka])
		{
			dfs(ka);
		}
	}
	vyshel[v] = timer++;
	
}

int main()
{
 
    cin>>n;
    for(int i = 0;i<n;i++)
    {
    	cin>>m>>k;
        for(int j = 0;j<k;j++)
        {
           cin>>x;
           g[m].push_back(x);
        }
    }

    for(int i = 1;i<=n;i++)
    {
         
         if(!used[i])
         {
         	dfs(i);
         }
    }

    for(int i = 1;i<=n;i++)
    {
    	cout<<i<<" "<<zachel[i]<<" "<<vyshel[i]<<endl;
    }

	return 0;
}