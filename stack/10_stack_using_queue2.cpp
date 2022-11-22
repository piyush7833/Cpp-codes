//in this approach pop is quiet inefficient
#include<iostream>
#include<queue>
using namespace std;
class stack{
    int N;
    queue <int> q1;
    queue <int> q2;
    public:
    Stack(){
        N=0;
    }
    void Push(int val){
        q1.push(val);
        N++;
    }
    void Pop(){
        if(q1.empty()){
            cout<<"stack underflow"<<endl;
        }
        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        N--;
        queue <int> temp = q1;
        q1=q2;
        q2=temp;
    }
    int Top(){
        if(q1.empty()){
            cout<<"stack underflow"<<endl;
            return -1;
        }
        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }
        return q1.front();
        // int ans = q1.front();
        // q2.push(ans);
        // queue <int> temp = q1;
        // q1=q2;
        // q2=temp;
    }
    int size(){
        return N;
    }
    bool Empty(){
        if(q1.empty()){
            return true;
        }
        return false;
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
    st.Push(b);
}
cout<<"Top most element of stack is ";
cout<<st.Top();
cout<<endl;
cout<<"Enter number of element you want to delete from stack ";
int k;
cin>>k;
for(int i=0;i<k;i++){
    st.Pop();
}
cout<<st.Top()<<endl;
st.Pop();
cout<<st.Top()<<endl;
cout<<st.Empty()<<endl;
return 0;
}