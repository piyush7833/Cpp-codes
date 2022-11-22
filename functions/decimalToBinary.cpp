#include <iostream>
#include <math.h>
using namespace std;

int bin (int n){
int ans = 0;
int x =1;
while(x<n){      //max power of n
    x *= 2;      //to get max. power of 2 till x<n
    }  
    while(x>0){
        int lastDigit = n/x;  //lastDigit is obtained as we are getting an decimal value but our return value is integer so last digit is obtained from here
        n -= lastDigit*x;  //quotient*current base updating n
        x/=2;              //updating value of x
        ans =ans*10 + lastDigit; //basicallly ans is sum of lastdigits in an ordeer so we are multiplying it by 0
    }
return ans;

}

int main(){
int n;
cout<<"Enter a number to find its binary number ";
cin>>n;
int ans=bin(n);
cout<<"Binary number of decimal number "<< n <<" is "<<ans; 


return 0;   
}