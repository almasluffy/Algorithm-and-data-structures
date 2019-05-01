#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
int size = 0;
int pre;

struct heap
{
  int a[2 * 100001];
 
    void init(){
        for(int i=0;i<2 * 100001;++i){
            a[i] = int(1e9);
        } 

}
void sift_up(int pos,bool isPrintable)
{
     
       
       if(pos == 0)
       {
       	if(isPrintable)
       	{
       		cout<<pos+1<<endl;
       	}
       	return;
       }
       int parent_pos = (pos - 1)/2;
       if(a[parent_pos] > a[pos])
       {
       	swap(a[parent_pos], a[pos]);
       	sift_up(parent_pos,isPrintable);
       }
       else if(isPrintable){
             cout<<pos+1<<endl;
       }
}
void sift_down(int parent,bool isPrintable)
{
  int ch1 = 2 * parent + 1;
  int ch2 = 2 * parent + 2;
  if(parent>=size)
  {
    if(isPrintable)
    {
      cout<<parent+1<<" ";
    }
    return;
  }
  
  else if(a[parent] < max(a[ch1],a[ch2]))
  {
         if(a[ch1] < a[ch2])
         {
            swap(a[ch2],a[parent]);
            sift_down(ch2,isPrintable);
         }
          else if(a[ch1] > a[ch2])
         {
            swap(a[ch1],a[parent]);
            sift_down(ch1,isPrintable);
         }
         
  }
  else  
  {
          cout<<parent+1<<" ";
  }

}
void add(int x)
{
     a[size] = x;
     sift_up(size,false);
     size++;
}

void getMax()
{
  int myMax = a[0];
  a[0] = a[size - 1];
  a[size-1] = int(-1e9);
  size--;
  sift_down(0,true);
  cout<<myMax<<endl;

}

getMin()
{
  int myMin = a[0];
  a[0] = a[size - 1];
  a[size-1] = int(1e9);
  sift_down(0,false);
  size--;
  cout << myMin << " ";
 
}

void updateTodown(int pos, int w)
{
    a[pos] -=w;
    sift_down(pos,true);
}

void print()
{
   for (int i = 0; i < size; ++i)
  {
        cout<<a[i]<<" ";
  }
}

};

int main()
{
  heap h;
	int n,x;
  h.init();
  cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin>>x;
		h.add(x);
	}

  //h.print();
  int copy = size;
  
  for(int i = 0;i<n;i++)
  {
      h.getMin();
  }
	
  //h.print();

	return 0;
}