#include<iostream>
#include<climits>
using namespace std;
int main(){
//brutforce approach
int n ;
int array[n];
cout<<"Enter size of your array ";
cin>>n;
cout<<"Enter values of your array " ;
for(int i=0;i<n; i++){
cin>>array[i];
}
int maxSum = INT_MIN;
for(int i=0;i<n;i++){
    for (int j=i;j<n;j++){
        int sum=0;
            for(int k=i;k<=j;k++){
            // cout<<array[k];
            sum += array[k];
        }
    // cout<<endl;
    maxSum=max(maxSum,sum);
    }
}
cout<<maxSum;
return 0;
}