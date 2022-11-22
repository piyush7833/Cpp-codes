//to count number of ones in a binary number of given number
//n & n-1 have same bit as n except the right most set bit (set bit means 1 )
#include<iostream>
using namespace std;
int main(){
int n ;
int k =0;
cout<<"Enter a number to gets number of ones in it ";
cin>>n;
for(int i=0; i<=n ;i++ ){
    if(((n-i) & (n-i-1))==0){
    cout<<"Number of ones in a given number is "<<k;
    break;
    }
    else{
        k++;
    }
}
return 0;
}