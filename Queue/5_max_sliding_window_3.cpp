#include<iostream>
#include<vector>
using namespace std;
int main(){
int n ;
cout<<"Enter size of array ";
cin>>n;
cout<<"Enter values of array ";
vector <int> v(n);
for(auto &i:v){
    cin>>i;
}
cout<<"Enter size of sliding window ";
int k;
cin>>k;
vector <int> ans;
for(int j=0;j<n;j++){
int mx=INT_MIN;
if(k+j<=n){
for(int i=j;i<k+j;i++){
    if(v[i]>mx){
        mx=v[i];
    }
}
ans.push_back(mx);
}
}
for(auto e:ans){
    cout<<e<<" ";
}
return 0;
}