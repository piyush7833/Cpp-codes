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

int SumAtK(node *&root,int k){
    queue<node *> q;
    q.push(root);
    q.push(NULL); 
    int level=0;
    int sum=0;
    while (!q.empty()){
        node *temp = q.front();
        q.pop();
        if(temp!=NULL){
            if (level==k){
                sum = sum+temp->data;
            }
            if (temp->left){
                q.push(temp->left);
            }
            if (temp->right){
                q.push(temp->right);
            }
        }
        else if (temp == NULL){
            if (!q.empty()){ 
                q.push(NULL);
            }
            level++;
        }
        
    }
    return sum;
}
int main(){
    node *root = NULL;
    // creating a tree
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    //1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1 
    cout<<"Enter the level whose sum is needed ";
    int k;
    cin>>k;
    cout << "Sum at level "<<k<<" node is "<<endl;
    cout<<SumAtK(root,k);
    return 0;
}