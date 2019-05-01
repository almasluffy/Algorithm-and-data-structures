#include <iostream>
using namespace std;
template <typename T>
class Node{
public:
 T data;
 Node *next;
 Node(T data){
  this->data=data;
  next = NULL;
 }
};

template <typename T>
class Stack{
public:
 Node<T> *top;
 int sz;
 Stack(){
  top = NULL;
  sz = 0;
 }

 void size(){
  cout << sz << endl;
 }

 bool empty(){
  return sz == 0;
 }

 void push(T data){
  Node<T> *node = new Node<T> (data);
  node->next = top;
  top = node;
  cout << "ok\n"; 
  sz++;
 }

 void back(){
  if(top!=NULL){
   cout << top->data << endl;
  }
 }

 void pop(){
  if(top!=NULL){
   cout << top->data << endl;
   top = top->next;
   sz--;
  }
 }

 void clear(){
  cout << "ok\n";
  top = NULL;
  sz = 0;
 }

};

int main(){
 Stack<int> *stack = new Stack<int>();
 string s;
 int n;
 while(1){
  cin >> s;
  if(s=="exit"){
   cout << "bye\n";
   break;
  }
  if(s=="push"){
   cin >> n;
   stack->push(n);
  }
  if(s=="back"){
   stack->back();
  }
  if(s=="size"){
   stack->size();
  }
  if(s=="clear"){
   stack->clear();
  }
  if(s=="pop"){
   stack->pop();
  }
 }
 return 0;
}