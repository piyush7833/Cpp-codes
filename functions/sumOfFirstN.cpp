#include <iostream>
#include <math.h>
using namespace std;

int sumn(int n){
    int sumofn = n * (n+1) /2;
    return sumofn;
}

int main(){
int n;
cout<<"Enter an number to get sum of first n natural numbers ";
cin>>n;
int ans = sumn(n);
cout<<"sum of first "<<n<<" natural numbers are "<<ans;


return 0;   
}