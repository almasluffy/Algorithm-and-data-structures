#include<iostream>
#include<vector>
#include<set>
#include <algorithm>
#include<map>
using namespace std;


int main(){

    string s;
    int x;
    map<string,int> m;
    while(cin>>s>>x)
    {
         if(m[s] < x)
         {
            m[s] = x;
         }
    }

    map<string,int> :: iterator it;

    for(it = m.begin();it!=m.end();it++)
    {
      cout<<it->first<< " " << it->second<<endl;
    }
    
    return 0;
}