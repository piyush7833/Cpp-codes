//the shortest distance between two nodes is minimum numer of edges to be traversed to reach each one node from anoher
#include <bits/stdc++.h>
#include <vector>
// only extended binary tree are created by this code
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

//lowest common ancestor i.e. lowest parent node
node* lca(node* root, int n1,int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1 || root->data ==n2){
        return root; //in this case the parent i.e lowest commin ancestor is root
    }
    node* left=lca(root->left,n1,n2); //finding lca in left subtree
    node* right=lca(root->right,n1,n2);  //finding lca in right subtree
    if(left!=NULL && right!=NULL){
        return root;  //in such case n1 or n2 is in left subtree and n2 or n1 in right subtree respectively
    }
    if(left ==NULL && root==NULL){
        return NULL; //lca isn't found
    }
    if(left!=NULL && right==NULL){
        return lca(root->left,n1,n2);   //lca is present in left subtree
    }
        return lca(root->right,n1,n2);   //lca is present in right subtree
}
int find_distance(node* root, int k,int dist){
    if(root==NULL){
        return -1;
    }
    if(root->data == k){
        return dist;
    }
    int left=find_distance(root->left,k,dist+1); //find k in left subtree
    if(left!=-1){
        return left;
    }
    return find_distance(root->right,k,dist+1); //find k in right subtree
} 
int shortest_distance(node* root,int n1,int n2){
    node* LCA = lca(root,n1,n2);
    int d1=find_distance(LCA,n1,0);
    int d2=find_distance(LCA,n2,0);
    return d1+d2;
}
int main()
{
    node *root = NULL;
    // creating a tree
    root = buildTree(root);
    int m1,m2;
    cout<<"Enter the first node value ";
    cin>>m1;
    cout<<"Enter the second node value ";  //if m1 and m2 have the same parent node then there shortest distance is 2 //so find lowest common ancestor first and then find distance of n1(d1) and n2(d2) and then return (d1+d2)
    cin>>m2;
    cout<<"shortest distance between "<<m1<<" and "<<m2<<" is "<<shortest_distance(root,m1,m2);
    //1 2 4 -1 -1 -1 3 -1 5 -1 -1
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    return 0;
}