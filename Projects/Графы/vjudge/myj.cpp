#include <bits/stdc++.h>
using namespace std;

const int N = 600;
int boss[N];

double dist(pair<int,int>  a, pair<int,int>  b)
{
	return sqrt((a.first - b.first) * (a.first - b.first) + (a.second - b.second) * (a.second - b.second));
}

int getMyBiggBoss(int v)
{
	if (v == boss[v]) 
		return v;
	return boss[v] = getMyBiggBoss(boss[v]);
}

void merge(int a, int b)
{
	a = getMyBiggBoss(a);
	b = getMyBiggBoss(b);
	if (a != b)
		boss[b] = a;
}

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		vector<pair<double, pair<int,int> > >g;
		int k, n;
		cin >> k >> n;
		pair<int,int> p[n];
		for (int i = 0; i < n; i++)
		{
			boss[i] = i;
			int x, y;
			cin >> x >> y;
			p[i] = make_pair(x, y);
		}
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				g.push_back(make_pair(dist(p[i], p[j]), make_pair(i, j)));
		sort(g.begin(), g.end());
		for (int i = 0; i < g.size(); i++)
		{
			int a = g[i].second.first, b = g[i].second.second;
			if (getMyBiggBoss(a) != getMyBiggBoss(b))
			{
				n--;
				merge(a, b);
			}
			if (n == k)
			{
				printf("%.2f\n", g[i].first);
				break;
			}
		}
	}
}