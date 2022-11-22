#include<iostream>
using namespace std;

int unique(int arr[],int n){
    int xorsum =0;
    for(int i=0; i<n;i++){
        xorsum = xorsum^arr[i];
    }
    return xorsum;
}
int main(){
    int n ;
int set[n] ;
cout<<"Enter size of your set ";
cin>>n;
cout<<"Enter values of set ";
for(int i=0;i<=n;i++){
    cin>>set[i];
}
cout<<"unique number is "<<unique(set,n)<<endl;
return 0;
}