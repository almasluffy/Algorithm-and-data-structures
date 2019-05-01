#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
#define pb push_back
#define mp make_pair
#define F first
#define S second

const int N = 600;
int par[N];

double dist(pii a, pii b)
{
	return sqrt((a.F - b.F) * (a.F - b.F) + (a.S - b.S) * (a.S - b.S));
}

int get_set(int v)
{
	if (v == par[v]) 
		return v;
	return par[v] = get_set(par[v]);
}

void merge(int a, int b)
{
	a = get_set(a);
	b = get_set(b);
	if (a != b)
		par[b] = a;
}

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		vector<pair<double, pii> > g;
		int m, n;
		cin >> m >> n;
		pii p[n];
		for (int i = 0; i < n; i++)
		{
			par[i] = i;
			int x, y;
			cin >> x >> y;
			p[i] = mp(x, y);
		}
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				g.pb(mp(dist(p[i], p[j]), mp(i, j)));
		sort(g.begin(), g.end());
		vector<double> dists;
		for (int i = 0; i < g.size(); i++)
		{
			int a = g[i].S.F, b = g[i].S.S;
			if (get_set(a) != get_set(b))
			{
				n--;
				merge(a, b);
                dists.push_back(g[i].first);
			}
			
		}
		cout<< fixed<< setprecision(2) << dists[m - 1] << endl;
		//cout<<printf("%.2f\n",dists[m - 1])<<endl;
		dists.clear();
	}
}