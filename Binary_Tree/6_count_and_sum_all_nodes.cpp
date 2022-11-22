#include <bits/stdc++.h>
#include <vector>
// only extended binary tree are created by this code
using namespace std;
class node{
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
node *buildTree(node *&root){
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

int countNodes(node* root){
    if(root==NULL){
        return 0;
    }
    return(countNodes(root->left) + countNodes(root->right)+1); //count the left suntree and then right subtree
}
int sumNodes(node* root){
    if(root==NULL){
        return 0;
    }
    return(sumNodes(root->left) + sumNodes(root->right)+root->data); //sum the left subtree and then right subtree of a node and then add value of the root
}
int main(){
    node *root = NULL;
    // creating a tree
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    //1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1 
    cout << "Number of nodes in a tree are "<<endl;
    cout<<countNodes(root);
    cout<<endl;
    cout << "Sum of all nodes in a tree are "<<endl;
    cout<<sumNodes(root);
    return 0;
}