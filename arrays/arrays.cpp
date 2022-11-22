#include <iostream>
#include <math.h>
using namespace std;


int main(){
int array[4]={10,20,783,833};
cout<<"3rd value of array is " <<array[2]<<endl;
int n;
cout<<"Enter size of an array you want ";
cin>>n;
int array2[n];
for(int i=0; i<n; i++){
    cout<<"Enter "<<i<<"th value of an array ";
    cin>>array2[i];
}
cout<<"Your array is ";   //we are using for loop in output as we don't know what is the user input of value n
for(int i=0; i<n; i++){
    cout<<array2[i]<<" ";
}



return 0;   
}