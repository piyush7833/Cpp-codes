#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node (int val){
        data=val;
        next=NULL;
    }
};
void pushAtHead(node* &head, int val){
    node* n = new node(val);
    node* temp=head;
    head=n;
    head->next=temp;
}
void popAtHead(node* &head){
    if(head==NULL){
        cout<<"Stack is empty "<<endl;
    }
    node* temp=head;
    head=temp->next;
    delete(temp);
}
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
node* head= NULL;
cout<<"Insert size of stack ";
int n;
cin>>n;
cout<<"Enter values of stack ";
for(int i=0;i<n;i++){
    int d;
    cin>>d;
    pushAtHead(head,d);
}
display(head);
cout<<endl;
cout<<"Enter number of elements you want to remove from top ";
int m;
cin>>m;
for(int i=0;i<m;i++){
    popAtHead(head);
}
display(head);
return 0;
}