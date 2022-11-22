#include<iostream>
#include <algorithm>
#include<math.h>
using namespace std;
bool pairsum(int array[], int n, int m){
int low =0;
int high = n-1;
while(low<high){
    if(array[low]+array[high]<m){
        low++;
    }
    else if(array[low]+array[high]>m){
        high--;
    }
    else if(array[low]+array[high]==m){
            cout<<"Pair found is "<<array[low]<<" and "<<array[high]<<endl;
             cout<<"pair found at indices "<< low<<" and "<<high<<endl;
             return true;
    }
}
return false;
}

int main(){
int n,m ;
int array[n];
cout<<"Enter specific value you want ";
cin>>m;
cout<<"Enter size of your array ";
cin>>n;
cout<<"enter values of your array ";
for(int i=0;i<n; i++){
cin>>array[i];
}

cout<<pairsum(array,n,m);
return 0;
}