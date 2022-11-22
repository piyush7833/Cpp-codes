#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;    }
};
void insertAtTail(node* &head, int val){
    node* n = new node(val);
    node* temp=head;
    if(head==NULL){
        head=n;
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void merge(node* &head1, node* &head2,node* &head3){
    node* ptr1=head1;
    node* ptr2=head2;
    node* ptr3=head3;
    while(ptr1!=NULL || ptr2!=NULL){
    if(ptr1->data>ptr2->data){
        ptr3=ptr2;
        ptr2=ptr2->next;
        ptr3=ptr3->next;
    }
    else if(ptr2->data>ptr1->data){
        ptr3=ptr1;
        ptr1=ptr1->next;
        ptr3=ptr3->next;
    }
    }
    if(ptr1==NULL){
        while(ptr2!=NULL){
        ptr3=ptr2;
        ptr2=ptr2->next;
        ptr3=ptr3->next;
        }
    }
    else if (ptr2==NULL){
        while(ptr1!=NULL){
        ptr3=ptr1;
        ptr1=ptr1->next;
        ptr3=ptr3->next;
        }
    }
    ptr3->next=NULL;
}
void display(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
node* head1 = NULL;
node* head2 = NULL;
node* head3 = NULL;
int n,m ;
cout<<"Enter size of linked list 1 ";
cin>>n;
cout<<"Insert values of linked list 1 ";
for(int i=0;i<n;i++){
    int d;
    cin>>d;
    insertAtTail(head1,d);
}
display(head1);
cout<<"Enter size of linked list 2 ";
cin>>m;
cout<<"Insert values of linked list 2 ";
for(int i=0;i<m;i++){
    int d;
    cin>>d;
    insertAtTail(head2,d);
}
display(head2);
merge(head1,head2,head3);
display(head3);
return 0;
}