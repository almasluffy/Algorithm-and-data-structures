#include<iostream>
#include<stack>
 
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
    stack<char> s;
    string myS;
    bool ok = true;
    cin >> myS;
    if(!isS(myS[0])){
        cout << "no";
        return 0;
    }
    for(int i =0;i<myS.size();i++)
 
        if(isS(myS[i]))
        {
           s.push(myS[i]);
        }
        else if(s.empty() && (myS[i]==')' || myS[i]=='}' || myS[i]==']')){
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
            }
       
     }
   
     if(ok && s.empty())
     {
        cout<<"yes";
     }
    else{
        cout<<"no";
    }
    return 0;
}
