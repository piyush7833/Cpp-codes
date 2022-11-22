#include<iostream>
using namespace std;
int main(){
int n ;
int set[n] ;
cout<<"Enter size of your set ";
cin>>n;
cout<<"Enter values of set ";
for(int i=0;i<=n;i++){
    cin>>set[i];        //xor of two same values are equal to zero
}
// int x =0;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if((set[i]&(~(set[j]))==0 )&& j<n-1){
            continue;
        }
        else if(set[i]&(~(set[j]))!=0 ){
            break;
        }
        else if((set[i]&(~(set[j]))==0 ) && (j==n-1)){
            cout<<set[j];
        }
        // else{
        //     cout<<"no unique values"<<endl;
        // }
    }


        // instead of doing this use XOR
        // x =x^set[i];   
        // if(x==0){
        //     cout<<"unique number is "<<set[i]<<endl;;
        // }
        // else{  
        // }
}
return 0;
}