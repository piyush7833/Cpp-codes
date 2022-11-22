#include<iostream>
using namespace std;

void primeSieve(int n){
    int prime[n+1]={0}; //marking all with 0 in start
    // for(int i=0;i<=n;i++){
    //     prime[i]==0;
    // }
    for (int i=2;i<=n;i++){
        if(prime[i]==0){  //0 means unmarked
            for (int j=i*i;j<=n;j+=i){   //i*i because for next prime we have to encounter with i*i as before it is already marked
                prime[j]=1;  //1 means marked
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            cout<<i<<" ";
        }
    }cout<<endl;
}
int main(){
int n ;
cin>>n;
primeSieve(n);
return 0;
}