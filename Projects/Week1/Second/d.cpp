#include<iostream>
#include<sstream>
#include<stack>

using namespace std;
stack<int> mystack;

int main()
{   
	string s;
	int a;
	int b, c;
	while(cin>>s)
	{
		if(s!="+" && s!="-" && s!="*")
		{
			stringstream ss;
			ss<<s;
            ss>>a;
            mystack.push(a);
		}
		else if(s=="+")
		{
			b = mystack.top();
			mystack.pop();
			c = mystack.top();
			mystack.pop();
			mystack.push(b+c);
		}
		else if(s=="-")
		{
			b = mystack.top();
			mystack.pop();
			c = mystack.top();
			mystack.pop();
			mystack.push(c-b);
		}
		else if(s=="*")
		{
			b = mystack.top();
			mystack.pop();
			c = mystack.top();
			mystack.pop();
			mystack.push(b*c);
		}
	}
	cout<<mystack.top();
	return 0;
}