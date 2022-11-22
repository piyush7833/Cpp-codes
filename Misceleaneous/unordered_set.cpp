//contains unique elements //implemented using hashing //elements are not in sorted order //random acess is not possible //present in unordered set
#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
unordered_set<int> s;
int n;
cout<<"Enter size of set ";
cin>>n;
cout<<"Enter values of set ";
for(int i=0;i<n;i++){
    int d;
    cin>>d;
    s.insert(d);
}
//printing //it prints in reverse order/random order
for(auto i :s){
    cout<<i<<" ";
}
cout<<endl;
//erasing
int c;
cout<<"Enter a value to delete from the set 2 ";
cin>>c;
s.erase(c);  //erase all values of c in set
s.erase(s.begin()); //erasing first value
for(auto i : s){
    cout<<i<<" ";
}
cout<<endl;
return 0;
}
//time complexity of insertion and deletion is O(1);
// it have no any fnction suc as lower and upper bound 