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
void sumReplace(node* &root){
    //there wiil be no changes in leaf nodes as they have no subtree
     if(root==NULL){
        return ;
     }
     sumReplace(root->left);
     sumReplace(root->right);
     if(root->left!=NULL){
        root->data+=root->left->data;
     }
     if(root->right!=NULL){
        root->data+=root->right->data;
     }
     //time complexity is O(n)
}
void levelOrdertraversal(node *&root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL); // it acts lilke spearator of levels
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp == NULL)
        { // it acts lilke spearator of levels //it symbolise that previous level gets completed
            cout << endl;
            if (!q.empty())
            { // queue still has some chid
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
int main(){
    node *root = NULL;
    // creating a tree
    root = buildTree(root);
    cout<<endl;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    //1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
    cout<<"Level order before sum replacement is "<<endl; 
    levelOrdertraversal(root);
    sumReplace(root);
    cout<<"Level order after sum replacement is "<<endl;
    levelOrdertraversal(root);
    return 0;
return 0;
}