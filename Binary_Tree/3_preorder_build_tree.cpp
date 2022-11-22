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


int search(int iarr[],int start, int end, int curr){
    for(int i=start;i<=end;i++){
        if(iarr[i]==curr){
            return i;
        }
    }
    return -1;
}


node* buildTree(int parr[],int iarr[],int start,int end){//start and end represents inordere start and inorder end
    static int idx=0; //this is static as it increments from 0 all the time
    if(start>end){
        return NULL;  //base condn
    }
    int curr = parr[idx]; //it gives us value of preorder at that index
    idx++;
    node* Node = new node(curr);
    if(start==end){//if there is only one value in inorder
        return Node;
    }
    int pos =search(iarr, start,end,curr); //it gives position of curr in inorder array
    Node->left=buildTree(parr,iarr,start,pos-1); //as we are observing only a part of array i.e. subarray where we got the curr in inorder //building left subtree
    Node->right=buildTree(parr,iarr,pos+1,end); //as we are observing only a part of array i.e. subarray where we got the curr in inorder  //building right subtree
    return Node;
}


void inorderPrint(node* root){
    if(root==NULL){
        return;
    }
    inorderPrint(root->left);  //visit the left subtree
    cout<<root->data<<" "; //visit the root
    inorderPrint(root->right); //visit the right subtree
}
int main(){
int n ;
cout<<"Enter size of preorder/inorder array ";
cin>>n;
int iarr[n];
//4 2 1 5 3
cout<<"Enter inorder array ";
for(int i=0;i<n;i++){
    cin>>iarr[i];
}
int parr[n];
//1 2 4 3 5
cout<<"Enter preorder array ";
for(int i=0;i<n;i++){
    cin>>parr[i];
}
node* root =buildTree(parr,iarr,0,n-1);
cout<<"Inorder traversal of given tree is ";
inorderPrint(root);
return 0;
}