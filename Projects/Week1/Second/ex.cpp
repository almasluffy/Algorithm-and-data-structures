#include<bits/stdc++.h>
using namespace std;

int main()
{
   deque<int> d1,d2;
     d2.push_front(55);
     d1.push_front(d2.front());
     cout<<d1.front();
     
     return 0;
}