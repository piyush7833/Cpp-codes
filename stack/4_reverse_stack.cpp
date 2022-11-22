//one way is to create two stack and just push and pop but it needs extra memory optimise approach is use recurssion
#include<iostream>
using namespace std;
#define n 100
class stack{
    int* arr;
    int top;
    public:
    stack(){
        arr=new int[n];
        top=-1;
    }
    void push(int x){
        if(top==n-1){
            cout<<"Stack overflow "<<endl;
        }
        arr[++top]=x;
    }
    void pop(){
        if(top==-1){
            cout<<"stack underflow"<<endl;
        }
        top--;
    }
    int Top(){
        if(top==-1){
            cout<<"stack underflow"<<endl;
        }
        return arr[top];
    }
    bool empty(){
        return top==-1;
    }
};
void insertAtBottom(stack &st,int ele){
    if(st.empty()){
        st.push(ele);
        return;
    }
    int topele=st.Top();
    st.pop();
    insertAtBottom(st,ele);
    st.push(topele);
}
void reverse(stack &st){
    if(st.empty()){
        return;
    }
    int ele=st.Top();
    st.pop();
    reverse(st);
    insertAtBottom(st,ele);
}

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
reverse(st);
    while(!st.empty()){
        cout<<st.Top()<<" ";
        st.pop();
    }cout<<endl;

return 0;
}
