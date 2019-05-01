#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
int t;
struct  Stack
{
  int a[100000];
   
  void push(int x)
  {
    a[t] = x;
    t++;
  }

  int pop()
  {
    
      t--;
      return a[t];
    
     

    
  }


  int back()
  {
    return a[t-1];
  }

  int size()
  {
    return t;
  }

  void clear()
  {
      t=0;
  }
  
};

int main()
{
       string s;
       int x;
       Stack my_stack;
      

       while(true)
       {
       	cin>>s;
       	if(s=="push")
       	{
       		cin>>x;
       	  my_stack.push(x);
       		cout<<"ok"<<endl;
       	}

       	if(s=="pop")
       	{
       		if(t!=0)
          {
       			cout<<my_stack.pop()<<endl;
          }
          	else{
              cout<<"error"<<endl;
            }
       	}

       	if(s=="back")
       	{
       		if(t!=0)
          {
       			cout<<my_stack.back()<<endl;
          }
          else
          {
            cout<<"error"<<endl;
          }
       		
       	}

       	if(s=="size")
       	{
       		cout<<my_stack.size()<<endl;
       	}

       	if(s=="clear")
       	{
       		my_stack.clear();
       		cout<<"ok"<<endl;
       	}

       	if(s=="exit")
       	{
       		cout<<"bye";
       		return 0;
       	}
       }

      return 0;
}