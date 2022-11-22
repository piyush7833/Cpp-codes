#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter size of your array ";
cin>>n;
int array[n];
cout<<"Enter values of your array ";
for(int i=0;i<n;i++){
    cin>>array[i];
}
int csum =0;
for(int i=0;i<n;i++){
    csum=0;
    for(int j=i; j<n;j++){
        csum = csum + array[j];
        cout<<"Sum of subarray is "<<csum<<endl;
    }
}
return 0;
}