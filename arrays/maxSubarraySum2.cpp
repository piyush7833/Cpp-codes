#include<iostream>
#include<climits>
using namespace std;
int main(){
//cumulative sum approach
int n ;
int array[n];
cout<<"Enter size of your array ";
cin>>n;
cout<<"Enter values of your array ";
for(int i=0;i<n; i++){
cin>>array[i];
}
int crrSum[n+1];
crrSum[0]=0;
for(int i=1; i<=n; i++){
    crrSum[i] = crrSum[i-1] + array[i-1];
}

int maxSum = INT_MIN;

for (int i=1;i<=n;i++){
    int sum =0;
    for(int j=0; j<i;j++) {
    sum = crrSum[i] - crrSum[j];
    maxSum=max(sum,maxSum);
    }
}
cout<<maxSum; 
return 0;
}