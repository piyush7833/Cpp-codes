#include<iostream>
using namespace std;





int main(){
int n;
cout<<"Enter size of your array ";
cin>>n;
int array[n];
cout<<"Enter values of your array ";
int mn= -222222;
for(int i=0;i<n;i++){
    cin>>array[i];
}
    for(int i=0;i<n-1;i++){
    if(array[i+1]>array[i]){
        cout<<array[i+1]<<" ";
    }
    else if(i<=n+1){
        cout<<array[i]<<" ";
    }
    else{
        cout<<array[i]<<" ";
        array[i+1]=array[i];
    }
    }

return 0;
}