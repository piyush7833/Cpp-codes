#include<iostream>
#include<climits>
#include<cmath>
using namespace std;
int main(){
int n;
int ans = -1;
int array[n];
cout<<"Enter size of your array";
cin>>n;
cout<<"Enter values of your array ";
for(int i=0;i<n;i++){
    cin>>array[i];
}
const int N =1000;
bool check[N];
for(int i=0;i<N; i++){
    check[i]=false;
}
for(int i=0; i<n; i++){
    if(array[i]>=0){
        check[array[i]]=true;
    }
}
for(int i =0; i<N;i++){
    if (check[i]==false){
        ans = i;
        break;
    }
}
cout<<"smallest positive missing number in array is "<<ans<<endl;
}