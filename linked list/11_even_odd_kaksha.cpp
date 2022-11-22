//put even position elements after odd position elements in linked list
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
void odd_even(node* &head){
    node* odd=head;
    node* even=head->next;
    node* evenStart=even;
    while(odd->next!=NULL && even->next!=NULL){
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=evenStart;
    if(odd->next==NULL){
        even->next=NULL;
    }
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
node* head = NULL;
int n,m ;
cout<<"Enter size of linked list ";
cin>>n;
cout<<"Insert values of linked list ";
for(int i=0;i<n;i++){
    int d;
    cin>>d;
    insertAtTail(head,d);
}
display(head);
odd_even(head);
display(head);
return 0;
}
//time complexity is of order of n