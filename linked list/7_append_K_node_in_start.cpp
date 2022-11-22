//append last k nodes to start of linked list
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
void insertAtTail(node* &head,int val){
    node* n = new node(val);
    node* temp =head;
    if(head==NULL){
        head=n;
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
node* append(node* &head, int pos, int n){
    node* temp=head;
    int count=1;
    while((n-count)!=pos){
        count++;
        temp=temp->next;
    }
        node* newTail;
        node* newHead;
    if(count==n-pos){
        newTail=temp;
        newHead=temp->next;
        newTail->next=NULL;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=head;
        return (newHead);
    }

}
void display(node* head){ 
    node* temp = head;
    while(temp!=NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
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
cout<<"Enter position from where last k node needed to be appended ";
cin>>m;
node* newHead;
newHead=append(head,m,n);
display(newHead);
return 0;
}