#include <bits/stdc++.h>
using namespace std;

const int N = 120;
vector<int> g[N];
bool used[N];
int d[N], f[N], timer = 0;

void dfs(int v)
{
	timer++;
	d[v] = timer;
	used[v] = true;
	for (int i = 0; i < g[v].size(); i++)
	{
		int to = g[v][i];
		if (!used[to])
			dfs(to);
	}
	f[v] = timer++;
}

int n;

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int u, k;
		cin >> u >> k;
		while (k--)
		{
			int v;
			cin >> v;
			g[u].push_back(v);
		}
	}
	for (int i = 1; i <= n; i++)
			if (!used[i])
				dfs(i);
	for (int i = 1; i <= n; i++)
		cout << i << ' ' << d[i]<<" " << f[i]<<endl;
}