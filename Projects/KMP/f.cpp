#include <bits/stdc++.h>

using namespace std;

int mxSz(string s){ 
    int n = s.size();
    vector<int> p(n);
    int mx = 0;
    p[0] = 0;
    for(int i = 1;i<n;++i){
        int j = p[i-1];

        while(j>0 && s[i]!=s[j]){
            j = p[j-1];
        }
        
        if(s[i] == s[j]){
            j = j+1;
        }
        p[i] = j;
        mx = max(mx,p[i]);
    }
   
    return mx;
    
}

int main(){

    int T;
    cin >> T;
    
    
    while(T>0){
        string s;
        cin >> s;
        int k = 0;
        int n = s.size();
        string t;
        for(int j = 0;j<n;++j){
            t+=s[j];
            reverse(t.begin(),t.end());
            k+=t.length()  - mxSz(t);
            reverse(t.begin(),t.end());
        }
        cout << k << endl;
        T--;
    }
    

    return 0;
}