#include <iostream>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
using namespace std;
map<string,int> m;
bool find(string t)
{
  
  bool res = false;
  map<string,int> :: iterator it;
  
  
  
  for(it = m.begin();it!=m.end();it++)
  {
     string k = t;
     string s = it->first;
     vector<long long> p_pow;
     vector<long long> h;
   
   // int p = 31;
   // p_pow.push_back(1);
   // for(int i = 1;i<s.size();i++)
   // {
   //    p_pow.push_back(p * p_pow[i-1]);
   // }

   h.push_back(pow(31,0) * (s[0] - 'a' + 1));

   for(int i = 1;i<s.size();i++)
   {
      h.push_back(h[i-1]+ pow(31,i) *(s[i] - 'a' + 1) );
   }
   long long k_h = 0;
   for(int i = 0;i<k.size();i++)
   {
      k_h+=pow(31,i)*(k[i] - 'a' +1);
   }

         
     if(k_h == h[s.size() - 1])
     {
                res = true;
                break;
     }

    
  
  }
  return res;
  
}



int main()
{
  
    int n;
    cin>>n;
    string t;

  
    for(int i = 0;i<n;i++)
    {
         cin>>t;
         
         if(find(t))
        {
          cout<<t<<m[t]<<endl;
        }
         else
        {
          cout<<"OK"<<endl;
        }
         
         m[t]++;

    }
   
    
    
  return 0;
}