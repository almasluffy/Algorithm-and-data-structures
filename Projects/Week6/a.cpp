#include <iostream>
#include <algorithm>

using namespace std;
int a[100000];
int size = 0;


void heapify(int pos,bool isPrintable)
{
     
       int parent_pos = (pos - 1)/2;
       if(parent_pos == pos)
       {
       	if(isPrintable)
       	{
       		cout<<pos+1<<endl;
       	}
       	return;
       }
       if(a[parent_pos] < a[pos])
       {
       	swap(a[parent_pos], a[pos]);
       	heapify(parent_pos,isPrintable);
       }
       else if(isPrintable){
             cout<<pos+1<<endl;
       }
}
void add(int x)
{
     a[size] = x;
     heapify(size,false);
     size++;
}

void update(int pos, int w)
{
    a[pos] +=w;
    heapify(pos,true);
}
int main()
{
	int n,x;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>x;
		add(x);
	}
	
    int k,q,w;
    cin>>k;
	for (int i = 0; i < k; ++i)
	{
	       cin>>q>>w;
	       update(q-1,w);
	}

	for (int i = 0; i < size; ++i)
	{
		cout<<a[i]<<" ";
	}
	

	


	return 0;
}