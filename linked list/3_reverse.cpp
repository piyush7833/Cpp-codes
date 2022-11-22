#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node (int val){
        data=val;
        next = NULL; 
    }
};
void InsertAtTail(node* &head, int val){
    node* n= new node(val);  
    if(head == NULL){
        head=n;
        return;
    }
    node* temp = head; 
    while(temp->next!=NULL){
        temp = temp->next; 
    }
    temp->next = n;  
}
//iterative way of reversing
node* ireverse(node* &head){//returning new head pointer
     node* previous = NULL;
     node* current = head;
     node* Next;
     while(current!=NULL){
      Next=current->next;
      current->next = previous;
      previous=current;
      current=Next;
     }
     return previous;
}
//recursive way of reversing
node* rreverse(node* &head){
    if(head==NULL || head->next==NULL){
        return head;  //at the end of linked list value stored is NULL
    }
   node* newhead = rreverse(head->next); //we keep head node with us and pass others for rversing //ab jo sbse pehle value ayegi vo sbse last value ki address hogi kyuki last vla sbse last mein gya hain #LIFO
   head->next->next = head;   //we need to change head next next link and head next link as head next next have no reference now and head next is pointing towards original next element
   head->next=NULL;
   return newhead;
}


void display(node* head){ //we are not modifying head so we take it by value
    node* temp = head;
    while(temp!=NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
    }
    cout<<endl;
}


int main(){
int n ;
node* head =NULL;
cout<<"enter size of linked list ";
cin>>n;
cout<<"Enter values of linked list ";
for(int i=0;i<n;i++){
    int d;
    cin>>d;
    InsertAtTail(head,d);
}
display(head);
cout<<"Reversed linked list is "<<endl;
node* inewHead = ireverse(head);
display(inewHead);
node* rnewHead = rreverse(inewHead);
display(rnewHead);
return 0;
}