#include <iostream>

using namespace std;
int a[1000000];
int size = 0;
void hepify(int pos)
{
   int parentpos = (pos - 1)/2;
   if(parentpos == pos)return;
   if(a[parentpos] < a[pos])
   {
    swap(a[parentpos], a[pos]);
   } 
   hepify(parentpos);
}
void add(int x)
{
    a[size] = x;
    hepify(size);
    size++;
}

void del(int x)
{
  
}

void sift_up(int x)
{

}
void update(int x)
{

}

int main(){

   int n,x;
  
   for (int i = 0; i <n; ++i)
   {
      cin>>x;
      add(x);
   }





    return 0;
}