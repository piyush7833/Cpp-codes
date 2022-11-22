//replace the sum of each node with the sum of all subtree node itself
#include<bits/stdc++.h>
#include<vector>
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
int height(node* root){
    if(root==NULL){
        return 0;
    }
    int leftHeight =height(root->left);
    int rightHeight =height(root->right);
    return (max(leftHeight,rightHeight)+1);
    //time complexity of this i O(n) //n is number of nodes in a tree
}
bool isBalanced(node* root){
    if(root==NULL){
        return true;
    }
    if(isBalanced(root->left)==false){  //if one node is unbalnaced it means whole tree is unbalanced
        return false;
    }
    if(isBalanced(root->right)==false){  //if one node is unbalnaced it means whole tree is unbalanced
        return false;
    }
    int lh =height(root->left);
    int rh =height(root->right);
    if(abs(lh-rh)<=1){
        return true;
    }
    else{
        return false;
    }
}
void balancedHeight(node* root){
    //for each node the the difference between the height of the left subtree and right subtree <=1 //mod(left height - right height)<=1
    //leaf nodes are always balanced
    //always start with leaf nodes 


}
int main(){
    node *root = NULL;
    // creating a tree
    root = buildTree(root);
    cout<<endl;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    //1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
    if(isBalanced(root)){
        cout<<"balanced "<<endl;
    }
    else if(!isBalanced(root)){
        cout<<"Unbalanced "<<endl;
    }
    return 0;
return 0;
}