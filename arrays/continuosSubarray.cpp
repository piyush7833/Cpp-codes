#include<iostream>
using namespace std;
int main(){
int n,s;
int array[n];
cout<<"Enter specific value "; 
cin>>s;
cout<<"Enter size of your array ";
cin>>n;
cout<<"Enter values of your array ";
for(int i = 0; i<n; i++){
    cin>>array[i];
}
int i = 0, j = 0 , st=-1 ,en=-1, sum = 0;
while(j<n && sum + array[j] <= s){
    sum += array[j];
    j++;
}
if(sum==s){
    cout<<"start and end position of required sub array is "<<i+1<<" and "<<j<<endl;
    return 0;
}
while(j<n){
    sum += array[j];
    while(sum>s){
        sum -=array[i];
        i++;
    }
    if(sum==s){
        st = i+1;
        en = j+1;
        break;
    }
    j++;
}
    cout<<"start and end position of required sub array is "<<st<<" and "<<en<<endl;
return 0;
}