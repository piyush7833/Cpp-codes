//approach 1 :- using two stacks but it means deQueue operation is quiet inefficient //time complexity is o(n)
//approach 2 :- use 1 stack and then use recusion for pop i.e. recusrsively store everything from stack 1, store the popped variable in variable res , push the res back to res and return res
#include<iostream>
#include<stack>
using namespace std;
class queue1{
    stack <int> s1;
    stack <int> s2;
    public:
    void enqueue(int x){
        s1.push(x);
    }
    void deque(){
        if(s1.empty()==1 && s2.empty()==1){
            cout<<"queue is empty "<<endl;
            return;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
            s2.pop();
    }
    int peek(){
        if(s1.empty()==1 && s2.empty()==1){
            cout<<"queue is empty "<<endl;
            return -1;
        }
        return s2.top();
    }
    bool empty(){
        if(s1.empty()==1 && s2.empty()==1){
            return true;
        }
        return false;
    }
};
class queue2{
    stack <int> s3;
    public:
    void enqueue(int x){
        s3.push(x);
    }
    int deque(){
        if(s3.empty()==1){
            cout<<"queue is empty "<<endl;
            return -1;
        }
        int x=s3.top();
        s3.pop();
        if(s3.empty()){
            return x;
        }
        int item = deque();
        s3.push(x);
        return item; 
    }
    bool empty(){
        if(s3.empty()==1){
            return true;
        }
        return false;
    }

};
int main(){
 queue1 q;
   int m;
   cout<<"Enter size of queue ";
   cin>>m;
   cout<<"Enter values of queue ";
   for(int i=0;i<m;i++){
    int d;
    cin>>d;
    q.enqueue(d);
   }
   cout<<"hello";
   for(int i=0;i<m;i++){
    cout<<q.peek()<<" ";
    q.deque();
   }
   cout<<endl;
   cout<<q.empty();
 queue2 q2;
   int l;
   cout<<"Enter size of queue ";
   cin>>l;
   cout<<"Enter values of queue ";
   for(int i=0;i<l;i++){
    int d;
    cin>>d;
    q2.enqueue(d);
   }
   for(int i=0;i<l;i++){
    cout<<q2.deque()<<" ";
    // q.deque();
   }
   cout<<endl;
   cout<<q2.empty();
    return 0;
return 0;
}