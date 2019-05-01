#include<iostream>
#include<cmath>
using namespace std;
int a[2000000];

int findRight(int l, int r, int x)
{ 
    
    while(l<r)
    {
      int mid = r - (r-l)/2;
      
      if(a[mid] <= x)
      {
        l = mid;
      }
      else
      {
        r = mid  - 1;
      }


    }

     return (a[l] == x)?(l+1):0;
    
     
}
int findLeft(int l, int r, int x)
{

}
int main()
{
    int n,k,answer;
    cin>>n>>k;
    for(int i= 0;i<n;i++)
    {
        cin>>a[i];
    }
      
       
      while(k>0)
      {     int x;
            cin>>x;
            cout<<findRight(0,n-1,x)<<endl;
           
            k--;
     
        } 
    return 0;
}