#include<iostream>
using namespace std;
#define n 100
class stack {
    char* arr;
    int top;
    public:
    stack(){
        arr=new char[n];
        top=-1;
    }
        void push(char x){
        if(top==n-1){
            cout<<"Stack overflow"<<endl;
        }
        arr[++top]=x;
    }
    void pop(){
        if(top==-1){
            cout<<"Stack underfflow"<<endl;
        }
        top--;
    }
    char Top(){
        if(top==-1){
            cout<<"All elements are shown"<<endl;
        }
        return arr[top];
    }
    bool empty(){
        return top==-1;
    }
};
string balanced(string s){
    stack st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('||s[i]=='['||s[i]=='{'){
            st.push(s[i]);
        }
        else if( s[i]==')'){
            if(!st.empty() && st.Top()=='('){
                st.pop();
            }
            else{
                return "Unbalanced";
            }
        }
        else if(s[i]==']'){
            if(!st.empty() && st.Top()=='['){
                st.pop();
            }
            else{
                return "Unbalanced";
            }
        }
        else if(s[i]=='}'){
            if(!st.empty() && st.Top()=='{'){
                st.pop();
            }
            else{
                return "Unbalanced";
            }
        }
    }
    if(!st.empty()){
        return "unbalanced";
    }
    else{
        return "balanced";
    }
    
}
int main(){
string s="[{()}";
cout<<balanced(s);

return 0;
}