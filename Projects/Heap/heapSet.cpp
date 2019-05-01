#include <bits/stdc++.h>
using namespace std;
int main(){
  multiset<int> st;
  int n,k;
  cin>>n>>k;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<k;i++){
    st.insert(a[i]);
  }
  multiset<int>::iterator it;
 // it = st.begin();
  for(int i=k;i<=n;i++){
    it=st.begin();
    cout<<*it<<endl;
    st.insert(a[i]);
    it = st.find(a[i-k]);
    st.erase(it);
    // cout<<*it<<endl;
    // it = st.begin() + 1;


  }

  return 0;
}