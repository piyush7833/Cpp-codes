#include<iostream>
using namespace std;
int no(int n){
    int c =0;
    while(n){
        n = n & n-1;
        c++;
    }
    return c;
}
int main(){
int n ;
cout<<"Enter a number to gets number of ones in it ";
cin>>n;
cout<<"Number of ones in a given number is "<<no(n);
return 0;
}