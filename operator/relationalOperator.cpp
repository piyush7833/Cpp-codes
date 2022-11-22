#include <iostream>
using namespace std;


int main(){
 int n ;
 cout<<"Enter a number ";
 cin>> n ;
 if(n>10){
     cout<< n << " is greater than 10 "<<endl;
 }
 else if(n==10){
     cout<< n << " is equal to 10 "<<endl;
 }
 else{
     cout<< n << " is less than 10 "<<endl;
 }


return 0;   
}
// == Gives true if two operands are equal A==B is not true
// != Gives true if two operands are not equal A!=B is true
// > Gives true if left operand is more than right operand A>B is not true
// < Gives true if left operand is less than right operand A<B is true
// >= Gives true if left operand is more than right operand or equal to it A>=B is not true
// <= Gives true if left operand is more than right perand or equal to it A<=B