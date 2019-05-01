#include <iostream>
#include <vector>
using namespace std;

int FRK(string s,string k,vector<long long> p_pow)
{
  
  vector<long long> h;
	
	 int res = 0;
   

   h.push_back(p_pow[0] * (s[0] - 'a' + 1));

   for(int i = 1;i<s.size();i++)
   {
   	  h.push_back(h[i-1]+ p_pow[i] *(s[i] - 'a' + 1) );
   }
   long long k_h = 0;
   for(int i = 0;i<k.size();i++)
   {
   	  k_h+=p_pow[i]*(k[i] - 'a' +1);
   }

   for(int i = 0;i<=s.size() - k.size();i++)
   {
   	  long long c = h[i+k.size() - 1];
   	  if(i>0) c-=h[i -1];
   	  if(c == k_h * p_pow[i]){
   	  	res++;
   	  	
   	  }
   }
   
 return res;
}



int main()
{
    vector<long long> p_pow;
    int p = 31;
    p_pow.push_back(1);
   for(int i = 1;i<20;i++)
   {
      p_pow.push_back(p * p_pow[i-1]);
   }
    
    while(1)
    {
         int n;
         cin>>n;
         if(n == 0) break;
         map<string,int> m;
         map<string,int> :: iterator it;
         int max = 0;
         string cntS;
         for(int i = 0;i<n;i++)
         {
             string t;
             cin>>t;
             m[t]++;
             
         }
         string s;
         cin>>s;

         for(int i = 0;i<)

         if(m.find(t)!=m.end())
         {
             if(max < m[])
         }
    }
	return 0;
}