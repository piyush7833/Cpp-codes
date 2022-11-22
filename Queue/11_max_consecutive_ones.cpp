//given an array of A of 0s and 1s , we may change k 0s int 1s //return he length of the longes contiguos aubarray that only contains 1s 
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
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
cout<<"Enter number of zeroes that can be changed into 1 ";
int k;
cin>>k;
//our window of possible sub array is like a[i...j];
//for increasing window size a[i...j++] in case number of zeroes are less than or equal to k 
//for decreasing window size a[i++...j--] in case number of zeroes are greater than k 
int zerocnt=0 , i=0,ans=0;
for(int j=0;j<v.size();j++){
    if(v[j]==0){
        zerocnt++;
        }
        while(zerocnt>k){
            if(v[i]==0){
                zerocnt--;  //decreasing window size
            }
            i++;
        }
        //zerocnt<=k
        ans = max(ans,j-i+1);
}
cout<<ans<<endl;
return 0;
}