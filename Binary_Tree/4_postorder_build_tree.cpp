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
//in postorder we build the right subtree first while in preorder we build left subtree first 

int search(int iarr[],int start, int end, int val){
    for(int i=start;i<=end;i++){
        if(iarr[i]==val){
            return i;
        }
    }
    return -1;
}


node* buildTree(int parr[],int iarr[],int start,int end){//start and end represents inordere start and inorder end
    static int idx=end; //this is static as it increments from 0 all the time
    if(start>end){
        return NULL;  //base condn
    }
    int val = parr[idx]; //it gives us value of preorder at that index
    idx--;
    node* curr = new node(val);
    if(start==end){//if there is only one value in inorder
        return curr;
    }
    int pos =search(iarr, start,end,val); //it gives position of val in inorder array
    curr->right=buildTree(parr,iarr,pos+1,end); //as we are observing only a part of array i.e. subarray where we got the val in inorder  //building right subtree
    curr->left=buildTree(parr,iarr,start,pos-1); //as we are observing only a part of array i.e. subarray where we got the val in inorder //building left subtree
    return curr;
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
cout<<"Enter size of postorder/inorder array ";
cin>>n;
int iarr[n];
//4 2 1 5 3
cout<<"Enter inorder array ";
for(int i=0;i<n;i++){
    cin>>iarr[i];
}
int parr[n];
//4 2 5 3 1
cout<<"Enter postorder array ";
for(int i=0;i<n;i++){
    cin>>parr[i];
}
node* root =buildTree(parr,iarr,0,n-1);
cout<<"Inorder traversal of given tree is ";
inorderPrint(root);
return 0;
}