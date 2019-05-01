#include <iostream> 

using namespace std;

int main()
{

	int a = 5;
	int *b;
	int *c;
    b = &a;
    c = b;

    cout<<c<< " " <<&a;
	
	return 0;
}