#include <iostream>
#include <math.h>
#include <climits>
using namespace std;


int main(){
int n;
cout<<"Enter size of an array you want ";
cin>>n;
int array[n];
int minNo = INT_MAX; //we are initialising min no. with max. no. possible in c++ so that any value in array lesser than it gets store in minNo. 
int maxNo = INT_MIN;
for(int i=0; i<n; i++){
    cout<<"Enter "<<i<<"th value of an array ";
    cin>>array[i];
}
for(int i=0;i<n; i++){
    maxNo = max(maxNo, array[i]);
    minNo = min(minNo, array[i]);
    // if(array[i]>maxNo){
    //     maxNo = array[i];
    // }
    // if(array[i]<minNo){
    //     minNo = array[i];
    // }
}
cout<<"maximum number of an array is "<<maxNo<<endl;
cout<<"minimum number of an array is "<<minNo<<endl;


return 0;   
}