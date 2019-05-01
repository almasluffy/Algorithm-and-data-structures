#include <iostream>
#include <map>
#include <cmath>
using namespace  std;

int main()
{
     map<int,int> m1,m2;
     int n;
     cin>>n;
     int x;
     for(int i = 1;i<=n;i++)
     {
          cin>>x;
          m1[i] = x;
     }
     int k,q;
     cin>>k;
     for(int i=1;i<=k;i++)
     {
          cin>>q;
          m2[q]++;
     }

     for(int i = 1;i<=n;i++)
     {
          if(m2[i] <= m1[i])
          {
               cout<<"no"<<endl;
          }
          else{
               cout<<"yes"<<endl;
          }
     }
	return 0;
}