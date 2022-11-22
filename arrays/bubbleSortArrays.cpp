//we call it bubble sort because max. number settles first
#include<iostream>
using namespace std;


int main (){
int n;
cout<<"Enter size of your array ";
cin>>n;
int array[n];
cout<<"Enter value of your arrays ";
for(int i=0;i<=n-1;i++){
    cin>>array[i];
}
int counter = 1; //counter is make to use while loop efficiently
while(counter<n){
    for(int i=0;i<=n-counter; i++){
        for(int j = i+1; j<=n; j++){
            if ( array[i]>array[i+1]){
                int temp = array[i];
                array[i]=array[i+1];
                array[i+1]= temp;
            }
        }
    }
    counter++;
}
for(int i= 0; i<n; i++){
    cout<<array[i]<<" ";
}h
cout<<endl;
return 0;
}