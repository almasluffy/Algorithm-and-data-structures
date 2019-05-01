#include <iostream>
#include <map>
#include <set>
#include <sstream>
using namespace std;



int main()
{
    int n;
    cin>>n;
    map<string,int> m;
    set<string> s;
    for(int i = 0;i<n;i++)
    {
    	string t;
    	cin>>t;

    	if(s.find(t) != s.end())
    	{

              stringstream ss;
              ss<<m[t];
              string y = t + ss.str();
              cout<<y<<endl;
              s.insert(y);
              m[y]++;
    	}
    	else{
    		cout<<"OK"<<endl;
             s.insert(t);
    	}
    	
        m[t]++;

    }
	return 0;
}