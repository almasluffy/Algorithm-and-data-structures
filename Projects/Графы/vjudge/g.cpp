#include <iostream>
#include <vector>
#include <queue>
using namespace std;
bool used[101];
vector<int> g[101];
int dis[101];
void bfs(int v)
{
	used[v] = true;
	queue<int> q;
	q.push(v);
	dis[v] = 0;
	while(!q.empty())
	{
		int a = q.front();
		q.pop();
		for(int i = 0;i<g[a].size();i++)
		{
			int to = g[a][i];
			if(!used[to])
			{
				used[to] = true;
				q.push(to);
				dis[to] = dis[a] + 1;
			}
		}

	}
}

int main()
{
    for(int i = 0;i<101;i++)
    {
    	dis[i] = -1;
    	used[i] = false;
    }
    int n;
    cin>>n;
    for(int i = 0;i<n;i++)
    { 
    	int m,k,x;
    	cin>>m>>k;
    	for(int j = 0;j<k;j++)
    	{
    		cin>>x;
            g[m].push_back(x);
    	}

    }
    bfs(1);
    for(int i = 1;i<=n;i++)
    {
    	cout<<i<<" " << dis[i]<<endl;
    }
	return 0;
}