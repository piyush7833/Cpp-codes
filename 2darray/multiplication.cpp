#include <iostream>
using namespace std;

int main(){
int n,m ;
int c,d ;
int a1[n][m];
int a2[c][d];


cout<<"Enter number of rows and coloumns of first matrix ";
cin>>n>>m;
cout<<"Enter values of first matrix";
for(int i=0;i<n;i++){
    for(int j =0; j<m; j++){
        cin>>a1[i][j];
    }
}
cout<<"Enter number of rows and coloumns of second matrix ";
cin>>c>>d;
cout<<"Enter values of second matrix";
for(int i=0;i<c;i++){
    for(int j =0; j<d; j++){
        cin>>a2[i][j];
    }
}
int ans[n][d];
for(int i=0;i<n;i++){
    for(int j =0; j<d; j++){
        ans[i][j]=0;
    }
}



if(m==c){
for(int i=0;i<n;i++){ //iterating over  row of first array
    for (int j=0;j<c;j++){  //iterating over coloumn of second array
        for(int k=0;k<d;k++){
         ans[i][j] += a1[i][k]*a2[k][j];
        }
    }

}

cout<<"Multiplication of given matrix is "<<endl;
for(int i=0;i<n;i++){
    for(int j =0; j<d; j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}
}
else{
    cout<<"Multiplication of given order matrix is not possible ";
}

return 0;
}