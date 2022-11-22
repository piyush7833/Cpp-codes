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
int ans =2;
int pd = array[1] - array[0];
int j=2;
int curr = 2;
while(j<n){
    if (pd == array[j]-array[j-1]){
        curr++;        
    }
    else{
        pd = array[j]-array[j-1];
        curr=2;
    }
    j++;
    ans= max(curr,ans);
}
cout<<"length of maximum arithemetic array is "<<ans<<endl;
return 0;
}