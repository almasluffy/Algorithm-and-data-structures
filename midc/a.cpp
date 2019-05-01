#include<iostream>
#include<vector>
#include<set>
#include <algorithm>
#include<map>
using namespace std;


int main(){

    string s;
    string t;

    cin>>s;
    map<char, int> m1,m2;
    map<char, int> :: iterator it;
    for(int i = 0;i<s.size();i++)
    {
       m1[s[i]]++;
    }
    
    while(cin>>t)
    {
         for(int i = 0;i<t.size();i++)
         
              m2[t[i]]++;
         }
         if(m1 != m2)
         {
          for(it=m2.begin();it!=m2.end();it++)
          {
            cout<<it->first;
          }
             cout<<endl;
         }

    
    
    return 0;
}