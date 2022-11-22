#include<iostream>
#include<algorithm>
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
string prefix(string s){
     string pre="";
     stack st;
     for(int i=s.length();i>=0;i--){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A'&& s[i]<='Z')){
            pre=s[i]+pre;
        }
        else if(s[i]==')'){
            st.push(s[i]);
        }
        else  if(s[i]=='('){
            while(!st.empty() && st.Top()!=')'){
                pre=st.Top()+pre;
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }
        else{
            while(!st.empty() && precedence(st.Top())>precedence(s[i])){
                pre=st.Top()+pre;
                st.pop();
            }
            st.push(s[i]);
        }
     }
     while(!st.empty()){
        pre=st.Top()+pre;
        st.pop();
     }
    //  reverse(pre.begin(),pre.end());
     return pre;
}
int main(){
string infix="(a-b/c)*(a/k-l)";
cout<<prefix(infix);
return 0;
}