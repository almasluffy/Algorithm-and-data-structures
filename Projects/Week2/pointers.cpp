#include <iostream> 

using namespace std;
      struct element
      {
      	int value;
      	element * next;
      };
 
int main()
{
	element q0;
	q0.value = 4;

    element q1;
    q1.value = 7;

    element q2;
    q2.value = 9;

    element q3;
    q3.value = 14;

    q0.next = &q1;
    q1.next = &q2;
    q2.next = &q3;
    q3.next = NULL;

    element *it = &q0;

    while(it!=NULL)
    {
    	cout<<it<<endl;
    	it = it->next;
    }

    
	return 0;
}