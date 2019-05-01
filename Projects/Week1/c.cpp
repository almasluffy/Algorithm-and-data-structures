#include <iostream>
#include <deque>
using namespace std;

int main()
{
    int test,m, n;
    cin>>test;
   
    cin>>m>>n;
    deque<int> d;
    string s;
    int x;
    

    for(int i = 0;i<test;i++)
    {
    	cout<<"Case "<<i+1<<":"<<endl;
    	 int k = 0;
    	 d.clear();
    	for(int j = 0 ;j<n;j++)
    	{
           cin>>s;
           if(s=="pushLeft")
           {
                 cin>>x;
           	if(k<m)
           	{
           	 
           	 cout<<"Pushed in left: " << x<<endl;
             d.push_front(x);
             k++;
            }
            else
            {
            	cout<<"The queue is full"<<endl;
            }
           }
           else if(s=="pushRight")
           {
           	cin>>x;
           	if(k<m)
           	{
           	 
           	 cout<<"Pushed in right: "<<x<<endl;
             d.push_back(x);
             k++;
            }
            else
            {
            	cout<<"The queue is full"<<endl;
            }
           }
       
       
           else if(s=="popLeft")
           {
           	if(k==0)
           	{
           		cout<<"The queue is empty"<<endl;
           	}
           	else
           	{
           	   cout<<"Popped from left: "<<d.front()<<endl;
               d.pop_front();
               k--;
            }
           }
           else if(s=="popRight")
           {
           	   if(k==0)
           	{
           		cout<<"The queue is empty"<<endl;
           	}
           	else
           	{
           	   cout<<"Popped from right: " << d.back()<<endl;
               d.pop_back();
               k--;
            }
           }

    	
    }
}

	return 0;
}