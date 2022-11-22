#include <iostream>
using namespace std;

// void print (int num){
//     cout<<num<<endl;
//     return;
// }
int add(int num1, int num2){

    int sum = num1 + num2;
    return sum;
}

int main () {
    int a , b ;

    cout<<"Enter first number ";
    cin>>a;
    cout<<"Enter first number ";
    cin>>b;
    cout<<add(a,b);

    return 0;
}

 
