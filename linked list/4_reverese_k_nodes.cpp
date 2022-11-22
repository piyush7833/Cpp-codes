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
//reverse k nodes at at time
node* reverseK(node* &head,int k){
    node* previous = NULL;
    node* current = head;
    node* Next;
    int count =0;
    while(current!=NULL &&count<k){
    Next=current->next;  //reversing nodes
    current->next = previous;
    previous=current;
    current=Next;
    count++;  //counting number of nodes reversed  //k nodes get reversed
    }
    if(Next!=NULL){
       head->next=reverseK(Next,k);//reversing rest of values 
    }
    return previous;  //as it is pointing towards new head
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
int m;
cout<<"Enter value of nodes which you want to reverse ";
cin>>m;
cout<<"Reversed linked list is "<<endl;
node* newHead=reverseK(head,m);
display(newHead);

return 0;
}