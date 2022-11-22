#include<iostream>
using namespace std;
int main(){
int n,m ;
int array[n][m] ;
cout<<"Enter rows and colomns of your matrix ";
cin>>n>>m;
cout<<"Enter values of your row and coloumn ";
for(int i=0<i ; i<n;i++){
    for(int j=0;j<n;j++){
        cin>>array[i][j];
    }
}
int rs =0;
int re =n-1;
int cs =0;
int ce =m-1;
//spiral order print
while(rs<=re || cs<=ce){
    //for rs
    for(int col = cs; col<=ce ; col++){
        cout<<array[rs][col]<<" ";
    }
    rs++;
    //for ce 
    for(int row = rs; row<=re ; row++){
        cout<<array[row][ce]<<" ";
    }
    ce--;
    //for re 
    for(int col = ce; col>=cs ; col--){
        cout<<array[re][col]<<" ";
    }
    re--;
    //for cs 
    for(int row = re; row>=rs ; row--){
        cout<<array[row][cs]<<" ";
    }
    cs++;
}
return 0;
}