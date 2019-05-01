#include<bits/stdc++.h>
using namespace std;

int main()
{
   map<int, vector<string> > m ;
   map<int, vector<string> >:: iterator it;
   string s;
   int n;
   while(cin>>n>>s)
   {
       m[n].push_back(s);
   }
   for(it=m.begin();it!=m.end();it++)
   {
   	  for(int i = 0;i<(*it).second.size();i++)
   	  {
         cout<<(*it).first<< " " << (*it).second[i]<<endl;
   	  }
   }


	return 0;
}