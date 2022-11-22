//find number of consecutive days for which prices of stock was less than or equal to before
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
int n ;
cout<<"Enter number of days of stocks ";
cin>>n;
vector <int> v(n);
vector <int> ans;
for(auto &i:v){
    cin>>i;
}
int k=1;
for(int i=0;i<v.size();i++){
    k=1;
    for(int j=i-1;j>=0;j--){
        if(v[i]>=v[j]){
            k++;
        }
        else{
            k=k;
            goto next;
        }
    }
    next:
    ans.push_back(k);
}
for(auto e:ans){
    cout<<e<<" ";
}
return 0;
}