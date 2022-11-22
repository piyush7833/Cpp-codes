#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 
bool myCompare(pair <int, int>p1, pair <int, int>p2){
    return p1.first<p2.first ;
}
//pair helps us to allow store pair of values 
int main(){
pair<int , char> p3; //declaring pair
pair<int , int> p4;

//acessing values in pair
p3.first = 3;
p3.second = 'a';
p4.first = 3;
p4.second = 5;

//question
// reduce the given array i.e. minimise the value of array and no two values should be same and order of values will be same i.e. if min value was at index 3 then after reducing min value should be at 3
int n;
cout<<"Enter size of array ";
cin>>n;
int arr[n];
cout<<"Enter values of array ";
for(int i=0; i<n;i++){
    cin>>arr[i];
}
//stroing pair in vector
 vector <pair <int , int> > v;
for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
    // pair<int,int> p;
    // p.first=arr[i];
    // p.second=i;
    // v.push_back(p.first,p.second);
    

    //another way of doing above thing
    v.push_back(make_pair(arr[i],i));
}
sort(v.begin(),v.end(),myCompare); //sorting vector with pair;
for(int i=0;i<v.size();i++){
    arr[v[i].second]=i;  //second means original index of sorted array here as we stored it in v 
}
for(int i=0;i<v.size();i++){
    cout<<arr[i]<<" ";
}
return 0;
}