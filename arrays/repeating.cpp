#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter size of your array ";
cin>>n;
cout<<"Enter values of your array ";
int array[n];
for(int i=0; i<n; i++){
    cin>>array[i];
}
for(int i = 0; i<n; i++){
    for (int j=i;j<n;j++){
        if(array[i]==array[j] && i!=j){
            cout<<"smallest index of repeated value "<<array[i] <<" is "<< i<<endl;
        }
    }
}
return 0;
}