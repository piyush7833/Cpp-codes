#include <iostream>
#include <cmath>
using namespace std;


int main(){
int n;
bool flag;
cout<<"Enter an number ";
cin>>n;
//instead of checking till n-1 if we check till sqrt of n then also it will clear that it is prime or non-prime because if a number is dividing n then its sqrt also divides n
for(int i=2;i<sqrt(n); i++){
    if(n%i==0){
        cout<<n<<" is a non-prime number "<<endl;
        flag=1;
        break;
    }
// for(int i=2;i<n; i++){
//     if(n%i==0){
//         cout<<n<<" is a prime number "<<endl;
//         flag=1;
//         break;
//     }
    // else{
    //     cout<<n<<" is a non-prime number"<<endl;
    //     break;
    // }
}
if(flag==0){
    cout<<n<< " is a prime number";
}

return 0;   
}