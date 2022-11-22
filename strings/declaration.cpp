#include<iostream>
#include<string>
using namespace std;
int main(){
string str;
cout<<"Enter your string ";
cin>>str;
cout<<"Your string is "<<endl;
cout<<str<<endl;
string str1(5,'n'); //here we have 5 times n as output //it is other way of declaring string
cout<<str1<<endl;
string str2("PiyushSingh"); //other way of declaring string
cout<<str2<<endl;
cout<<str2[4]<<endl;
//to get a line in input
string str3;
cout<<"Enter your line "<<endl;
getline(cin,str3);
cout<<str3<<endl;

return 0;
}