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
node* odd_even(node* &head){
    node* temp1=head;
    node* temp3=head->next;
    node* dummyNode = new node(-1);
    node* temp2= dummyNode;
    int count=1;
    while(temp1->next!=NULL && count%2!=0){
        temp2->next=temp1;
        temp2=temp2->next;
        temp1=temp1->next->next;  
        count=count+2;
    }
    count=0;
    while(temp3->next!=NULL && count%2==0){
        temp2->next=temp3;
        temp2=temp2->next;
        temp3=temp3->next->next;
        count=count+2;
    }
    return dummyNode->next;
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
cout<<"Enter size of linked list 1 ";
cin>>n;
cout<<"Insert values of linked list 1 ";
for(int i=0;i<n;i++){
    int d;
    cin>>d;
    insertAtTail(head,d);
}
display(head);
node* newHead=odd_even(head);
display(newHead);
return 0;
}
//time complexity is of order of m+n 