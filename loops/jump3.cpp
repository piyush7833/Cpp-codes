#include <iostream>
using namespace std;


int main(){
int a , b;
cin>>a>>b;
for(int n =a ; n<=b ; n++){
    int i;
    for(i=1 ; i<=n; i++){
   if(n%i==0 && i!=n){
       cout<< n << " is a non-prime number"<<endl;
   }
    
     if(n==i){
        cout<< n << " is a prime number"<<endl;
    }
    
} 

}
return 0;   
}