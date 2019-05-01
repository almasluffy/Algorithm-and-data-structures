
#include <iostream>
#include <cmath>
using namespace std;

int BinaryS(long long int *a, int n, int x)
{
  int l = 0;
  int r = n - 1;
  while(l<r)
  {
    int mid = (l+r)/2;
    

    if(a[mid] < x)
    {
      l = mid + 1;
    }
    else {

      r = mid;
    
    }


  }
  if(l==0)
     {
      return a[l];
     }
  if(a[l] - x >= x - a[l-1])
  {
    return a[l-1];
  }
  return a[l];
}

int main()
{
  int n,k;
  cin>>n>>k;
  long long int a[n], b[k];
    for(int i= 0;i<n;i++)
  {
    cin>>a[i];
  }

  for(int i= 0;i<n;i++)
  {
     cin>>b[i];
  }
  

  for(int i= 0;i<k;i++)
  {
    
      cout<<BinaryS(a,k,b[i])<<endl;
  }
 
 return 0;
}
