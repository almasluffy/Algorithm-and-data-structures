#include <iostream>

using namespace std;
int a[1000000];
int size = 0;
void hepify(int pos)
{
   int parentpos = (pos - 1)/2;
   if(parentpos == pos) return;
   if(a[parentpos] > a[pos])
   {
    swap(a[parentpos], a[pos]);
    hepify(parentpos);
   } 
   
}
void add(int x)
{
    a[size] = x;
    hepify(size);
    size++;
}

void pop()
{
    h[0] = h[size - 1];
    sz--;
    check(0);
}

void check(int pos)
{
    int l = pos * 2 + 1;
    int r = pos * 2 + 2;
    if(l>=size) return;
    if(r>=size){
        if(a[l] < a[pos])
        {
            swap(a[l], a[pos]);
            check(a[l]);
        }
    }
    else{
        
    }

}

int main(){

    int x;
    while(cin>>x)
    {
        if(x==0) break;
        add(x);
    }
    for(int i = 0 ; i < size ;i++)
    {
            cout<<a[i]<< " ";
    }
   

    return 0;
}