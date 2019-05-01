#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int boss[101];
int getMyBigBoss(int v)
{
	if (boss[v] == v) return v;
	return boss[v] = getMyBigBoss(boss[v]);
}
void DoBoss(int a,int b)
{
	int x = getMyBigBoss(a);
	int y = getMyBigBoss(b);
	if(x!=y)
	{
		boss[y] = x;
	}

}
void doAllBossEquals()
{
	for(int i = 0;i<101;i++)
	{
		boss[i] = i;
	}
}
int main()
{
	int test;
	cin>>test;

	for(int h = 0;h<test;h++)
	{
		int v,e;
		cin>>v>>e;
        vector<pair<int,pair<int,int> > > g;
		for(int i =0;i<e;i++)
		{
             int x,y,z;
             cin>>x>>y>>z;
             g.push_back(make_pair(z,make_pair(x,y)));
             g.push_back(make_pair(z,make_pair(y,x)));
             
		}
		int ans = 0;
		
		sort(g.begin(), g.end());
		vector<pair<int,int> > used;
		doAllBossEquals();
		for(int i = 0;i<g.size();i++)
		{
			int a = g[i].second.first;
			int b = g[i].second.second;
			if(getMyBigBoss(a) != getMyBigBoss(b))
			{
                  ans+=g[i].first;
                  DoBoss(a,b);
                  pair<int,int>  p = make_pair(min(a, b), max(a, b));
                  used.push_back(p);
            }
		}
         
		bool unq = true;
		doAllBossEquals();
		for(int i = 0;i<used.size();i++)
		{
			pair<int,int> myUsed = used[i];
			int ans2 = 0;
			int cnt = 0;
			doAllBossEquals();
           for(int j = 0;j<g.size();j++)
			{
				int a = g[j].second.first;
				int b = g[j].second.second;
				pair<int,int>  p = make_pair(min(a, b), max(a, b));
				if(p == myUsed)
				{
					continue;
				}
				else if(getMyBigBoss(a) != getMyBigBoss(b))
				{
                     
                     ans2+=g[j].first;
                     cnt++;
                     DoBoss(a,b);
                }
              
 			}
 			if(ans2 == ans && cnt == used.size())
 			{
 				unq = false;
 				break;
 			}

		}
		if(unq == true)
		{
			cout<<ans<<endl;
		}
		else{
			cout<<"Not Unique!"<<endl;
		}
	}
	
	return 0;
}