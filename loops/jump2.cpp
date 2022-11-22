#include <iostream>
using namespace std;


int main() {
int n;
int i;
cout<<"enter an number to check whether it is prime or not ";
cin>>n;
for(i=2;i<=n-1; i++){
    if(n%i==0){
        cout<< n << " is a non-prime number"<<endl;
        break;
    }  
}
if(i==n){
  cout<<n << " is a prime number"<<endl;

    }

return 0;
}
 
    
