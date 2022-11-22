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
        void push(string x){
            if(top==n-1){
                cout<<"Stack overflow "<<endl;
            }
            arr[++top]=x;
        }
        void pop(){
            if(top==-1){
                cout<<"stack underflow "<<endl;
                return;
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
void reverse(string s){
    stack st;
    for(int i=0;i<s.length();i++){
        string word ="";
        while(s[i]!=' ' && i<s.length()){
            word +=s[i];
            i++;
        }
        st.push(word);
    }
    while(!st.empty()){
        cout<<st.Top()<<" ";
        st.pop();
    }cout<<endl;
}
int main(){
stack st;
cout<<"Enter string ";
string s;
getline(cin,s);
reverse(s);
//  for(int i=0;i<s.length();i++){
//         string word ="";
//         while(s[i]!=' ' && i<s.length()){
//             word +=s[i];
//             i++;
//         }
//         st.push(word);
//     }
//     while(!st.empty()){
//         cout<<st.Top()<<" ";
//         st.pop();
//     }cout<<endl;
return 0;
}