#include <iostream>
#include <math.h>
using namespace std;

string hexa(int n){
    int x =1;
    string ans =" ";
    while(x<n){
        x*=16;
    }
    while(x>0){
        int lastDigit = n/x;
        n-=lastDigit*x;
         x /=16;
         if (lastDigit<=9){
             ans = ans + to_string(lastDigit); //to_string changes the integral value to string
         }
         else{
        char c ='A' + lastDigit-10;   // char A + 1 = B, char A + 2 = C and so on..
        ans.push_back(c);
         }
    }
    return ans;
}
int main(){
int n;
cout<<"Enter an number to find its hexadecimal number ";
cin>>n;
string ans = hexa(n);
cout<<"Hexadecimal of number "<<n<<" is "<<ans;


return 0;   
}