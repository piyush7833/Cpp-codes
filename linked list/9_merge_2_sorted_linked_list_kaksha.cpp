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
node* merge (node* &head1, node* &head2){
   node* p1=head1; 
   node* p2=head2; 
   node* dummyNode=new node(-1);  //it is not a pointer it is a new node
   node* p3=dummyNode;
   while(p1!=NULL && p2!=NULL){
    if(p1->data<p2->data){
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }
    else if(p2->data<p1->data){
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }
   } 
   while(p1!=NULL){
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
   }
   while(p2!=NULL){
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
   }
   return dummyNode->next;
}
//recursive way of merging
node* mergeR(node* &head1,node* &head2){
    if(head1==NULL){     
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    node* result;
    if(head1->data<head2->data){
        result=head1;
        result->next=mergeR(head1->next,head2);
    }
    else if(head1->data>head2->data){
        result=head2;
        result->next=mergeR(head1,head2->next);
    }
    return result;
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
// node* head3 = NULL;
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
node* head3 = merge(head1,head2);
display(head3);
node* head3R = mergeR(head1,head2);
display(head3R);
return 0;
}
//time complexity is of order of m+n 