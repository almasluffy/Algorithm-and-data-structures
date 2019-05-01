#include <iostream>

using namespace std;
int count;
struct element{
    int value;
    element * next;
    element(int x){
        value = x;
        next = NULL;
    }
};

struct mQueue{
    private:
        element * head = NULL;
        element * tail = NULL;
        
    public:
        void push(int x){
            element * el = new element(x);
            if(tail != NULL){
                tail -> next = el; 
            }

            if(head == NULL){
                head = el;
            }

            tail = el;
            count++;
        }

        void pop(){
            cout<< head->value<<endl;
            head = head->next;
            count--;
        }
        int front(){
            return head->value;
        }

        void clear(){
            count = 0;
            head = NULL;
            tail = NULL;
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

         if(s=="front")
         {
          cout << q.front() << endl;
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