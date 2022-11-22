#include<bits/stdc++.h>
#include<vector>
using namespace std;
//preorder traversal:-
// Visit the root.
// Traverse the left subtree, i.e., call Preorder(left->subtree)
// Traverse the right subtree, i.e., call Preorder(right->subtree) 

//postorder traversal:-
// Traverse the left subtree, i.e., call Postorder(left->subtree)
// Traverse the right subtree, i.e., call Postorder(right->subtree)
// Visit the root

//inorder traversal :-left subtree -> root -> right subtree
// traverse the left subtree, i.e., call Inorder(left->subtree)
// Visit the root.
// Traverse the right subtree, i.e., call Inorder(right->subtree)
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
node *buildTree(node *&root)
{
    cout << "Enter the data ";
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter the data for inserting in left of " << root->data << endl;
    root->left = buildTree(root->left);
    cout << "Enter the data for inserting in right of " << root->data << endl;
    root->right = buildTree(root->right);
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
node* root=new node(1);
root->left= new node(2);
root->right= new node(3);
root->left->left= new node(4);
root->left->right= new node(5);
root->right->left= new node(6);
root->right->right= new node(7);
/*
      1
    /   \
   2     3
  / \    /\
 4   5  6  7
 preorder:- 1,2,4,5,3,6,7
 inorder:-4,2,5,1,6,3,7
 postorder:-4,5,2,6,7,3,1
*/
cout<<"Preorder traversal of given tree is ";  
preorder(root);
cout<<endl;
cout<<"Inorder traversal of given tree is ";  
inorder(root);
cout<<endl;
cout<<"Postorder traversal of given tree is ";  
postorder(root);
cout<<endl;
node *root2 = NULL;
// creating a tree
root2 = buildTree(root2);
cout<<"Preorder traversal of given tree is ";  
preorder(root2);
cout<<endl;
cout<<"Inorder traversal of given tree is ";  
inorder(root2);
cout<<endl;
cout<<"Postorder traversal of given tree is ";  
postorder(root2);
cout<<endl;
return 0;
}