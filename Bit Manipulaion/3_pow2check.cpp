#include<iostream>
using namespace std;
int main(){
int n ;
cout<<"Enter a number to check that it is power of 2 or not ";
cin>>n;
int p = n & n-1;   // if n is power of 2 then it have only one 1 in its binary which is at right most and n-1 have all values 1 after the rightmost 1 of n i.e 8 binary value = 1000 and 7 binary value is 0111 so for sure n & n-1 =0
if(p== 0){        //or n have only one set bit and n-1 have all setbit after that posiition
    cout<<n<<" is power of 2 ";
}
else{
    cout<<n<<" is not power of 2 ";
}
return 0;
}