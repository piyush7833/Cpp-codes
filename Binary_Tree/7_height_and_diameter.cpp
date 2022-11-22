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

//height is the depth of tree deepest node
//find the height of right subtree and left subtree and find max. of them and then add 1 to add root 
int height(node* root){
    if(root==NULL){
        return 0;
    }
    int leftHeight =height(root->left);
    int rightHeight =height(root->right);
    return (max(leftHeight,rightHeight)+1);
    //time complexity of this i O(n) //n is number of nodes in a tree
}
int diameter(node* root){
    //it is longest path between two leaf nodes
    //left subtree diameter and height , right subtree diameter and height 
    //if curr node is in diameter then diameter is left subtree height + right subtree height +1 otherwise diameter is max(left diamter , right diameter)
    //so we will find the diamtere for all the nodes which is max(left subtree height+right subtree height +1,left diamter,right diameter) and at the end the max. diameter is of two leaf nodes
    if(root==NULL){
        return 0;
    }
    int lheight = height(root->left);
    int rheight = height(root->right);
    int currDiameter = lheight + rheight +1;
    int ldiameter = diameter(root->left);
    int rdiameter = diameter(root->right);
    return max(currDiameter,max(ldiameter,rdiameter));
    //time complexity of this is O(n^2); n for height and n for diameter
    }

    //optimised way of diameter calculation
int diameter2(node* root, int* height){
    if(root==NULL){
        *height =0;
        return  0;
    }
    int lh=0,rh=0;
    int ld=diameter2(root->left, &lh);
    int rd=diameter2(root->right, &rh);
    int cd = lh + rh +1;
    int ldiameter = diameter(root->left);
    *height = max(lh,rh)+1;  //calculating height of root at the same time
    int rdiameter = diameter(root->right);
    return max(cd,max(ld,rd));
    //time complexity is O(n) as height is calculated with diameter
}
int main(){
    node *root = NULL;
    // creating a tree
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    //1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1 
    cout << "Height of a tree is "<<endl;
    cout<<height(root);
    cout<<endl;
    cout << "Diameter of a tree is "<<endl;
    cout<<diameter(root);
    cout<<endl;
    int height=0;
    cout << "Diameter of a tree is "<<endl;
    cout<<diameter2(root, &height);
    return 0;
return 0;
}