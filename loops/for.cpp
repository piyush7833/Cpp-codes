//we have to create counter variable in for loop so that it stop at an counter variable
#include <iostream>
using namespace std;


int main(){

int n;
cout<<"enter a number ";
cin>> n;
int sum = 0;
//for(int counter=initialisation; counter= condition;counter update;)
for(int counter=1; counter<=n; counter++) {
    //result
    sum = sum + counter;
}
//output
cout<<"sum of all number till "<< n <<" is " <<sum<<endl;
return 0;    
}