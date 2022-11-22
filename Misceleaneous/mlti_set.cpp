//multi set can contain duplicates //implemented using balanced bst //elements are in sorted order //random acess is not possible //present in set header
#include<iostream>
#include<set>
using namespace std;
int main(){
multiset<int> s;
int n;
cout<<"Enter size of set ";
cin>>n;
cout<<"Enter values of set ";
for(int i=0;i<n;i++){
    int d;
    cin>>d;
    s.insert(d);
}
//printing
for(auto i :s){
    cout<<i<<" ";
}
cout<<endl;
//erasing
int c;
cout<<"Enter a value to delete from the set 2 ";
cin>>c;
// s.erase(c);  //erase all values of c in set
s.erase(s.find(c));  //erase first values of c in set //we can also delete lower or upper bound of c
s.erase(s.begin()); //erasing first value
for(auto i : s){
    cout<<i<<" ";
}
cout<<endl;
return 0;
}
//time complexity of insertion , deleteion, lower/upper bopund is O(log n)
//time complexity of printing is O(nlogn) //n for finding and logn for printing