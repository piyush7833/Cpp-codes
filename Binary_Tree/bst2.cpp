#include <bits/stdc++.h>
using namespace std;

// BST Node
class Node {
public:
	int val;
	Node* left;
	Node* right;
	Node(int val)
		: val(val), left(NULL), right(NULL)
	{
	}
};
void insert(Node*& root, int key)
{
	Node* node = new Node(key);
	if (!root) {
		root = node;
		return;
	}
	Node* prev = NULL;
	Node* temp = root;
	while (temp) {
		if (temp->val > key) {
			prev = temp;
			temp = temp->left;
		}
		else if (temp->val < key) {
			prev = temp;
			temp = temp->right;
		}
	}
	if (prev->val > key)
		prev->left = node;
	else
		prev->right = node;
}

int countNodes(Node* root){
    if(root==NULL){
        return 0;
    }
    return(countNodes(root->left) + countNodes(root->right)+1); //count the left suntree and then right subtree
}

int main()
{
	Node* root = NULL;
    cout<<"Insert the numer of nodes in tree ";
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int d;
        cin>>d;
        insert(root,d);
    }
	cout<<"Total number of nodes in a tree is "<<countNodes(root);
	return 0;
}
