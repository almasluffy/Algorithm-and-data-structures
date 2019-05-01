#include <iostream>
#include <vector>
using namespace std;
vector<int > g[101];
bool used[101];

void dfs(int v)
{
	for(int i = 0;i<g[v].size();i++)
	{
		int parent = g[v][i];
		if(!used[parent])
		{
           dfs(parent);
		}
		
	}
	cout<<v<<" ";
	used[v] = true;
}

int main()
{
	int n,m;
	while(1)
	{   
		cin>>n>>m;
		int x,y;

		for(int i = 0;i<101;i++)
		{
			used[i] = false;
			g[i].clear();
		}
		if(n == 0 &&  m == 0) break;
		for(int i = 0;i<m;i++)
		{
            cin>>x>>y;
            g[y].push_back(x);
		}
		for(int i = 1;i<=n;i++)
		{
			if(!used[i])
			{
                dfs(i);
			}
			
		}
        cout<<endl;
       
        
	}

	return 0;
}