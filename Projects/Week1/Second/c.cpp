#include <iostream>
#include <stack>
#include <map>
#include <vector>
using namespace std;
bool isS(char s)
{
	if(s=='(' || s=='[' || s=='{')
	{
		return true;
	}
	else{
		return false;
	}

}

int main()
{
	
	string myString;
    vector<string> v;
	int n;
	cin>>n;
	
	string myS;
    


	for(int i = 0;i<n;i++)
	{
		stack<char> s;
		cin>>myS;
	bool ok = true;
	
	
	for(int i =0;i<myS.size();i++)
	{

		if(isS(myS[i]))
		{
           s.push(myS[i]);
		}
		else if(s.empty()){
			ok = false;
			break;
		}
        else
        {
        	if(myS[i] == ')' && s.top() == '(')
        	{
               s.pop();
        	}
        	else if(myS[i] == ']' && s.top() == '[')
        	{
               s.pop();
        	}
        	else if(myS[i] == '}' && s.top() == '{')
        	{
               s.pop();
        	}
        	else
        	{
               ok = false;
               break;
            }
        
     }
	
}
     if(ok && s.empty())
     {
     	cout<<"YES"<<endl;
     
     }
	else{
		cout<<"NO"<<endl;

	}
}


	return 0;
}