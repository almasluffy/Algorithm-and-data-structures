#include <iostream>
#include <vector>
using namespace std;
int n,m,x,y;
int colors[201];
vector<int> g[201];
bool dfs(int v, int color)
{
     colors[v] = color;
     for(int i = 0;i<g[v].size();i++)
     {
     	if(colors[g[v][i]] == 0)
     	{
     		dfs(g[v][i],3 - color);
     	}
     	if(colors[g[v][i]] == color)
     	{
     		return false;
     	}
     }
           return true;
}
int main(){
	while(1)
	{
		for(int i = 0;i<201;i++)
		{
			colors[i] = 0;
			g[i].clear();
		}
		cin>>n;
		if(n == 0) break;
		cin>>m;
		for(int i = 0;i<m;i++)
		{
		
			cin>>x>>y;
            g[y].push_back(x);
            g[x].push_back(y);
		}
          if(dfs(0,1))
          {
          	cout<<"BICOLORABLE."<<endl;
          }
          else{
          	cout<<"NOT BICOLORABLE.\n";
          }

	}

	return 0;
}