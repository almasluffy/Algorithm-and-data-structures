#include <iostream>
#include <map>
using namespace  std;

int main()
{
     map<string,int> m;
     int n;
     cin>>n;
     int  x;
     string s;
     
     for(int i = 0;i<n;i++)
     {
     	cin>>x;

     }

     while(cin>>s>>x)
     {
         m[s] = x;
     }
      map<int,int> :: iterator it;
     for(it = m.begin();it!=m.end();it++)
     {
     	while((*it).second!=0)
     	{
     		cout<<(*it).first<<" ";
     		(*it).second--;
     	}
     }
	return 0;
}