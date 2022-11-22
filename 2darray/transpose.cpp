#include<iostream>
using namespace std;
int main(){
int n;
int array[n][n];
cout<<"Enter number of rows or colomns (only one as transpose is valide for square matrix only)";
cin>>n;
cout<<"Enter values of your rows and coloumns ";
for(int i = 0 ; i<n; i++){
    for(int j = 0; j<n; j++){
        cin>>array[i][j];
    }
}
cout<<"Your matrix is "<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<array[i][j]<<" ";
    }
        cout<<endl;
}
cout<<"transpose of your matrix is "<<endl;
for(int j=0;j<n;j++){
    for(int i=0;i<n;i++){
        cout<<array[i][j]<<" ";
    }
        cout<<endl;
}
// cout<<"transpose of your matrix is "<<endl;
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         cout<<array[j][i]<<" ";
//     }
//         cout<<endl;
// }

return 0;
}