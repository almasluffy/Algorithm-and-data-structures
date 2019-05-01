#include <iostream> 
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
       vector<int> v1,v2;
       int x;
       int count = 0;
       for(int i = 0;i<5;i++)
       {
          cin>>x;
          v1.push_back(x);
       }
       for(int i = 0;i<5;i++)
       {
       	  cin>>x;
          v2.push_back(x);
       }


       while(true)
       {
       	if(v1[0]<v2[0] && v2[0] != 0 && v1[0] != 9)
       	{
       	int y = v2[0];
            v2.erase(v2.begin());
            v2.push_back(v1[0]);
            v1.erase(v1.begin());
            v2.push_back(y);
       	}
       	if(v1[0]>v2[0] && v2[0] != 0 && v1[0] != 9) 
       	{
           

            int y = v1[0];
            v1.erase(v1.begin());
            v1.push_back(y);
            v1.push_back(v2[0]);
            v2.erase(v2.begin());
       	}
        if(v2[0] == 0 && v1[0] == 9)
       	{
       		int y = v2[0];
            v2.erase(v2.begin());
            v2.push_back(v1[0]);
            v1.erase(v1.begin());
            v2.push_back(y);
       	}
       	if(v1[0] == 0 && v2[0] == 9)
       	{
       		  int y = v1[0];
            v1.erase(v1.begin());
            v1.push_back(y);
            v1.push_back(v2[0]);
            v2.erase(v2.begin());
       	}

       	count ++;

       	if(v2.size() == 0)
       	{
       		cout<<"first " << count;
       		break;
       	}
       	if(v1.size() == 0)
       	{
       		cout<<"second " << count;
       		break;
       	}

       }
       
	
	return 0;
}