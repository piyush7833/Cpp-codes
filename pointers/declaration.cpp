#include<iostream>
using namespace std;
int main(){
int n ;
cout<<"enter an number ";
cin>>n;
int* nptr = &n;
cout<<"Value of n is ";
cout<<*nptr<<endl;
cout<<"Location of n is ";
cout<<nptr<<endl;
*nptr=20;
cout<<"updated value of n is ";
cout<<n<<endl;
cout<<"Location of n is "; //location does not change
cout<<nptr<<endl;
nptr++;
cout<<"Increaes value of location is "<<nptr;  //it is +4 of previous as integer takes 4 bytes to store
//we only perform ++, --, +, - operations in pointer
//we declare the pointer of same type as of input
return 0;
}