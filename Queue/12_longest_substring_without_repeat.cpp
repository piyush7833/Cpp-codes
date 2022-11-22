#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
string s; 
cout<<"Enter the string ";
cin>>s;
vector <int> position(256,-1); //initialising vector of size 256 whose initial values are -1 // as max. ascii code value is 256
int maxlen=0, start=-1; 
for(int i=0;i<s.length();i++){
    if(position[s[i]]>start){ //initially position of s[i] and start both are -1
        start=position[s[i]]; //giving the position of s[i] as start as it would be starting index of subarray
        }
        position[s[i]]=i; //i is recent position of charecter //overwrite if char is repated //see screenshots for more clarification
        maxlen=max(maxlen,i-start); //storing the len of max subarray
    
}
cout<<maxlen<<endl;
return 0;
}