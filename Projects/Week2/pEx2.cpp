#include <iostream> 
#include <queue>

using namespace std;

int main()
{
   queue<int> q1,q2;
   int a,b;
   cin>>a>>b;
   q1.push(a);
   q2.push(b);

   if(q1.front() > q2.front())
   {
   	   cout<<q1.front(); 
   } 
   else{
   	cout<<q2.front();
   }
	
	return 0;
}