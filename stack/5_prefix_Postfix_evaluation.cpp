#include<iostream>
#include<math.h>
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
    void push(int val){
        if(top==n-1){
            cout<<"Stack overflow "<<endl;
        }
        arr[++top]=val;
    }
    void pop(){
        // if(top==-1){
        //     cout<<"Stack underflow"<<endl;
        // }
        top--;
    }
    int Top(){
        // if (top==-1){
        //     cout<<"Stack underflow"<<endl;
        // }
        return arr[top];
    }
    bool empty(){
        return top==-1;
    }
   
};
int prefixEvaluation(string s){
    stack st;
    for(int i=s.length();i>=0;i--){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0'); //as for evaluation we want integral value so we push integer
        }
        else{
            int op1=st.Top();
            st.pop();
            int op2=st.Top();
            st.pop();
            switch (s[i])
            {
            case '+':
                st.push(op1 + op2);
                break;
            case '-':
                st.push(op1 - op2);
                break;
            case '*':
                st.push(op1 * op2);
                break;
            case '/':
                st.push(op1 / op2);
                break;
            case '^':
                st.push(pow(op1,op2));
                break;
            
            default:
                break;
            }
        }
    }
     return st.Top();
}
int postfixEvaluation(string s){
    stack st;
    for(int i=0;i<s.length();i++){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0'); //as for evaluation we want integral value so we push integer
        }
        else{
            int op1=st.Top();
            st.pop();
            int op2=st.Top();
            st.pop();
            switch (s[i])
            {
            case '+':
                st.push(op1 + op2);
                break;
            case '-':
                st.push(op1 - op2);
                break;
            case '*':
                st.push(op1 * op2);
                break;
            case '/':
                st.push(op1 / op2);
                break;
            case '^':
                st.push(pow(op1,op2));
                break;
            
            default:
                break;
            }
        }
    }
     return st.Top();
}
int main(){
string s="-+7*45+20";
cout<<prefixEvaluation(s)<<endl;
string s2="4325*+-";
cout<<postfixEvaluation(s2)<<endl;
return 0;
}