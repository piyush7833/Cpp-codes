//two pointer approach sort the array //traverse the array and fix the first element of the triplet. The problem reduces to find if there exist two elements having sum equal to x-arr[i]
// overall time complexit = sorting nlogn + iterating each element and applying two sum problem n^2 so overall it is n^2  
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
int n ;
cout<<"Enter size of an array ";
cin>>n;
cout<<"Enter values of an array ";
vector <int> v(n);
for(auto &i:v){
    cin>>i;
}
cout<<"Enter value whose sum need to be finded ";
int k;
cin>>k;
bool found =false ;
sort (v.begin(),v.end());
for(int i=0;i<v.size();i++){
    int lo =i+1,hi=n-1;
    while(lo<hi){
        int current = v[i]+v[lo] + v[hi];
        if(k==current){
            found = true;
            break;
        }
        else if(current<k){
            lo++;
        }
         else{
            hi--;
        }   
}
}
if(found){
    cout<<"TRUE"<<endl;
}
else{
    cout<<"FALSE"<<endl;
}
return 0;
}