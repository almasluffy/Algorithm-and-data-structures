#include <iostream>

using namespace std;

int main()
{
	string s;
	char a;
    string res = "";
	cin>>a>>s;

	for(int i= 0;i<s.size();i++)
	{
       if(s[i] != a)
       {
       	  res+=s[i];
       }
	}

     cout<<res;
	return 0;
}