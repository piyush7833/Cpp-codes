// #include<bits/stdc++.h>
#include<iostream>
#include<stack>
#include<vector>
//rebundant means extra brackets are used if yes then print number of rebundant braces
using namespace std;
int main(){
int n ;
string s;
stack <char> st; 
cout<<"Enter string ";
cin>>s;
bool ans=false;
int k=0;
for(int i=0;i<s.length();i++){
    if(s[i]=='+' or s[i]=='-' or s[i]=='*' or s[i]=='/'){
        st.push(s[i]);
    }
    else if(s[i]=='('){
        st.push(s[i]);
    }
    else if(s[i]==')'){
        if(st.top()=='('){
            ans=true;
            k++;
        }
        while(st.top()=='+' or st.top()=='-' or st.top()=='*' or st.top()=='/'){
            st.pop();
        }
        st.pop();
    }
}
if(ans==1){
    cout<<k<<endl;
}
else{
    cout<<0<<endl;
}
return 0;
}