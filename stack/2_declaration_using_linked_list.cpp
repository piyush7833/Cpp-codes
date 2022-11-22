#include<iostream>
using namespace std;
class node{
    public:
    node* next;
    int data;
    node (int val){
        data = val;
        next=NULL;
    }
};
// class stack{
//     public:
    void push(node* &head, int val){
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
    void pop(node* &head){
        if(head==NULL){
            cout<<"All values are poped"<<endl;
        }
        node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp=NULL;
        delete(temp->next);
    }
    void display(node* head){
        node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        cout<<temp->data;
        // pop(head);
        // display(head);
    }
// };
int main(){
node* head= NULL;
cout<<"Insert size of stack ";
int n;
cin>>n;
cout<<"Enter values of stack ";
for(int i=0;i<n;i++){
    int d;
    cin>>d;
    push(head,d);
}
display(head);
// cout<<"Enter values you want to delete ";
// int m;
// cin>>m;
// for(int i=0;i<m;i++){
//     int d;
//     cin>>d;
//     pop(head);;
// }

return 0;
}