#include <iostream>
#include <set>
#include <iterator>
using namespace std;
 
multiset<int> myset;
 
struct node{
    int val;
    node * left;
    node * right;
    node * next;
    int level;
    node(int x){
        val = x;
        level = -1;
        left = NULL;
        right = NULL;
        next = NULL;
    }
};
 
int mxdeep = 0;
 
node * add(node * root, int x){
    node *n = new node(x);
    if(root == NULL){
        root = n;
        root->level = 0;
    }else{
        if(x < root->val){
            if(root->left == NULL){
                root->left = n;
                root->next = n;
                root->left->level = root->level + 1;
                if(root->left->level > mxdeep){
                    mxdeep = root->left->level;
                }
            }else{
                add(root->left, x);
            }
        }else if(x > root->val){
            if(root->right == NULL){
                root->right = n;
                root->next = n;
                root->right->level = root->level + 1;
                if(root->right->level > mxdeep){
                    mxdeep = root->right->level;
                }
            }else{
                add(root->right, x);
            }
        }
   }
   
   return root;
}
 
node * find(int x){
 
}
 
int deep(){
    return mxdeep;
}
 
int rightmost(node * root){
    if(root->right == NULL) return root->val;
    rightmost(root->right);
}
 
node * del(node * root, int x){
    if(root == NULL) return root;
    if(root->val == x){
        if(root->right == NULL && root->left == NULL){
            delete root;
            return NULL;
        }
        if(root->right != NULL && root->left == NULL){
            node * temp = root->right;
            delete root;
            return temp;
        }
        if(root->right == NULL && root->left != NULL){
            node * temp = root->left;
            delete root;
            return temp;
        }
        root->val = rightmost(root->left);
        root->left = del(root->left, root->val);
        return root;
    }
 
    if(x < root->val){
        root->left = del(root->left, x);
        return root;
    }
 
    if(x > root->val){
        root->right = del(root->right, x);
        return root;
    }
}
int mxlvl = 0;
 
 
void pr(node * n){
    if(n==NULL)return;
    if(n->left!=NULL && n->right!=NULL){
        myset.insert(n->val);
        //cout << n->val << endl;
    }
    pr(n->right);
    pr(n->left);
}
 
void print(node * n){
    if(n == NULL) return;
    cout << n->val << " "  << n->level << endl;
    print(n->left);
    print(n->right);
}
 
int main(){
 
    node * root = NULL;
    bool in = true;
 
    while(in){
        int number;
        cin >> number;
        if(number==0){
            in = false;
        }
        else{
            root = add(root,number);
        }
    }
   
    // int d[] = {7, 3, 2, 5, 4, 8};
 
    // for(int i = 0; i < 6; ++i){
    //     root = add(root, d[i]);
    // }
 
    //print(root);
 
//    del(root, 7);
 
    //cout << "=============" << endl;
 
    //print(root);
   
    //cout << "=============" << endl;
 
    //cout << deep() +1  << endl;
 
 
    pr(root);
    copy(myset.begin(),myset.end(),ostream_iterator<int>(cout," "));
 
    return 0;
}