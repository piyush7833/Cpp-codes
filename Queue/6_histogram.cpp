#include<iostream>
#include<vector>
using namespace std;
int main(){
int n ;
cout<<"Enter size of array ";
cin>>n;
vector <int> v(n);
cout<<"Enter values of array ";
for(auto &i: v){
    cin>>i;
}
int area;
int mxarea=INT_MIN;
for(int i=0;i<v.size();i++){
    int right=i;
    int left=i;
    while(v[right]>=v[i]){
        // if(right<n){
            right++;
        // }
        
    }
    while(v[left]>=v[i]){
        // if(left>=0){
            left--;
        // }
        
    }
    area=(right-left-1)*v[i];
    if(area>mxarea){
        mxarea=area;
    }
}
cout<<"Maximum area of rectange that can be fitted in given historgram is "<<area;
return 0;
}
//its time complexity is O(n^2)