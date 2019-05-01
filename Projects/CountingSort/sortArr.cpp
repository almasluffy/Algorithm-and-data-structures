#include <iostream>

using namespace std;

int main()
{
	string s;
	cin>>s;
    char a[26];
	for(char i = 'a';i<='z';i++)
	{
		a[i] = 0;
	}
	for(int i = 0;i<s.size();i++)
	{
		a[s[i]]++;
	}

	for(char i = 'a';i<='z';i++)
	{
		while(a[i] !=0)
		{
            cout<<i;
			a[i]--;
		}
			
		
	}
	return 0;
}