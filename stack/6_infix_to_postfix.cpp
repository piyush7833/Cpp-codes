#include<iostream>
using namespace std;
#define n 100
class stack{
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
int precedence (char c){
    if(c=='^'){
        return 3;
    }
    else if(c=='/' || c=='*'){
        return 2;
    }
    else if(c=='+' || c=='-'){
        return 1;
    }
    else{
        return -1;
    }
}
string postfix(string s){
     string post="";
     stack st;
     for(int i=0;i<s.length();i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A'&& s[i]<='Z')){
            post=post+s[i];
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else  if(s[i]==')'){
            while(!st.empty() && st.Top()!='('){
                post=post+st.Top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }
        else{
            while(!st.empty() && precedence(st.Top())>precedence(s[i])){
                post=post+st.Top();
                st.pop();
            }
            st.push(s[i]);
        }
     }
     while(!st.empty()){
        post=post+st.Top();
        st.pop();
     }
     return post;
}
int main(){
string infix="(a-b/c)*(a/k-l)";
cout<<postfix(infix);
return 0;
}