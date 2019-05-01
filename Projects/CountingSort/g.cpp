#include <iostream>
#include <map>

using namespace std;


int main()
{
    int n;
    char c;
    cin>>n;
    map<char,int> m;
    map<char,int> :: iterator it;

    
    int max = 0;
    char Smx;
    for(int i = 0;i<n;i++){
        cin>>c;
        m[c]++;
    }
    string f1 = "";
    string f2 = "";
    for(it= m.begin();it!=m.end();it++)
    {
          if(it->second%2==0)
          {
            while(it->second%2==0 && it->second !=0)
            {
             f1+=it->first;
             f2+=it->first;
             it->second = it->second - 2;
            }
          }
          if(it->second%2==1 && it->second !=0)
          {
            if(it->second > max)
            {
                max = it->second;
                Smx = it->first;
            }
            while(it->second !=1)
            {
             f1+=it->first;
             f2+=it->first;
             it->second = it->second - 2;
            }
          }
          
            
              
          
    }

    for(int i = 0;i<f1.size();i++)
    {
        cout<<f1[i];
    }
     if(max != 0)
        {
            cout<<Smx;
        }

    for(int i = f2.size() -1 ;i>=0;i--)
    {
        cout<<f2[i];
    }


	return 0;
}