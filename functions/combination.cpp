#include <iostream>
#include <math.h>
using namespace std;

int fact(int n){
    int  factorial = 1;
    for(int i=2; i<=n; i++){
        factorial = factorial*i;
    } 
    return factorial;
}

int main(){
int n, r;
cout<<"ENter value of n ";
cin>>n;
cout<<"Enter value of r ";
cin>>r;
long int ans = fact(n)/(fact(r) * fact(n-r));
cout<<"number of combinations are "<<ans<<endl;

return 0;   
}