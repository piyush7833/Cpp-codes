#include<iostream>
using namespace std;

int gcd1(int n, int m){ //GCD of a-b,b and gcd of a,b both are same
    while((n-m)!=0){
        if(n>m){
            n=n-m;
        }
        else{
            m=m-n;
        }
    }
    return n;
}
int gcd2(int n, int m){ //GCD of a%b,b and gcd of a,b both are same
int b;
    while(m!=0){
        if(n>m){
            int rem = n%m;
            n=m;
            b=n;
            m=rem;
        }
        else{
            int rem = m%n;
            m=n;
            b=m;
            n=rem;    
        }
}
    return b;
}
int main(){
int n,m ;
cout<<"Enter two numbers to find their GCD ";
cin>>n>>m;
cout<<"GCD of "<<n<<" and "<<m<<" is "<<gcd1(n,m)<<endl;
cout<<"GCD of "<<n<<" and "<<m<<" is "<<gcd2(n,m)<<endl;
return 0;
}