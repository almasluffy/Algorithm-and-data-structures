#include <iostream>
#include <map>
#include <cmath>
using namespace  std;

bool f(map<int,int> m, int x)
{
     map<int,int> :: iterator it;

     for(it=m.begin();it!=m.end();it++)
     {
          if(abs((*it).first - x)<107)
          {
               return false;
          }
     }
     return true;
}
int main()
{
     map<string,int> m;
     int n;
     cin>>n;
     int  x;

     
     for(int i = 0;i<n;i++)
     {
     	cin>>x;
          if(f(m,x))
          {
               m[x] ++;
          }

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