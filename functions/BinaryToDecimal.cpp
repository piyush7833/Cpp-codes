#include <iostream>
#include <math.h>
using namespace std;

int bin(int n){
int ans = 0;
int x =1;
while(n>0){
    int y = n%10; //to get reminder of value n i.e. last digit of binary number
    ans += x*y;   //as last digit is pow(2,0) i.e. 1 so we multiply our answer by it
    x *= 2;       // we need to update our value of x as now it have values pow(2,1)
    n /= 10;      //to get second digit of our binary number as decimal part gets off
}
return ans;
}

int main(){
int n;
cout<<"Enter a binary number to find its decimal number ";
cin>>n;
int ans=bin(n);
cout<<"Decimal value of binary number "<< n <<" is "<<ans; 


return 0;   
}