#include <iostream>

using namespace std;
int count;
struct element{
    int value;
    element * pre;
    element(int x){
        value = x;
        pre = NULL;
    }
};

struct mQueue{
    private:
        
        element * top = NULL;
        
    public:
        void push(int x){
            element * el = new element(x);
            if(top!= NULL){
                el->pre = top;
            }

    

            top = el;
            count++;
        }

        void pop(){
            cout<< top->value<<endl;
            top = top->pre;
            count--;
        }
        int back(){
            return top->value;
        }

        void clear(){
            count = 0;
            top = NULL;
        
        }

        int size(){
            return count;
        }
        
};


int main(){

    mQueue q;
    string s;
    int x;
    while(true)
    {
         cin>>s;

         if(s=="push")
         {
           cin>>x;
           q.push(x);
           cout<<"ok"<<endl;
         }

         if(s=="back")
         {
          cout << q.back() << endl;
         }

         if(s=="pop")
         {
          q.pop();
         }

         if(s=="size")
         {
          cout<<q.size()<<endl;
         }

         if(s=="clear")
         {
          q.clear();
          cout<<"ok"<<endl;
         }

         if(s=="exit")
         {
          cout<<"bye";
          return 0;
         }
         if(count>100)
         {
          return 0;
         }
    }

   


    return 0;
}