#include <iostream>
#include <math.h>
using namespace std;

void fibe(int n){
    int t1=0;
    int t2 =1;
    int nextTerm;
    for(int i=0;i<=n; i++){
        cout<<t1;
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return;

}

int main(){
int n;
cout<<"Enter an number to print its fibenacci sequence ";
cin>>n;
fibe(n);


return 0;   
}