#include <iostream>
#include <cmath>

using namespace std;

double determ(int** ar, int size);

int main()
{
 int size = 3;
 int**ar;
 ar = new int*[size];
 for (int i = 0; i<size; ++i)
  ar[i] = new int[size];
 for (int i = 0; i<size; ++i)
  for (int j = 0; j<size; ++j)
   cin >> ar[i][j];
 for (int i = 0; i<size; ++i)
 {
  for (int j = 0; j<size; ++j)
   cout << ar[i][j] << ' ';
  cout << endl;
 }
 cout << determ(ar, size) << '\n';
 for (int i = 0; i<size; ++i)
  delete[] ar[i];
 delete[] ar;
 return 0;
}

double determ(int** ar, int size)
{
 int i, j;
 double det = 0;
 int** matr;
 if (size == 1)
 {
  det = ar[0][0];
 }
 else if (size == 2)
 {
  det = ar[0][0] * ar[1][1] - ar[0][1] * ar[1][0];
 }
 else
 {
  matr = new int*[size - 1];
  for (i = 0; i<size; ++i)
  {
   for (j = 0; j<size - 1; ++j)
   {
    if (j<i)
     matr[j] = ar[j];
    else
     matr[j] = ar[j + 1];
   }
   det += pow((double)-1, (i + j))*determ(matr, size - 1)*ar[i][size - 1];
  }
  delete[] matr;
 }
 return det;
}