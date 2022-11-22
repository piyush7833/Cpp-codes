#include<iostream>
using namespace std;
int main(){
int n,m;
cout<<"Enter number of rows and coloumns respectively ";
cin>>n>>m;
int array[n][m];
cout<<"Enter values of your rows and colomns respectively ";
for(int i = 0 ; i<n; i++){
    for(int j = 0; j<m; j++){
        cin>>array[i][j];
    }
}
cout<<"Your matrix is "<<endl;
for(int i = 0; i<n; i++){
    for(int j = 0; j<m; j++){
        cout<<array[i][j]<<" ";
    }
    cout<<endl;
}

int x;
cout<<"Enter the number you want to search ";
cin>>x;
for(int i = 0; i<n; i++){
    for(int j = 0; j<m; j++){
        if(array[i][j]==x){
            cout<<"The number " <<x << "is found at row "<<i+1<<" and coloumn "<<j+1<<endl;
        }
        else{
            cout<<"The number " <<x << "is not found"<<endl;
        }
    }
}
return 0;
}