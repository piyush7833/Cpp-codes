#include<iostream>
using namespace std;
int main(){
int n ;
cout<<"Enter a number ";
cin>>n;
int *p=&n;
int **q=&p;
cout<<"Location of "<<**q<<" is "<<*q<<endl;
cout<<"Location of "<<*q<<" is "<<q<<endl;
return 0;
}