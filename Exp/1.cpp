#include<iostream>
#include<cmath>
using namespace std;
int a[1000000];

int find(int l, int r, int x)
{
    int mid = (l+r)/2;
    if(l>r) return r;
    
    
    if(a[mid] >x){
        return find(l, mid - 1, x);
    }
    else if(a[mid] < x){
        return find(mid+1,r,x);
    }
    else  return mid;
        
    

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
            int pos = find(0, n-1,x);
             answer= a[pos];
              
              if(pos < 0 ) 
                {
                    answer = a[pos +1];
                }

              else if(abs(x-a[pos+1]) < abs(x - abs(a[pos])))
              {
                    answer = a[pos+1];
              }
     

            cout<<answer<<endl;
            k--;
     
        } 
    return 0;
}