#include <iostream>
using namespace std;
void bubblesort(int *a,int n){
 for(int i = 0;i<n-1;i++){
  for(int j = 0;j<n - i - 1;j++){
   if(a[j]>a[j+1]){
    int k = a[j+1];
    a[j+1]=a[j];
    a[j]=k;
   }
  }
 }
}
int main(){
 int n;
 cin>>n;
 int a[n];
 int b[n];
 for(int i = 0 ;i < n;i++){
  cin>>a[i];
  b[i]=1;
 }
 bubblesort(a,n);

 for(int i = 0;i<n;i++){
  for(int j = 0;j<n;j++){
   if(a[i]==a[j] && i!=j){
    b[i]++;
   }
  }
 }
 bubblesort(b,n);
 int cnt = 0;
 for(int i =0;i<n-1;i++){
  if(a[i]==a[i+1]){
   continue;
  }else{
   cnt++;
  }
 }
 if(b[n-1] == b[n-2]){
  cnt++;
 }
 cout<<b[n-1]<<" "<<cnt<<endl;

 return 0;
}