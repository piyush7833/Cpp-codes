#include <iostream>
using namespace std;


int main(){
int n ;
cout<<"Enter a number ";
cin >> n;

if (n%2 == 0 && n%3 == 0){
    cout<< n << " is divisible by 2 and 3 both" <<endl;
}
else if(n%2==0 || n%3==0){
    cout<< n << " is divisible by any of 2 or 3 "<<endl;
    if(n%2==0){
        cout<< n <<" is divisible by 2"<<endl;
    }
    else{
        cout<< n << " is divisible by 3"<<endl;
    }
}
else{
    cout<< n << " is divisible by none of 2 and 3"<<endl;
}

return 0;   
}

// && AND operator. Gives true if both operands are non- zero (A && B) is false
// || OR operator. Gives true if atleast one of the two operands are non-zero. (A || B) is true
// ! NOT operator. Reverse the logical state of operand !A is true