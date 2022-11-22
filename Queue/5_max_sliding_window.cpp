//doubly ended queue
//push and pop from both end
//insert and delete from the start
//header file <deque>
#include<bits/stdc++.h>
#include<deque>
using namespace std;
int main(){
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
multiset <int,greater<int>> s; //it arranges the values in descending ordder
vector <int> ans;
for(int i=0;i<k;i++){
    s.insert(a[i]);
}
ans.push_back(*s.begin());  //first value is greater
for(int i=k;i<n;i++){
    s.erase(s.lower_bound(a[i-k])); //i-x value is erased from sliding window
    s.insert(a[i]); 
    ans.push_back(*s.begin());
}
cout<<"Maximum of sliding window of size "<<k<<"is : " ;
for(auto i:ans){
    cout<<i<<" ";
}
return 0;
}
//time complexitis nlogn