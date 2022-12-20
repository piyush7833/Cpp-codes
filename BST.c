#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *root = NULL;

void insertLeft(struct node * newnode){
    struct node *temp = root;
    if(root->left == NULL){
        root->left = newnode;
        return;
    }
    check:
    if(temp->left==NULL && newnode->data <= temp->data){
        temp->left = newnode;
        return;
    }
    else if(temp->right==NULL && newnode->data > temp->data){
        temp->right = newnode;
        return;
    }

    if (newnode->data <= temp->data) {
        temp=temp->left;
        goto check;
    }
    else if(newnode->data > temp->data){
        temp = temp->right;
        goto check;
    }
}

void insertRight(struct node * newnode){
    struct node *temp = root;
    if(root->right == NULL){
        root->right = newnode;
        return;
    }
    check:
    if(temp->left == NULL && newnode->data <= temp->data){
        temp->left = newnode;
        temp=newnode;
        return;
    }
    else if(temp->right == NULL && newnode->data > temp->data){
        temp->right = newnode;
        temp = newnode;
        return;
    }
    
    if (newnode->data <= temp->data) {
        temp=temp->left;
        goto check;
    }
    else if(newnode->data > temp->data){
        temp = temp->right;
        goto check;
    }
}

void makeTree(int val){
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->left = NULL;
    newnode->right = NULL;
    if(root==NULL){
        root = newnode;
        return;
    }
    if(val<=root->data)
    insertLeft(newnode);
    else
    insertRight(newnode);
}

void inorderTreeWalk(struct node *ptr){
    if(ptr != NULL){
        inorderTreeWalk(ptr->left);
        printf("%d\t",ptr->data);
        inorderTreeWalk(ptr->right);
    }
    else{
        return;
    }
}

void preorderTreeWalk(struct node *ptr){
    if(ptr != NULL){
        printf("%d\t",ptr->data);
        preorderTreeWalk(ptr->left);
        preorderTreeWalk(ptr->right);
    }
    else{
        return;
    }
}

void postorderTreeWalk(struct node *ptr){
    if(ptr != NULL){
        postorderTreeWalk(ptr->left);
        postorderTreeWalk(ptr->right);
        printf("%d\t",ptr->data);
    }
    else{
        return;
    }
}

struct node* search(int val){
    struct node *temp = root;
    while(temp!=NULL){
        if(temp->data == val)
            return temp;
        if(temp->data > val)
            temp = temp->left;
        else if(temp->data < val)
            temp = temp->right;
    }
    printf("ERROR! Couldn't find entry!!!");
    return NULL;
}

struct node* successor(struct node* ptr){
    if(ptr->right == NULL)
        return ptr->left;
    else if(ptr->left == NULL)
        return ptr->right;
    struct node* temp = ptr->right;
    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}

struct node* BSTDelete(struct node* root,int val){
    if(root->data > val)
        root->left = BSTDelete(root->left,val);
    else if(root->data < val)
        root->right = BSTDelete(root->right,val);
    else{
        if(root->right == NULL){
            struct node* temp = root->left;
            free(root);
            return temp;
        }
        else if(root->left == NULL){
            struct node* temp = root->right;
            free(root);
            return temp;
        }
        struct node* temp1 = root->right;
        while(temp1->left != NULL){
            temp1 = temp1->left;
        }
        root->data = temp1->data;
        root->right = BSTDelete(root->right, temp1->data);
        }
    return root;
}

int main(){
    makeTree(56);
    makeTree(26);
    makeTree(200);
    makeTree(18);
    makeTree(28);
    makeTree(190);
    makeTree(213);
    makeTree(12);
    makeTree(24);
    makeTree(27);
    inorderTreeWalk(root);
    root = BSTDelete(root,24);
    printf("\n");
    inorderTreeWalk(root);
return 0;
}