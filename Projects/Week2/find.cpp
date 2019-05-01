#include <iostream>
#include <algorithm>

using namespace std;

int main(){

  int n;
  
  cin>>n;
  int a[n];
  int x,head = 0, tail = n-1;
  
  
  bool ok = false;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cin>>x;
  while(head<=tail)
  {
    int mid = (head + tail)/2;
    if(a[mid]<x)
    {
        head = mid + 1;
    }
    else if(a[mid]>x)
    {
        tail = mid - 1;
    }

    else{
          ok = true;
          break;
    }
  }
        if(ok)
        {
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }

    return 0;
}