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
void deletionAtHead(node* &head){
    //corner case: when we are deleting the only value present in linked list i.e. first element of 1 size linked list as it wouldn't have next value
    node* toDeleteH = head;
          head=head->next;
          delete toDeleteH;
}


void deletion(node* &head, int val){
    if(head==NULL){ //if linked list is empty
        return;
    }
    else if(head->next==NULL){ //if it have only one value
        deletionAtHead(head);
        return;
    }
    node* temp = head;
    node* toDelete= temp->next;
    while(temp->next->data!=val){
        temp = temp->next; //acessing the n-1 th node
    }
    temp->next=temp->next->next; //referencing the n-1 th node to n+1 th node
    delete toDelete; //deleting the nth node
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
int key;
cout<<"Enter the value to delete from linked list ";
cin>>key;
deletion(head,key);
deletionAtHead(head);
display(head);
return 0;
}