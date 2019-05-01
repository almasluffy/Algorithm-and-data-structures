#include<iostream>
#include<vector>
#include<set>
using namespace std;


int main(){

   string a,b,c;
   cin>>a>>b>>c;
   set<char> s;
   for(int i = 0;i<a.size();i++)
   {
          s.insert(a[i]);
   }
   for(int i = 0;i<b.size();i++)
   {
   	        s.insert(b[i]);
   }
   for(int i = 0;i<c.size();i++)
   {
   	       s.insert(c[i]);
   }

   for(char i = 'a';i<='z';i++)
   {
   	if(s.find(i) == s.end())
   	{
   		cout<<i;
   	}
   }
    
    
    return 0;
}