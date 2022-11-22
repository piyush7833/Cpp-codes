//including two things and excluding number of commmon ways of including two things 
//how many numbers are divisible by 7 or 5 in range 1 to m
#include<iostream>
using namespace std;
int div(int n , int a , int b ){
int c1= n/a;
int c2= n/b;
int c3= n/(a*b);

return (c1+c2)-c3;
}
int main(){
int n,a,b ;
cout<<"Enter two numbers to be divisible by "<<endl;
cin>>a>>b;
cout<<"Enter number to be divided "<<endl;
cin>>n;
cout<<div(n,a,b)<<" numbers are divisible by "<<a<<" or "<<b<<endl;
return 0;
}