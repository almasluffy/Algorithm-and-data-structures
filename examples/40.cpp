#include <iostream>
#include <cmath>

using namespace std;

int find(int n)
{
	if(n==0) return 1;

	return  2 * find(n-1);
}

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    cout<<pow(2,n);
	return 0;
}