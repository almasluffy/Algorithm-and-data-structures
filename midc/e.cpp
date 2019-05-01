#include<iostream>
#include<vector>
#include<set>
#include <algorithm>
using namespace std;


int main(){

    int n,k;
    cin>>n>>k;
    vector<int> myV;
    for(int i = 1;i<=n;i++)
    {
      if(n%i == 0)
      {
          myV.push_back(i);
      }
    }
    sort(myV.rbegin(),myV.rend());

    cout<<myV[k-1];
    
    return 0;
}