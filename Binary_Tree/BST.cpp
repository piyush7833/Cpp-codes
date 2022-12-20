#include<bits/stdc++.h>
#include<vector>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        right=NULL;
        left=NULL;
    }
};
node *buildTree(node *&root, int val)
{
    root = new node(val);
    // if (val == -1 || val==root->data)
    // {
    //     return NULL;
    // }
    if(val>root->data){
        cout<<"Data is inserted in right of "<<root->data<<endl;
        root->right=buildTree(root->right,val);
    }
    else{
       cout<<"Data is inserted in left of "<<root->data<<endl; 
       root->left = buildTree(root->left,val); 
    }
    return root;
}
void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" "; //visit the root
    preorder(root->left);  //visit the left 
    preorder(root->right);  //visit the right
}
void postorder(node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left); //visit the left subtree
    postorder(root->right); //visit the right subtree
    cout<<root->data<<" ";  //visit the root
}
void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);  //visit the left subtree
    cout<<root->data<<" "; //visit the root
    inorder(root->right); //visit the right subtree
}
int main(){
node *root = NULL;
// creating a tree
root = buildTree(root,7);
int t=5;
while(t--){
cout<<"Enter data ";
int val;
cin>>val;
buildTree(root , val);
}
cout<<"Preorder traversal of given tree is ";  
preorder(root);
cout<<endl;
cout<<"Inorder traversal of given tree is ";  
inorder(root);
cout<<endl;
cout<<"Postorder traversal of given tree is ";  
postorder(root);
cout<<endl;
return 0;
}