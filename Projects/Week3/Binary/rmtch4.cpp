#include <iostream>
 
using namespace std;
 
int a[2000000];
 
int find1(int l,int r,int x){
    while(l<r){
        int mid = r - (r-l)/2;
        if(a[mid]<=x){
            l = mid;
        }
        else {
            r = mid-1;
        }
    }
    return (a[l]==x)?(l+1):0;
}
 
int find2(int l,int r,int x){
    while(l<r){
        int mid = l + (r-l)/2;
        if(a[mid] >= x){
            r=mid;
        }
        else{
            l = mid+1;
        }
    }
    return (a[l] == x)?(l+1):0;
}
 
 
int main(){
 
    int n,m;
    cin >>n >> m;
    for(int i=0;i<n;++i){
        cin >> a[i];
    }
 
    while(m>0){
        int x;
        cin >> x;
 
        if(find2(0,n-1,x) == find1(0,n-1,x) && find1(0,n-1,x)==0){
            cout << 0 << endl;
        }
        else{
            cout << find2(0,n-1,x) << " " << find1(0,n-1,x) << endl;
        }
       
        m--;
    }
 
    return 0;
}