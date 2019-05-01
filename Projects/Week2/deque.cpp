#include <iostream>

using namespace std;
int count;
struct element{
    int value;
    element * next;
    element * pre;
    element(int x){
        value = x;
        next = NULL;
        pre = NULL;
    }
};

struct mQueue{
    private:
        element * head = NULL;
        element * tail = NULL;
        
    public:
        void push_front(int x){
           
            element * el = new element(x);
            if(head != NULL){
                el -> pre = head; 
            }

            if(tail == NULL){
                tail = el;
            }

            head = el;
            count++;
           
        }

        void push_back(int x)
        {
           


            element *el = new element(x);
            if(tail!= NULL){
                tail->next = el;
            }
             if(head == NULL){
                head = el;
            }
            tail = el;
            count++;

        }

        void pop_front(){
            cout<< head->value<<endl;
            head = head->pre;
            count--;
        }
        void pop_back(){

            cout<< tail->value<<endl;
            tail = tail->next;
            count--;
        }

        int front()
        {
             return head->value;
        }

        int back(){
             return tail -> value;
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

    int test,m, n;
    cin>>test>>m>>n;
    mQueue d;
    string s;
    int x;
    int k = 0;
    for(int i = 0;i<test;i++)
    {
        cout<<"Case "<<i+1<<":"<<endl;
        for(int i = 0 ;i<n;i++)
        {
           cin>>s;
           if(s=="pushLeft")
           {
            if(k<m)
            {
             cin>> x;
             cout<<"Pushed in left: " << x<<endl;
             d.push_front(x);
             k++;
            }
            else
            {
                cout<<"The queue is full"<<endl;
            }
           }
           else if(s=="pushRight")
           {
            if(k<m)
            {
             cin>> x;
             cout<<"Pushed in right: "<<x<<endl;
             d.push_back(x);
             k++;
            }
            else
            {
                cout<<"The queue is full"<<endl;
            }
           }
       
       
           else if(s=="popLeft")
           {
            if(k==0)
            {
                cout<<"The queue is empty"<<endl;
            }
            else
            {
               cout<<"Popped from left: "<<d.front()<<endl;
               d.pop_front();
               k--;
            }
           }
           else if(s=="popRight")
           {
               if(k==0)
            {
                cout<<"The queue is empty"<<endl;
            }
            else
            {
               cout<<"Popped from right: " << d.back()<<endl;
               d.pop_back();
               k--;
            }
           }

        }
    }

   


    return 0;
}