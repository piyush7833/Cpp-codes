#include<iostream>
using namespace std;
bool pow2(int n){
    return( n && !(n & n-1));  //&& for case when number is 1
}
int main(){
int n ;
cout<<"Enter a number to check that it is power of 2 or not ";
cin>>n;

if(pow2(n)){
     cout<<n<<" is power of 2 ";
}
else{
    cout<<n<<" is not power of 2 ";
}

return 0;
}