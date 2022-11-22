#include<iostream>
using namespace std;
class node{
    public:
    string name;
    int roll;
    int age;
    node* next;
    node (string n1, int n2, int n3){
        name=n1;
        roll=n2;
        age=n3;
        next=NULL;
    }
};
void insertAtTail(node* &head, string n1, int n2, int n3){
    node* n= new node(n1,n2,n3);
    if(head == NULL){
        head=n;
        return;
    }
    node* temp = head;
    while(temp!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void display(node* head, int n){
    node* temp=head;
    int count =0;
    while(count!=n){
        cout<<"Name of student is "<<temp->name<<endl;
        cout<<"Roll number of student is  "<<temp->roll<<endl;
        cout<<"Age of student is "<<temp->age<<endl;
        temp=temp->next;
        count++;
    }
}
int main(){
node* head=NULL;
cout<<"Insert size of student class ";
int n;
cin>>n;
for(int i=0;i<n;i++){
    string n1;
    int n2,n3;
    cout<<"Enter name of student ";
    cin>>n1;
    cout<<"Enter roll no. of student ";
    cin>>n2;
    cout<<"Enter age of student ";
    cin>>n3;
    insertAtTail(head,n1,n2,n3);
}
display(head,n);
return 0;
}