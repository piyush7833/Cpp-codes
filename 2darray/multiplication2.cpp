#include<iostream>
using namespace std;
int main (){


int n1,n2,n3,n4;
cout<<"Enter number of rows and coloumns of first matrix ";
cin >> n1 >> n2 ;
cout<<"Enter number of rows and coloumns of second matrix ";
cin >> n3 >> n4 ;
int m1[n1][n2]; int m2[n3][n4]; int ans[n1][n4];
if(n2==n3){


cout<<"Enter values of first matrix"<<endl;
for(int i=0; i<n1; i++) {
for(int j=0; j<n2; j++)
cin >> m1[i][j];
}
cout<<"Enter values of second matrix"<<endl;
for(int i=0; i<n3; i++) {
for(int j=0; j<n4; j++)
cin >> m2[i][j];
}
for(int i=0; i<n1; i++) {
for(int j=0; j<n3; j++)
ans[i][j] = 0;
}
for(int i=0; i<n1; i++) {   //iterating over  row of first matrix
for(int j=0; j<n3; j++)     //iterating over coloumn of second matrix
{
for(int k=0; k<n2; k++) {    //iterating over rows and multiplying and storing values
ans[i][j] += m1[i][k]*m2[k][j];
}
}
}
cout<<"Multiplication of given matrix is "<<endl;
for(int i=0; i<n1; i++) {   
for(int j=0; j<n4; j++)     
cout << ans[i][j] <<" ";    
cout << endl;
}
}
else{
    cout<<"Multiplication of given order matrix is not possible ";
}
}
    


