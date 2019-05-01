#include<iostream>
#include<vector>
using namespace std;
int colors[101];
vector<int> g[101];
bool dfs(int v,int color)
{
      colors[v] = color;
      for(int i = 0;i<g[v].size();i++)
      {
      	  int to = g[v][i];
      	  if(colors[to] == 0)
      	  {
      	  	dfs(to,3- color);
      	  }
      	  if(colors[to] == color)
      	  {
      	  	return false;
      	  }

      }
      return true;
}
int main()
{
	for(int i = 0;i<101;i++)
	{
		colors[i] = 0;
	}
	int n;
	cin>>n;
	int x,y;
	for(int i = 0;i<n;i++)
	{
         cin>>x>>y;
         g[x].push_back(y);
         g[y].push_back(x);
    }
    if(dfs(0,1))
    {
    	cout<<"BIColor";
    }
    else{
    	cout<<"NOtOClor";
    }
	return 0;
}