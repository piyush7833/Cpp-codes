#include<iostream>
#include<deque>
#include<vector>
using namespace std;
int main(){
deque <int> dq;

int n,k ;
cout<<"Enter size of array ";
cin>>n;
cout<<"Enter window size ";
cin>>k;
cout<<"Enter value of array ";
vector <int> a(n);
for(auto &i:a){
    cin>>i;
}
vector <int> ans;
for(int i=0;i<k;i++){
    while(!dq.empty() && a[dq.back()]<a[i]){
        dq.pop_back();
    }
    dq.push_back(i);
}
ans.push_back(a[dq.front()]);
for(int i=k;i<n;i++){
    if(dq.front()==i-k){
        dq.pop_front(); //deleting the first most value after its iteration;
    }
    while(!dq.empty() && a[dq.back()]<a[i]){
        dq.pop_back();
    }
    dq.push_back(i);
    ans.push_back(a[dq.front()]);
}
for(auto i:ans){
    cout<<i<<" ";
}
return 0;
}