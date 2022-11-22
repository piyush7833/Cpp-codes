#include<iostream>
using namespace std;
#define n 100
class stack{
    // int n=5;
    int* arr;
    int top;
    public:
    stack(){
        arr = new int[n];
        top=-1;
    }
    void push(int x){
        if(top==n-1){
            cout<<"Stack overflow "<<endl;
            return;
        }
       arr[++top]=x;
    }
    void pop(){
        if(top==-1){
            cout<<"Stack underflow"<<endl;
        }
        top--;
    }
    int Top(){
        if(top==-1){
            cout<<"Stack Underflow "<<endl;
            return -1;
        }
        return arr[top];
    }
    bool empty(){
        return top==-1;
    }
};
int main(){
stack st;
cout<<"Enter size of stack ";
int m;
cin>>m;
cout<<"Enter elements of stack ";
for(int i=0;i<m;i++){
    int b;
    cin>>b;
    st.push(b);
}
cout<<"Top most element of stack is ";
cout<<st.Top();
cout<<endl;
cout<<"Enter number of element you want to delete from stack ";
int k;
cin>>k;
for(int i=0;i<k;i++){
    st.pop();
}
cout<<st.Top()<<endl;
cout<<st.empty()<<endl;
return 0;
}