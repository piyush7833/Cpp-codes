#include<iostream>
using namespace std;
int main(){
int n;
int array[n+1];
cout<<"Enter size of your array ";
cin>>n;
cout<<"Enter values of your array ";
for(int i=0;i<n;i++){
    cin>>array[i];
}
array[n]=-1;
if(n==1){
    cout<<"number of record breaking day is 1 "<<endl;
}
int ans=0;
int mx=-1;
for(int i=0;i<=n;i++){
    if(array[i]>mx && array[i]>mx){
        ans++;
    }
        mx=max(array[i], mx);
        
}
cout<<"number of record breaking days are "<<ans<<endl;;
return 0;
}