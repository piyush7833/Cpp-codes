#include <iostream>
#include <math.h>
using namespace std;

// int fact(int n){
//     int factorial = 1;
//     for(int i=2; i<=n; i++){
//         int factorial = factorial * i;
//     }
//     return factorial;
// }

int main(){
long long int n;
cout<<"Enter an number to find its factorial ";
cin>>n;
long long factorial = 1;
for(int i=2; i<=n; i++){
        factorial = factorial * i;
    }
cout<<"factorial of "<<n<<" is "<<factorial<<endl;



return 0;   
}