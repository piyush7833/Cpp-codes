//given a mathemeatical expression find whether it have rebundant parenthesis or not. It contain +,-,/,* operators 
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
string s;
cout<<"Enter your string ";
cin>>s;
stack <char> st;
int flag=0;
for(int i=0;i<s.length();i++){
    if(s[i]=='(' || s[i]=='{' || s[i]=='['){
        st.push(s[i]);
    }
    else if(s[i]>='a' || s[i]<='z' ||s[i]>='A' || s[i]<='Z' || s[i]>='0' || s[i]<='9' || s[i]=='+'|| s[i]=='-'){
        flag=1;
        // continue;
    }
    else if(s[i]=='/' || s[i]=='*'){
        flag=1;
        // continue;
    }
    else if(s[i]==st.top()){
        st.pop();
        flag=1;
        // continue;
    }
    else{
        flag=0;
        break;
    }
}
if(!st.empty()){
    flag=0;
}
if(flag==0){
    cout<<"Rebundant Parenthesis"<<endl;
}
else{
    cout<<"Correct Parenthesis "<<endl;
}
return 0;
}