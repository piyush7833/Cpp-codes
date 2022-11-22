#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main(){
string s ="1234562354358";
sort(s.begin(),s.end(),greater<int>()); //3rd index is passed as we want string in descending order
cout<<"Biggest num formed by string is "<<s<<endl;


return 0;
}