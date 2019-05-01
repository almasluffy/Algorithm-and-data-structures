#include <bits/stdc++.h>
using namespace std;
void quickSort(int arr[], int left, int right) {

      int i = left, j = right;
      int tmp;
      int pivot = arr[(left + right) / 2];
      /* partition */
      while (i <= j) {
            while (arr[i] < pivot)
            {
                  i++;
            }
            while (arr[j] > pivot)
            {
                  j--;
            }
            if (i <= j) {
              /*swap a[i] and a[j]*/
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
        }
      /* recursion */
      if (left < j)
            quickSort(arr, left, j);
      if (i < right)
            quickSort(arr, i, right);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    int k=0;
    quickSort(a,0,n-1);
    for(int i=0;i<n;i++){
      if(a[i]>a[0] && a[i]<a[n-1]){
        k++;
      }
    }
    cout<<k;
  return 0;
} 