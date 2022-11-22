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
void makeCycle(node* &head, int pos){
    node* temp = head;
    node* startNode;
    int count =1;
    while(temp->next!=NULL){
    if(count==pos){
        startNode = temp; //start node mein pos ka address daal diya
    }
    temp = temp->next;
    count++;
    }
    temp->next = startNode;  //jaise hi temp->next NULL hoga hum usko null se hta ke startnode pr point kra denge
}
bool detectCycle(node* &head ){
    node* slow; 
    node* fast;
    while(fast!=NULL && fast->next != NULL){
    slow = slow->next;
    fast = fast->next->next;
    if(slow == fast){
        return true;
    }
    }
    return false; 
}
void removeCycle(node* &head){
    node* slow=head; 
    node* fast=head;
    do
    {
        slow=slow->next;
        fast=fast->next->next;
    } while (slow!=fast);
    fast = head;
    while(slow->next!=fast->next){
        slow = slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
    
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
int pos;
cout<<"Enter position to make cycle ";
cin>>pos;
makeCycle(head,pos);
cout<<detectCycle(head)<<endl;;
if(detectCycle){
    removeCycle(head);
    display(head);
}
cout<<endl;
cout<<detectCycle(head);

return 0;
}