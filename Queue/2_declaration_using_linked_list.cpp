//we use linked list because it helps us to save space as we don't need to declare size earlier and this also helps us to counter queue overflow
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
class queue{
    node* front;
    node* rear;
    public:
    queue(){
        front=NULL;
        rear=NULL;
    }
    void enqueue(int x){
        node* n =new node(x);
        if(front==NULL){
            rear=n;
            front=n;
        }
        rear->next=n;
        rear=n;
    }
    void dequeue(){
        if(front==NULL){
            cout<<"queue underflow "<<endl;
        }
        node* toDel=front;
        front=front->next;
        delete toDel;
    }
    int peek(){
        if(front==NULL){
            cout<<"queue underflow "<<endl;
            return -1;
        }
        return front->data;
    }
    bool empty(){
        if(front==NULL){
            return true;
        }
        return false;
    }
};
int main(){
 queue q;
   int m;
   cout<<"Enter size of queue ";
   cin>>m;
   cout<<"Enter values of queue ";
   for(int i=0;i<m;i++){
    int d;
    cin>>d;
    q.enqueue(d);
   }
   for(int i=0;i<m;i++){
    cout<<q.peek()<<" ";
    q.dequeue();
   }
   cout<<endl;
   cout<<q.empty();
    return 0;
return 0;
}