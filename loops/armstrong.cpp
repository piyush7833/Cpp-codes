// an number is an armstrong number if sum of cubes of all digits of a number is equal to same number
#include <iostream>
#include <math.h>
using namespace std;


int main(){
int n;
cout<<"Enter an number ";
cin>>n;
int originaln= n;
int sum=0;
while(n>0){
    int lastdigit = n%10;
    sum += pow(lastdigit, 3); 
    n= n/10;
}
if (sum==originaln){
    cout<<originaln <<" is an armstrong number"<<endl;
}
else{
    cout<<originaln<<"is not an armstrong number"<<endl;
}
return 0;   
}