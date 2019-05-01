#include <iostream>
#include <map>
using namespace  std;

int main()
{
     map<char,int> m1,m2;
     string s1,s2;
     
       cin>>s1>>s2;
      map<char,int> :: iterator it;
      string ss1 = "",ss2 = "";

      for(int i = 0;i<s1.size();i++)
      {
                m1[s1[i]] ++;
      }
      for(int i = 0;i<s2.size();i++)
      {
          m2[s2[i]]++;
      }
     for(it = m1.begin();it!=m1.end();it++)
     {
     	while((*it).second!=0)
     	{
     		ss1+=(*it).first;
     		(*it).second--;
     	}
     }
     for(it = m2.begin();it!=m2.end();it++)
     {
          while((*it).second!=0)
          {
               ss2+=(*it).first;
               (*it).second--;
          }
     }
      
     if(ss2 == ss1)
     {
          cout<<"YES";
     }
     else{
          cout<<"NO";
     }
	return 0;
}