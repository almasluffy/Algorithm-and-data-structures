#include <iostream>
#include <map>
using namespace std;

int main()
{
	int l,n,m;
    map<int,int> mp;
    map<int,int> :: iterator it;
    cin>>l>>n>>m;
    int a,b;
    for(int i = 0;i<n;i++)
    {
    	cin>>a>>b;
    	for(int j = a;j<=b;j++)
    	{
    		mp[j]++;
    	}
    }
    int x;
    for(int i = 0;i<m;i++)
    {
    	cin>>x;
    	cout<<mp[x]<<endl;
    }
 return 0;
}