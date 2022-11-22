#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main(){

  // your code goes here
  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      string s;
      cin>>s;
       string s1 =s.substr(0,n/2);
       string s2 =s.substr(n/2);
       if(strcmp(s1,s2)){
           cout<<"YES"<<endl;
       }
       else{
           cout<<"NO"<<endl;
       }
  }
return 0;
}