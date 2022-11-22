#include <iostream>
using namespace std;


int main(){
int n,  l;
cout<<"Enter an number ";
cin>>n;

for(int q=n/2;q<=1;q/2){
    l=q%2;
    cout<<l;
}




return 0;   
}