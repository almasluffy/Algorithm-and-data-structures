#include <iostream> 

using namespace std;
string f(int *a ,int k, int x)
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

        
    }
    if(a[l] == x)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
    
}

int main(){
    int n, k;
    cin>>n>>k;
    int a[n], b[k];
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i = 0;i<k;i++)
    {
        cin>>b[i];
    }

    for(int i = 0;i<k;i++)
    {
        cout<<f(a,n,b[i])<<endl;
    }

    
	return 0;
}