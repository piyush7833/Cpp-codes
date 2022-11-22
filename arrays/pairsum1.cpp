#include<iostream>
using namespace std;
bool pairsum(int array[], int n, int m){
 for(int i=0;i<n-1; i++){
     for(int j=i+1;j<n;j++){
         if(array[i]+array[j]==m){
             cout<<"Pair found is"<<array[i]<<" and "<<array[j]<<endl;
             cout<<"pair found at indices "<< i<<" and "<<j<<endl;
             return true;
         }
     }
 }
 return false;
}
int main(){
int n,m ;
int array[n];
cout<<"Enter specific value you want ";
cin>>m;
cout<<"Enter size of your array " ;
cin>>n;
cout<<"enter values of your array ";
for(int i=0;i<n; i++){
cin>>array[i];
}
cout<<pairsum(array,n,m);
return 0;
}