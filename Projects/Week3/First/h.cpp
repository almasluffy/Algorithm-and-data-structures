#include <iostream> 
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n , x, k = 0;
    cin>>n;

    int a[n][n];

    for(int i = 0;i < n; i++)
    {
        for(int j = 0; j<n ;j++)
        {
            cin>>a[i][j];
        }
    }

    cin>>x;

      for(int i = 0;i < n; i++)
    {
        for(int j = 0; j<n ;j++)
        {
            if(a[i][j] == x)
            {
                k++;
            }
        }
    }

      if(k== 0)
      {
        cout<<"NO";
      }
      else{
        cout<<"YES";
      }

	return 0;
}