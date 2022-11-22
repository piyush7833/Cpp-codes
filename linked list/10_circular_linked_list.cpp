#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void insertAtHead(node* &head, int val){
    node* n = new node(val);
    if(head==NULL){
        n->next=n; //as n is starting and ending node both;
        head=n;
    }
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;

}
void insertAtTail(node* &head,int val){
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }
    node* n= new node(val);
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}
void display(node* head){
    node* temp = head;
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
     while(temp!=head);
  }  
int main(){
node* head=NULL;
cout<<"Enter size of linked list ";
int m;
cin>>m;
for(int i=0;i<m;i++){
    int d;
    cin>>d;
    insertAtTail(head,d);
}
display(head);
insertAtHead(head,8);
cout<<endl;
display(head);
return 0;
}