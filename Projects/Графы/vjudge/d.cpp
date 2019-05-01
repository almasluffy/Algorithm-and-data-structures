#include <bits/stdc++.h>
using namespace std;

const int N = 10001;
vector<int> g[N];
bool used[N];
map<int, int> cities;

void dfs(int v)
{
	used[v] = true;
	cities[v]++;
	for (int i = 0; i < g[v].size(); i++)
	{
		int to = g[v][i];
		if (!used[to])
			dfs(to); 
	}
}

int main()
{
	int T;
	cin >> T;
	for (int i = 1; i <= T; i++)
	{
		for (int j = 0; j < N; j++) 
		{
			used[i] = false;
			g[j].clear();
		}
		cities.clear();
		int k, n, m,x,y,u;
		cin >> k >> n >> m;
		vector<int> p;
		for (int j = 0; j < k; j++)
		{
			cin>>u;
			p.push_back(u);
		}
			
		for(int h = 0;h<m;h++)
		{
			cin >> x >> y;
			g[x].push_back(y);
		}
			
		for (int j = 0; j < k; j++)
		{
			for (int t = 0; t < N; t++)
				used[t] = false;
			dfs(p[j]);
		}
		int count = 0;
		map<int,int> :: iterator it;
		for(it = cities.begin();it!=cities.end();it++)
		{
			if(it->second == k)
			{
			   count++;
			}
		}

		cout << "Case " << i << ": " << count << '\n';
	}
}