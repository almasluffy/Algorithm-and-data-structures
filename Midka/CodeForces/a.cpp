#include<bits/stdc++.h>

using namespace std;

const int N = 300;

string s;
int priority[N];

stack<char> op;
stack<int> num;

void do_operations() {
 char cur_op = op.top();op.pop();
 int x = num.top();
 num.pop();
 int y = num.top();
 num.pop();
 int res = 0 ;
 switch(cur_op) {
  case '+' : res = x + y;break;
  case '-' : res = y - x;break;
  case '*' : res = x * y;break; 
 }
 //cout << x << " " << y << " " << res << "\n";
 num.push(res);
}
          
int main() {

 priority['('] = 0;
 priority['+'] = 1;
 priority['-'] = 1;
 priority['*'] = 2;

 cin >> s;

 for(int i = 0;i < s.size();i ++) {
  char ch = s[i];
  if(ch == '+' || ch == '-' || ch == '*') {
   while(!op.empty() && priority[op.top()] >= priority[ch]) {
    do_operations();
   }
   op.push(ch);
  } else if(ch == '(') {
   op.push(ch);
  } else if(ch == ')') {
   while(op.top() != '(') { //
    do_operations();
   }
   op.pop();
  } else {
   int x = ch - '0';
   num.push(x);
  }
 }
 while(op.size()) {
  do_operations();
 }
 cout << num.top();
 return 0;
}