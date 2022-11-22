#include <iostream>
using namespace std;


int main(){
int n, reverse;
reverse=0;
cout<<"Enter an number to be reversed ";
cin>>n;
while(n>0){
    int lastdigit = n%10; //we get last digit as a reminder when a number is divided by 10
    reverse = reverse*10 + lastdigit;
    n=n/10;
}
cout<<reverse;

return 0;   
}