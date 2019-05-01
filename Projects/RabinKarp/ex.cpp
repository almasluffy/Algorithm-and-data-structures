#include <iostream>
#include <vector>
using namespace std;

vector<long long> p_pow;
vector<long long> h;

bool findK(string s,string k)
{
	if(s.size() < k.size())
	{
		return false;
	}
	bool res = false;
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
   long long k_h = 0;
   for(int i = 0;i<k.size();i++)
   {
   	  k_h+=p_pow[i]*(k[i] - 'a' +1);
   }

   for(int i = 0;i<s.size();i++)
   {
   	  long long c = h[i+k.size() - 1];
   	  if(i>0) c-=h[i -1];
   	  if(c == k_h * p_pow[i]){
   	  	res = true;
   	  	break;
   	  }
   }
   
 return res;
}



int main()
{
    string s,t;
    cin>>s>>t;

    
    if(findK(s,t))
    {
    	cout<<"found!!!";
    }
    else
    {
    	cout<<"not found!!!";
    }
	return 0;
}