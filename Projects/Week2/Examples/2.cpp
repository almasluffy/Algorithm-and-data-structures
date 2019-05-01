#include <iostream> 
#include <stdlib.h> 
using namespace std; 

int main() 
{ 
int N;
cin>>N;
int mass[N], max, min; 


for ( int i  = 0; i<N; i++) 
{ 
      mass[i] = rand()%5; 
} 

max = mass[0]; 
min = mass[0]; 

for ( int i= 1; i<N; i++) 
{ 
if (max < mass[i]) max = mass[i]; 
if (min < mass[i]) min = mass[i]; 
} 

cout <<"min" « min<< endl; 
cout <<"max" « max <<endl; 

return 0; 
}