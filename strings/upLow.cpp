#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

string s1= "saghafSFGghghdgfhkkoe";
string s2= "saghafSFGghghdgfhkkoe";
//different between ascai value of a and A is 32
cout<<"differnce between ascaii values of a and A is "<<'a'-'A'<<endl;
//convert into uppercase
for(int i=0;i<=s1.length(); i++){
    if(s1[i]>='a' && s1[i]<='z'){
        s1[i]-= 32;
    }
}
cout<<"uppercase string is "<<s1<<endl;


//convert into lowercase
for(int i=0;i<=s1.length(); i++){
    if(s1[i]>='A' && s1[i]<='Z'){
        s1[i]+= 32;
    }
}
cout<<"lowercase string is "<<s1<<endl;
//upper and lowercase by using function
transform(s2.begin(),s2.end(),s2.begin(), :: toupper);  //starting iterator,ending iterator, from where to capitallise
cout<<s2<<endl;
transform(s2.begin(),s2.end(),s2.begin(), :: tolower);  //starting iterator,ending iterator, from where to lowercase
cout<<s2<<endl;
return 0;
}