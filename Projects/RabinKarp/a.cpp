#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <sstream>

using namespace std;


#define ull unsigned long long
   int findK(string s,int k)
{
	 vector<long long> p_pow;
vector<long long> h;
  set<long long> st;
	 int res = 0;
   int p = 31;
   p_pow.push_back(1);
   for(int i = 1;i<s.size();i++)
   {
   	  p_pow.push_back(p * p_pow[i-1]);
   }

   h.push_back(p_pow[0] * (s[0] - 'a' + 1));

   for(int i = 1;i<s.size();i++)
   {
   	  h.push_back(h[i-1]+ p_pow[i] *(s[i] - 'a' + 1) );
   }
   //long long k_h = 0;
   // for(int i = 0;i<k.size();i++)
   // {
   // 	  k_h+=p_pow[i]*(k[i] - 'a' +1);
   // }

   for(int i = 0;i<=s.size()  - k;i++)
   {
   	  long long c = h[i + k - 1];
   	  if(i>0) c-=h[i -1];
   	 st.insert(c * p_pow[s.size() - k - i]);
   }
       
       // string myS;
  //      for(int i = 0;i<vau.size();i++)
  //  {
  //        vau[i] = vau[i] / p_pow[i];
  //  }
   
  
  
   
 return  st.size();
}



int main()
{
     int t;
     cin>>t;
     
     for(int i = 0;i<t;i++)
     {
         int n,k;
         cin>>n>>k;
         string s = "";
         for(int j = 0;j<n;j++)
         {
          char a;
          cin>>a;
          s+=a;
         }

         cout<< findK(s,k)<<endl;
         
                  
     }

	return 0;
}