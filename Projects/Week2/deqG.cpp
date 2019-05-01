#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <deque>
using namespace std;
struct  Dque
{
  vector<int> front, back, local;

  
};
int main()
{
   Dque mydeq;
   string s;
   int x;
   while(true)
   {
       cin>>s;
       if(s=="push_front")
       {
         cin>>x;
         
         cout<<"ok"<<endl;
       }
       if(s=="push_back")
       {
         cin>>x;
         
         cout<<"ok"<<endl;
       }
       if(s=="pop_front")
       {
   
       }
       if(s=="pop_back")
       {
         
         
       }
       if(s=="front")
       {
         
       }
       if(s=="back")
       {
         
        
         
       }
       if(s=="size")
       {
         
       }
       if(s=="clear")
       {
      
       }
       if(s=="exit")
       {
         cout<<"bye"<<endl;
         return 0;
       }
   }
 
   
 
      return 0;
}