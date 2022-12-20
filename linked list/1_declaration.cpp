// problems in array: fixed size, contiguos block of memory, inserting or deleting is costly
//benefits of linked list : size can be modified, non-contiguos memory, inertion and deltion at any point is easier
#include<iostream>
using namespace std;

//node is not a built in we need to define it
class node{
    public:
    int data;
    node* next; //type of next pointer is class node  //it is pointer which is pointing towards next node address
    node (int val){
        data=val;
        next = NULL; //value of next address iis NULL
    }
};

//insertion at tail of linked list
void InsertAtTail(node* &head, int val){//we are modifying head so we take it by reference
    node* n= new node(val);  //dynamic allocation of new node value //now its next address is stored as NULL
    if(head == NULL){
        head=n;
        return;
    }
    node* temp = head;  //temp pointer to head
    while(temp->next!=NULL){ //if address of temp is not NULL
        temp = temp->next; //passing address of next node to temp //address of new next is now NULL
    }
    temp->next = n;  //storing value of new node 
}


//insertion at head of linked list
void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next=head;  //changing the head address
    head =n;
}

void insertAtMid(node* &head, int val, int pos){
    node* temp=head;
    int count=1;
    while(count!=pos){
        count++;
        temp=temp->next;
    }
    if(count==pos){
        node* n = new node(val);
        node* p = temp->next;
        temp->next =n;
        temp->next->next=p;
    }
}
//searching in linked list
int searching(node* head, int key){
    node* temp = head;
    int pos=0;
    while(temp!=NULL){
        if(temp->data==key){
            return pos;
        }
        temp = temp->next;
        pos++;
    }
    return false;
}
void deletion(node* &head ,int key){
    node* temp=head;
    if(head==NULL){
        cout<<"Nothing to delete ";
        return;
    }
    else if (head->next==NULL){
        delete head;
    }
    while(temp->next->data!=key){
        temp=temp->next;
    }
    node* toDel=temp->next;
    temp->next=temp->next->next;
    delete toDel;
}
node* reverse(node* &head){
    node* previous =NULL;
    node* current = head;
    node* Next ;
    while(current!=NULL){
        Next=current->next;
        current->next=previous;
        previous=current;
        current=Next;
    }
    return previous;
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

node* head =NULL;
InsertAtTail(head,1);
InsertAtTail(head,3);
InsertAtTail(head,4);
display(head);
insertAtHead(head,2);
display(head);
insertAtMid(head,10,2);
display(head);
cout<<"element is present at index "<<searching(head, 4)<<endl;

//inserting at tail
for(int i=0;i<5;i++){
    int d;
    cin>>d;
    InsertAtTail(head,d);
}
display(head);
return 0;
}