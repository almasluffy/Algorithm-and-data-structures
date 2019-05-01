#include <iostream>
 
using namespace std;
 
int size = 0;
int it = 0 ;
int i_know = 0;
 
struct heap{
   
    int value[2 * 100001];
    int arr[2 * 100001];
 
    void init(){
        for(int i=0;i<2 * 100001;++i){
            value[i] = int(-1e9);
        }      
    }
 
    void add(int x){
        value[size] = x;
        get_el_space(size,false);
        size++;
        it++;
        i_know++;
        //print();
        //cout << endl;
    }  
   
    void extract_max(){
        int max_here = value[0];
        swap(value[0],value[size-1]);
        value[size-1] = int(-1e9);
        size--;
        arr[it-1] = max_here;
        it--;
        take_true_pos(0,false);
    }
 
    void get_el_space(int pos,bool isPrintable){
        if (pos<=0) return;
        int npos = (pos-1)/2;
        if(value[npos] < value[pos]){
            swap(value[npos],value[pos]);
            get_el_space(npos,isPrintable);
        }
        else{
            //cout << pos << " " << npos << endl;
        }
    }
 
    void take_true_pos(int pos,bool isPrintable){
        if(pos==size) return;
        int npos1 = (2 * pos + 1);
        int npos2 = (2 * pos + 2);
        if(value[pos] < max(value[npos1],value[npos2]) ){
            if(value[npos1] < value[npos2]){
                swap(value[npos2],value[pos]);
                take_true_pos(npos2,isPrintable);
            }
            else if(value[npos1] >= value[npos2]){
                swap(value[npos1],value[pos]);
                take_true_pos(npos1,isPrintable);
            }
        }
    }
 
    void print(){
        for(int i = 0; i < i_know; ++i){
            cout << arr[i] << " ";
        }
    }
};
 
 
int main(){
 
    heap h;
    int n;
    cin >> n;
    int v;
 
    h.init();
 
 
    for(int i = 0; i < n; ++i){
        cin >> v;
        h.add(v);
        //h.get_el_space(i,false);
    }
    int size_copy = size;
 
    while(size_copy>0){
        h.extract_max();
        size_copy--;
    }
 
    h.print();
    return 0;
}