#include<iostream>
using namespace std;
int main(){
int n ;
int set[n] ;
cout<<"Enter size of your set ";
cin>>n;
cout<<"Enter values of set ";
for(int i=0;i<=n;i++){
    cin>>set[i];
}
for(int i =0; i< (1<<n); i++){
    for(int j=0; j<n;j++){
        if(i & (1<<j)){   //for i =0 and j =0 i&1<<j = 0 so nothing is printed for i=1, j=0 i &1<<j = 1 so null set is printed as set[0]=0
        cout<<set[j]<<" ";
        }
    }
    cout<<endl;
}
return 0; 
}