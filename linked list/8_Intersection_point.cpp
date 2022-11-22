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
void intersect(node* &head1, node* &head2, int pos){
    node* temp1=head1;
    node* temp2=head2;
    while(pos--){
        temp1=temp1->next;
    }
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=temp1;

}
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
int check(node* head1, node* head2,int n, int m){
    node* temp1;
    node* temp2;
    // int count=0;
    int k=0;
    if(n>m){
        k=n-m;
        temp1=head1;
        temp2=head2;
        }
    else if(m>n){//temp1 is longer linked list
        k=m-n;
        temp1=head2;
        temp2=head1;
    }
        while(k){
            temp1=temp1->next;  //if k is greater than length of longer list
            if(temp1==NULL){
                return -2;
            }
            k--;
    }
    while(temp1!=NULL && temp2!=NULL){
        if(temp1==temp2){
            return temp1->data;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
        return -1;
}
void display(node* head){
    node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
node* head1 = NULL;
node* head2 = NULL;
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
int pos;
cout<<"Enter position to intersect ";
cin>>pos;
intersect(head1,head2,pos);
display(head2);
display(head1);
cout<<check(head1,head2,n,m)<<endl;
return 0;
}
//time complexity is equalt to max(m,n)