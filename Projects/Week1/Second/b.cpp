#include <iostream> 
#include <queue>

using namespace std;

int main()
{
       queue<int> q1,q2;
       int x;
       int count = 0;
       for(int i = 0;i<5;i++)
       {
          cin>>x;
          q1.push(x);
       }
       for(int i = 0;i<5;i++)
       {
       	  cin>>x;
          q2.push(x);
       }

		bool botva = false;
       while(!q1.empty() && !q2.empty())
       {
       	/*int c1 = q1.front();
       	q1.pop();
       	int c2 = q2.front();
       	q2.pop();*/
       	if(count>=1000000){
       		botva = 1;
       		break;
       	}
       	else if(q2.front() == 0 && q1.front() == 9)
       	{
       		int y = q2.front();
            q2.pop();
            q2.push(q1.front());
            q1.pop();
            q2.push(y);
       	}
       	else if(q1.front() == 0 && q2.front() == 9)
       	{
       		int y = q1.front();
            q1.pop();
            q1.push(y);
            q1.push(q2.front());
            q2.pop();
       	}
       	else if(q1.front()<q2.front())
       	{
       		int y = q2.front();
            q2.pop();
            q2.push(q1.front());
            q1.pop();
            q2.push(y);
       	}
       	else if(q1.front()>q2.front()) 
       	{
            int y = q1.front();
            q1.pop();
            q1.push(y);
            q1.push(q2.front());
            q2.pop();
       	}
        

       	count ++;

       	

       }
       if(botva){
       	cout << "botva" << endl;
       }
       else if(q2.size() == 0)
       	{
       		cout<<"first " << count;
       	}
       	else if(q1.size() == 0)
       	{
       		cout<<"second " << count;
       	}
       
	
	return 0;
}