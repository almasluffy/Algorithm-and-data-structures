#include<iostream>

using namespace std;

int main()
{
     int n;
     cin>>n;
     int a[n], b[n];
     for(int i = 0; i < n; i++)
     {
     	cin>>a[i];
     }
     for(int i = 0; i < n; i++)
     {
     	cin>>b[i];
     }
     
     for(int i = 0;i<n;i++)
     {
     	int x;
     	x =  a[i];//навремя сохранаяешь a[i] чтобы потом приравнить его b[i];
     	a[i] = b[i];
     	b[i] = x;
     }

     for(int i = 0; i < n; i++)
     {
         cout<<a[i]<<" ";
     }
     cout<<endl;
     for(int i = 0; i < n; i++)
     {
     	cout<<b[i] << " ";
     }
	return 0;
}