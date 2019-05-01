#include <bits/stdc++.h>

using namespace std;

int n,a[200100],sum[200100],k;

int get(int l,int r) {
 return sum[r] - sum[l - 1];
}

int main() {

 cin >> n >> k;
 sum[0] = 0;
 for(int i = 1;i <= n;i ++) {
  cin >> a[i];
  sum[i] = sum[i - 1] + a[i];
 }
 int ans = int(2e9);
 int cnt = 0;

 for(int i = 1;i <= n;i ++){
  int l = i,r = n;
  int cur = 0;
  while(l <= r) {
   int m = l + r >> 1;
   int sum = get(i,m);
   if(sum <= k) {
    cur = m;
    l = m + 1;
   }
   else r = m - 1;
  }
  if(cur >= i) {
   int sum = get(i,cur);
   if(sum < k) ++ cur;
   if(cur <= n)
    ans = min(ans,cur - i + 1);
  }
 }
 cout << ans;
 return 0;