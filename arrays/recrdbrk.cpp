#include<iostream>
using namespace std;
int main(){
int n;
int array[n];
cout<<"Enter size of your array ";
cin>>n;
cout<<"Enter values of your array ";
array[n]=-1;
for(int i=0;i<n;i++){
    cin>>array[i];
}
int recbrk = array[0];

for(int i = 0; i<n; i++){
if(array[i]>array[i+1] && array[i]>recbrk){
    recbrk = array[i];
    cout<<"record breaking day is "<<recbrk<<endl;
}
}
return 0;
}