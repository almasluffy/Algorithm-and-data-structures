#include <iostream>
using namespace std;
int binary_search(long long int *a, int n, int k){
 int l = 0;
 int r = n-1;
 while(l<r){
  int m = (l+r)/2;
  if(a[m]<k){
   l=m+1;
  }
  else{
   r=m;
  }
 }

 if(l==0){
  return a[l];
 }
 if(a[l] - k>=k-a[l-1]){
  return a[l-1];
 }
 return a[l];
}
int main(){
 
 int n, k;
 cin >> n >>k;
 long long int ar[n], ar2[k];
 for(int i=0; i<n; i++)
 {
  cin >> ar[i];
 }
 for(int i=0; i<k; i++){
  
    cin>>ar2[i];
 }



 for(int i=0; i<k; i++){
  
  cout << binary_search(ar, k, ar2[i]) << endl;
 }

  



 return 0;
}                    