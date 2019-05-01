#include<iostream>
#include<set>

using namespace std;

int main()
{
	set<int> s;
	int n;
	cin>>n;
	int a[n];
	for(int i = 0;i<n;i++)
	{
		cin>>a[i];
		s.insert(a[i]);
	}
	set<int> :: iterator it;
	it = s.end();
	it--;
	it--;
	cout<<*it;
	return 0;
}