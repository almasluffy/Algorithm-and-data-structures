#include<iostream>
#include<vector>
#include<set>
#include <algorithm>
#include<map>
using namespace std;


int main(){

    string a,b,c;

    cin>>a>>b>>c;

    set<char> s1,s2,s3;
    set<char> :: iterator it1,it2,it3,it4;

    for(int i= 0;i<a.size();i++)
    {
          s1.insert(a[i]);
    }
    for(int i= 0;i<b.size();i++)
    {
       s2.insert(b[i]);
    }
    for(int i= 0;i<c.size();i++)
    {
            s3.insert(c[i]);
    }

    set<char> res;
 
    for(it1 = s1.begin();it1 !=s1.end();it1++)
    {
      if(s2.find(*it1) != s2.end() && s3.find(*it1) != s3.end())
      {
        res.insert(*it1);
      }
    }
    for(it2 = s2.begin();it2 !=s2.end();it2++)
    {
      if(s1.find(*it2) != s1.end() && s3.find(*it2)!=s3.end())
      {
        res.insert(*it2);
      }
    }
    for(it3 = s3.begin();it3 !=s3.end();it3++)
    {
      if(s2.find(*it3) != s2.end() && s1.find(*it3) != s1.end())
      {
        res.insert(*it3);
      }
    }

    for(it4 = res.begin();it4!=res.end();it4++)
    {
         cout<<*it4;
    }


    
    
    return 0;
}