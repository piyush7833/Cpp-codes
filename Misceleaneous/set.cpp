//set are of two types ordered(ascending or descending / sorted) and unordered 
//ordered set contains unique elements //implemented using balanced BST //Random acess is not possible in O(1)/O(logn) similar to linked list
//unordered set
#include<iostream>
#include<set>
using namespace std;
int main(){
    //ordered set
set<int> s;
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
//another way of printing
for(auto i=s.begin() ; i!=s.end();i++){
    cout<<*i<<" ";
}
cout<<endl;  
//printing in reverse
for(auto i=s.rbegin() ; i!=s.rend();i++){
    cout<<*i<<" ";
}
cout<<endl;  

//custom comparator
set <int,greater<int>> k; //for arranging set in descending order 
int m;
cout<<"Enter size of set ";
cin>>m;
cout<<"Enter values of set ";
for(int i=0;i<m;i++){
    int d;
    cin>>d;
    k.insert(d);
}
for(auto i : k){
    cout<<i<<" ";
}
cout<<endl;

//lower_bound() returns an iterator pointing to the element in the container which is equivalent to k passed in the parameter. In case k is not present in the set container, the function returns an iterator pointing to the immediate next element which is just greater than k. If the key passed in the parameter exceeds the maximum value in the container, then the iterator returned points to the element beyond last element in the set container. 
//upper_bound() returns an iterator pointing to the immediate next element which is just greater than k. If the key passed in the parameter exceeds the maximum key in the container, then the iterator returned points to next of last element (which can be identified using set::end() function) in the set container. 
    cout<<*k.lower_bound(2)<<" ";  
    cout<<*k.lower_bound(3)<<" ";
    cout<<*k.upper_bound(3)<<" ";
    cout<<*k.upper_bound(5)<<" ";
cout<<endl;

//for erasing values in set
int c;
cout<<"Enter a value to delete from the set 2 ";
cin>>c;
k.erase(c);
k.erase(s.begin()); //erasing first value
for(auto i : k){
    cout<<i<<" ";
}
cout<<endl;
//for printing size
cout<<k.size();
return 0;
}