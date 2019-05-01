#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<pair<int, pair<int,int> > >g;
int boss[101];
int getMyBigBoss(int v)
{
	if(boss[v] == v) return v;
	return boss[v] = getMyBigBoss(boss[v]);
}
void doBoss(int a,int b)
{
	int x = getMyBigBoss(a);
	int y = getMyBigBoss(b);
	if(x != y)
	{
		boss[y] = x;
	}
}
int main()
{
	int n;
while(cin>>n) { 
	g.clear();
	for(int i = 0;i<n;i++)
	{
		boss[i] = i;
		for(int j = 0;j<n;j++)
		{
			int x;
			cin>>x;
			if(x!=0)
			{
				g.push_back(make_pair(x,make_pair(i,j)));
			}
		}

	}
     int minDistance = 0;
     sort(g.begin(), g.end());
	for(int i = 0;i<g.size();i++)
	{
	        int a = g[i].second.first;
			int b = g[i].second.second;
			if(a != b && getMyBigBoss(a) != getMyBigBoss(b))
			{
                minDistance +=g[i].first;
				doBoss(a,b);
			}
	}
	cout<<minDistance<<endl;
}
	return 0;
}