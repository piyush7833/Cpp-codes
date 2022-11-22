#include<iostream>
using namespace std;
int main(){
//kaddanes algorithm
int n ;
int array[n];
cout<<"Enter size of your array ";
cin>>n;
cout<<"enter values of your array " ;
for(int i=0;i<n; i++){
cin>>array[i];
}
int currSum =0;
int maxSum =INT_MIN;
for(int i=0;i<n;i++){
    currSum+=array[i];
    if(currSum<0){
        currSum=0;
    }
    maxSum=max(currSum,maxSum);
}
cout<<maxSum;
return 0;
}