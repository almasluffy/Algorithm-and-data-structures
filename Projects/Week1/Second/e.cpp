#include<bits/stdc++.h>
using namespace std;

int main()
{
   deque<int> d1,d2;
   int n,x, k = 0;
   cin>>n;
   char c;
   for(int i = 0;i<n;i++)
   {
      
       cin>>c;
       
       if(c=='-')
       {  
         cout<<d1.front()<<endl;
         d1.pop_front();
         d1.push_back(d2.front());
         d2.pop_front();

       } 
       else if(c=='+')
       {
         cin>>x;
           if(k==0)
           {
            d1.push_back(x);
           }
           else
           {
            /*if(d1.size()< d2.size())
            {
               d1.push_back(d2.front());
               d2.pop_front();
               d2.push_back(x);
            }*/
            if(d1.size() > d2.size())
            {

               d2.push_back(x);
            }
            else if(d1.size() == d2.size())
            {

               d1.push_back(d2.front());
               d2.pop_front();
               d2.push_back(x);
            }
           }
           
       }
       else if(c=='*')
       {
         cin>>x;
         if(k==0)
         {
            d1.push_back(x);
         }
         else{
         /*if(d1.size()< d2.size())
            {
               d1.push_back(d2.front());
               d2.pop_front();
               d2.push_front(x);
            }*/
            if(d1.size() > d2.size())
            {
               d2.push_front(x);
            }
            else if(d1.size() == d2.size())
            {
               d1.push_back(x);
            }
       }
    }
       k++;
   }
     
     return 0;
}