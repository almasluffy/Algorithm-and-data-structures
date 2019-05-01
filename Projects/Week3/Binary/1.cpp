#include <iostream> 

using namespace std;
bool f(int *a ,int k, int x)
{
    int l = 0;
    int r = k-1;

    while(l<r)
    {
        int mid = (l+r)/2;
        if(a[mid]<x)
        {
            l = mid+1;
        }
        else if(a[mid]>x){
            r= mid;
        }
        else {
            return true;
            
        }
        
    }
    return false;
}

int main(){
    int n, k;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>k;
    int b[k];
    for(int i = 0;i<k;i++)
    {
        cin>>b[i];
    }
    
    for(int i = 0;i<k;i++)
    {
        if(f(a,n,b[i]))
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    
    return 0;
}