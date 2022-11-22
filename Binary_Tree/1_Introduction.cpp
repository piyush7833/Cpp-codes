//properties
//maximum nodes at level l is 2^l
// maximum nodes in a tree of height h is 2^h-1
//for n nodes minimum possible height or minimum number of levels are logbase2^(n+1)
//a binary tree with leaves l has at least log base2^(n+1)  + 1 number of levels

#include<bits/stdc++.h>
#include<vector>
using namespace std;
class node{
    int data;
    public:
    node* left;
    node* right;
    node(int val){
        data=val;
        right=NULL;
        left=NULL;
    }
};
int main(){
node* root=new node(1);
root->left= new node(2);
root->right= new node(3);
/*
      1
    /   \
   2     3
*/
root->left->left= new node(4);
root->left->right= new node(5);
root->right->right= new node(6);
/*
      1
    /   \
   2     3
  / \     \
 4   5     6
*/
return 0;
}