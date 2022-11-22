#include <iostream>
#include <math.h>
using namespace std;

bool trip(int a, int b, int c){
    int x = max(a, max (b, c));
    int y, z;
    if(x==a){
         y= b;
         z =c; 
        }
        else if(x==b){
         y=a;
         y = c;
        }   
        else{
            y=a;
            z=b;
        }
    if(x*x== y*y + z*z){
        return true;
    }
    else{
        return false;
    }
}

int main(){
int a, b, c;
cout<<"Enter three numbers to check whether they are pythagoran triplet or not ";
cin>>a>>b>>c;
if(trip(a,b,c)){
    cout<<a<<" "<<b<<" "<<c<<" is a pythagoran triplet" ;
}
else{
    cout<<a<<" "<<b<<" "<<c<<" is not a pythagoran triplet" ; ;
}


return 0;   
}