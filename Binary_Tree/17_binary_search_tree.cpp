#include<bits/stdc++.h>
#include<vector>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        right = NULL;
        left = NULL;
    }
};

node* insertBST(node* &root, int val){
    if(root==NULL){
        return new node(val);  //inserting the value
    }
    if(val<root->data){
        root->left=insertBST(root->left,val); //compairng the root
    }
    else{
        root->right=insertBST(root->right,val); //compairng the root
    }
    return root;
}
void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right); 
}
int main(){
node* root=NULL;
cout<<"Enter number of nodes ";
int n,d;
cin>>n;
cout<<"Enter root value ";
cin>>d;
root=insertBST(root,d);
for(int i=0;i<n-1;i++){
cout<<"Enter value of node ";
    cin>>d;
    insertBST(root,d);
}
cout<<"Inorder traversal of bst created is ";
inorder(root);
return 0;
}