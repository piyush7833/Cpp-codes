#include<iostream>
using namespace std;
int main(){

int n ;
int array[n];
cout<<"Enter size of your array ";
cin>>n;
cout<<"enter values of your array " ;
for(int i=0;i<n; i++){
cin>>array[i];
}
int currSum=0;
int maxSum = INT_MIN;
for(int i=0;i<n;i++){
    currSum += -(array[i]);
    if(currSum<0){
    currSum=0;
    }
    maxSum=max(currSum,maxSum);
}
int maxrSum = 0;
for(int i=0;i<n;i++){
    maxrSum += array[i];
}
maxrSum = maxrSum - maxSum;
return 0;
}