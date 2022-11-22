#include<iostream>
using namespace std;
#define n 100
class stack{
    string* arr;
    int top;
    public:
    stack(){
        arr = new string[n];
        top=-1;
        }
        void push(char x){
            if(top==n-1){
                cout<<"Stack overflow "<<endl;
            }
            arr[++top]=x;
        }
        void pop(){
            if(top==-1){
                cout<<"stack underflow "<<endl;
                return ;
            }
            top--;
        }
        string Top(){
            if(top==-1){
                cout<<"Stack underflow "<<endl;
                return " ";
            }
            return arr[top];
        }
        bool empty(){
            if(top==-1){
                return top==-1;
            }
        }
    
};
int main(){
stack st;
cout<<"Enter string ";
string s;
getline(cin,s);
int m;
m=s.length();
for(int i=0;i<m;i++){
    char c;
    c=s[i];
    st.push(c);
}
cout<<"Reversed string is ";
for(int i=0;i<m;i++){
cout<<st.Top();
st.pop();
}
cout<<endl;

return 0;
}