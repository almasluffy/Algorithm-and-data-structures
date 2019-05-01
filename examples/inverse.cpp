
#include<iostream>
#include <cmath>
using namespace std;
double d = 0;
double det(int n, double mat[10][10])
{
    int c, subi, i, j, subj;
    double submat[10][10];  
    if (n == 2) 
    {
        return( (mat[0][0] * mat[1][1]) - (mat[1][0] * mat[0][1]));
    }
    else
    {  
        for(c = 0; c < n; c++)
        {  
            subi = 0;  
            for(i = 1; i < n; i++)
            {  
                subj = 0;
                for(j = 0; j < n; j++)
                {    
                    if (j == c)
                    {
                        continue;
                    }
                    submat[subi][subj] = mat[i][j];
                    subj++;
                }
                subi++;
            }
        d = d + (pow(-1 ,c) * mat[0][c] * det(n - 1 ,submat));
        }
    }
    return d;
}

double f(double a[10][10], int l ,int r,int n)
{
    int mainI = l;
    int mainJ = r;
     double arr[10][10];
    int subI = 0;
    int subJ  = 0;
    for(int i = 0;i<n;i++)
    {  
      
      for(int j = 0;j<n;j++)
      {
           if(i!=mainI && j!=mainJ)
           {
            arr[subI][subJ] = a[i][j];
            subJ++;
           }
      }
      subI++;
    }

    double detOfmyIndex = det(subI,arr);
    return detOfmyIndex;
}
int main()
{
  int n;
  cin>>n;
  double a[n][n];

  for(int i = 0;i<n;i++)
  {
    for(int j = 0;i<n;j++)
    {
      a[i][j] = f(a,i,j,n);
    }
  }

  for(int i = 0;i<n;i++)
  {
    for(int j = 0;i<n;j++)
    {
      cin>>a[i][j];
    }
  }

   return 0;
}