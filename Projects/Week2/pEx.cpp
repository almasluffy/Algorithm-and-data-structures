#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

int sum(vector<int> *v){
  int res = 0;

  for(int i=0;i<v->size();i++)
  {
       res += v->at(i);
  }

  v->push_back(777);


  cout<<"copy "<<v->size()<<endl;

  return res;
}

int main()
{
      vector<int> v;
      int x;
      for(int i=0;i<3;i++){

        cin>>x;
        v.push_back(x);
      }     


      cout<<sum(&v)<<endl;

      cout<<"original "<<v.size()<<endl;

      return 0;
}