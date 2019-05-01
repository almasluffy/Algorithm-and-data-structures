#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;
int p = 31;
vector <long long> p_pow(1000001);
vector<long long> h;
vector<long long> mx;
vector<string> strname;
void getPower(){
    p_pow[0] = 1;
  for(int i = 1;i<p_pow.size();++i){
    p_pow[i] = p_pow[i-1] * p;
  } 
}
void FRK(string s,string k)
{
  
   h.clear();
	
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
   
       mx.push_back(res);
}
   


int main()
{
  
   getPower();
    int n;
    while(cin>>n)
    { 
         string bg = "";
         getline(cin,bg);
           if(n == 0)
         { 
             break;
         }
         vector<string> v;
         int max = 0;
         string cntS;
         for(int i = 0;i<n;i++)
         {
             string t;
             getline(cin,t);
             v.push_back(t);
             strname.push_back(t);
         }
         string s;
         getline(cin,s);
      
         for(int i = 0;i<v.size();i++)
         {
               FRK(s,v[i]);
         }
                
         for(int i = 0;i < mx.size();i++)
         {
             if(max < mx[i])
             {
              max = mx[i];
             }

         }
          cout<<max<<endl;
         for(int i = 0;i<mx.size();i++)
         {
               if(mx[i] == max)
               {
                cout<<strname[i]<<endl;
               }
         }
         strname.clear();
         mx.clear();
        
    }
	return 0;
}