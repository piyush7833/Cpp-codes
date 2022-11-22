//approah 1:- making a push operation costly:-
#include<iostream>
#include<queue>
using namespace std;
class Stack{
    int N;
    queue <int> q1;
    queue <int> q2;
    public:
    Stack(){
        N=0;
    }
    void Push(int val){
        q2.push(val);
        N++;
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        queue <int> temp=q1;
        q1=q2;
        q2=temp;
    }
    void Pop(){
        q1.pop();
        N--;
    }
    int Top(){
        if(q1.empty()){
            return -1;
        }
        return q1.front();
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
Stack st;
// st.Push(1);
// st.Push(2);
// st.Push(3);
// st.Push(4);
// cout<<st.top()<<endl;
// st.Pop();
// cout<<st.top()<<endl;
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
cout<<st.Empty()<<endl;
return 0;
}