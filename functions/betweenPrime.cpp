#include <iostream>
#include <math.h>
using namespace std;



bool isPrime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
int a , b;
cout<<"Enter two numbers to find prime numbers in between them ";
cin>>a>>b;
for(int i = a; i<=b;i++){
if(isPrime(i)){
    cout<<i<<" is a prime number"<<endl;
}
}
return 0;   
}