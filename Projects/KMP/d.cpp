#include<iostream>
#include<vector>

using namespace std;

vector<int> p;
vector<int> index;
    
void prefix(string s)
{
    p.clear();
    p.push_back(0);

    for(int i = 1;i<s.size();i++)
    {
        int j = p[i - 1];
        while(j>0 && s[i] != s[j])
        {
            j = p[j-1];
        }
        if(s[i] == s[j])
        {
            j = j + 1;
        }
        else{
            j = 0;
        }
        p.push_back(j);
    }
}

int main(){


 
      int n;
      cin>>n;
       for(int i= 0;i<n;i++)
       {
       	    string s, text;
        	cin >> text >> s;
        	string str = s + "#" + text;
            prefix(str);
            // for(int j = 0;j<p.size();j++)
            // {
            // 	cout<<p[j]<< " ";
            // }
            // cout<<endl;
            int k = 0;
            for(int j = 0;j<p.size();j++)
            {
            	if(p[j] == s.size())
            	{
            		k++;
            		index.push_back(j + 1  - (2 * s.size()));
            	}
            }
            if(k == 0)
            {
            	cout<<"Not Found"<<endl;
            }
            else
            {
                cout<<k<<endl;
                for(int j= 0;j<index.size();j++)
                {
            	    cout<<index[j]<< " ";
                }
                    cout<<endl;
                    p.clear();
                  	index.clear();
            }
            
           
        } 
       

        
    

     
     
    
    return 0;
}