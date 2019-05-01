#include <iostream>

using namespace std;

struct node
{
    int value;
    node * right;
    node * left;
    int level;

    node(int x)
    {
       value = x;
       right = NULL;
       left = NULL;
       level = -1; 
    }
    
};

node * add(node * root, int x)
{
     node * n = new node(x);
     if(root = NULL)
     {
        root = n;
        root->level = 0;
     }

     else{
        if(root->value > x)
        {
            if(root->left == NULL)
            {
                root->left = n;
                root->left->level = root->level  + 1;
            }
            else{
                add(root->left,x);
            }
        }
        else if(root->value < x)
        {
              if(root->right == NULL)
              {
                    root -> right = n;
                    root->left->level = root->level + 1;
              }
              else{
                add(root->right,x);
              }
        }
     }

     return root;
}
int rightmost(node * root)
{
       if(root -> right == NULL) return root->value;
       rightmost(root->right);
}

node * del(node * root, int x){
    if(root = NULL) return NULL;

    if(root -> value == x)
    {
        if(root->right == NULL && root->left == NULL)
        {
            delete root;
            return NULL;
        }
        if(root->right !=NULL && root->left ==NULL){
            temp = root->right;
            delete root;
            return temp;
        }
        if(root->left !=NULL && root->right ==NULL){
            temp = root->left;
            delete root;
            return temp;
        }

        root->value = rightmost(root->left);

    }
    if(root->value > x)
    {
        root->left = del(root->left, x);
        return root;
    }
    if(root->value < x)
    {
        root ->right = del(root->right , x);
        return root;
    }

    

}

void print(root)
{
    if(root = NULL) return;
    cout<<root->value << " " << root-> level<<endl;
    print(root->left);
    print(root->right);
}
   

int main(){

      node * root = NULL;

      int[] a = {10,5,15,3,8,11,19};


      for(int i = 0 ; i < 7;i++)
      {
        root = add(root, a[i]);
      }

    return 0;
}