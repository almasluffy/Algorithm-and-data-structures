#include <iostream> 

using namespace std;

int main(){
    int n;
    cin>>n;
    int count = 0;
    int k = 1;
    while(k<n)
    {
        k*=2;
        count ++;
    }
    cout<<count;
	return 0;
}