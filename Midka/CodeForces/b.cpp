#include<bits/stdc++.h>

using namespace std; 

int n,x,direction;
string s;
deque<int> q;

void show_back() {
 if(!q.size()) {
  cout << ";(\n";
  return;
 }
 int res = 0;
 if(direction) { res = q.front(); q.pop_front(); }
 else { res = q.back(); q.pop_back(); }

 cout << res << "\n";
}

void show_front() {
 if(!q.size()) {
  cout << ";(\n";
  return;
 }
 int res = 0;
 if(direction) { res = q.back(); q.pop_back(); }
 else {res =  q.front(); q.pop_front(); }
 cout << res << "\n"; 
}

int main() {
 cin >> n;
 direction = 0;
 for(int i = 1;i <= n;i ++) {
  cin >> s;
  if(s == "push_back") {
   cin >> x;
   if(!direction)
    q.push_back(x);
   else
    q.push_front(x);
  }
  if(s == "push_front") {
   cin >> x;
   if(!direction)
    q.push_front(x);
   else
    q.push_back(x);
  }
  if(s == "front") {
   show_front();
  }
  if(s == "back") {
   show_back();
  }
  if(s == "reverse") {
   if(direction == 0) direction = 1;
   else direction = 0;
  }
 }
 return 0;
}