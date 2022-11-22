#include <iostream>
#include <math.h>
using namespace std;

int reverse(int n){
int ans =0;
while(n>0){
    int lastdigit = n%10; //we get last digit as a reminder when a number is divided by 10
    ans= ans*10 + lastdigit;
    n=n/10;
}
return ans;
}

int add(int a, int b){
    int ans = 0;
    int prevCarry = 0;
    while(a>0 && b>0){
        if(a%2==0 && b%2==0){
            if(prevCarry==1){
                ans = ans*10 + prevCarry;
                prevCarry = 0;
            }
        }
        else if((a%2==0 && b%2==1)||(a%2==1 && b%2==0)){
            if(prevCarry==1){
                ans = ans*10 + 0;
                prevCarry = 1;
            }
            else if(prevCarry==0){
                ans= ans*10 + 1;
                prevCarry =0;
            }
        }
        else{
            ans = ans*10 + prevCarry;
            prevCarry =1;
        }
        a/=10;  //updating a
        b/=10;//updating a
    }
    while(a>0){
        if(prevCarry==1){
            if(a%2==1){
            ans = ans*10 + 0;
            prevCarry =1;
            }
            else{
            ans = ans*10 + 1;
            prevCarry =0; 
            }
        }
        else if(prevCarry==0){
            ans = ans*10 + (a%2);
            prevCarry =0;
        }
        a/10;
    }
    while(b>0){
        if(prevCarry==1){
            if(b%2==1){
            ans = ans*10 + 0;
            prevCarry =1;
            }
            else{
            ans = ans*10 + 1;
            prevCarry =0; 
            }
        }
        else if(prevCarry==0){
            ans = ans*10 + (b%2);
            prevCarry =0;
        }
        b/10;
    }
    if(prevCarry =1){
        ans = ans*10 + 1;
    }
    else{
        ans = ans*10 + 0;
    }
    ans= reverse(ans);
return ans;
}



int main(){
int a,b;
cout<<"Enter first binary number ";
cin>>a;
cout<<"Enter first second number ";
cin>>b;
int ans = add(a,b);
// ans = reverse(ans);
cout<<"Sum of binary numbers "<<a<<" and "<<b<<" is "<<ans;


return 0;   
}