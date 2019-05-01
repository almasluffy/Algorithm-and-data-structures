#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <deque>
using namespace std;
int main()
{
    deque<int> dq;
   string s;
   int x;
   while(true)
   {
       cin>>s;
       if(s=="push_front")
       {
         cin>>x;
         dq.push_front(x);
         cout<<"ok"<<endl;
       }
       if(s=="push_back")
       {
         cin>>x;
         dq.push_back(x);
         cout<<"ok"<<endl;
       }
       if(s=="pop_front")
       {
         cout<<dq[0]<<endl;
         dq.erase(dq.begin());
   
       }
       if(s=="pop_back")
       {
         
         cout<<dq[dq.size()-1]<<endl;
         dq.erase(dq.end()-1);
       }
       if(s=="front")
       {
         cout<<dq[0]<<endl;
       
       }
       if(s=="back")
       {
         
         cout<<dq[dq.size()-1]<<endl;
         
       }
       if(s=="size")
       {
         cout<<dq.size()<<endl;
       }
       if(s=="clear")
       {
           dq.clear();
           cout<<"ok"<<endl;
       }
       if(s=="exit")
       {
         cout<<"bye"<<endl;
         return 0;
       }
   }
 
   
 
      return 0;
}