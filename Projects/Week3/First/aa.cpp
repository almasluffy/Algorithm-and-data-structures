#include <iostream>
#include <set>
 
using namespace std;
 
 
int main(){
 
    set<int> a,b,c;
   
    int n,x,m;
 
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> x;
        a.insert(x);
    }
 
    cin >> m;
    for(int i = 0; i < m; ++i){
        cin >> x;
        b.insert(x);
    }
 
    set<int> :: iterator it;
 
    for(it = a.begin(); it != a.end(); ++it){
        int k = *it;
        if(b.find(k) == b.end()){
            c.insert(k);
        }
    }
 
    for(it = b.begin(); it != b.end(); ++it){
        int k = *it;
        if(a.find(k) == a.end()){
            c.insert(k);
        }
    }
 
    cout << c.size() << endl;
 
    for(it = c.begin(); it != c.end(); ++it){
        cout << *it << " ";
    }
 
 
    return 0;
}
