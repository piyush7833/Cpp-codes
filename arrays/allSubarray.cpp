#include<iostream>
using namespace std;
int main(){

int n ;
int array[n];
cout<<"Enter size of your array ";
cin>>n;
cout<<"Enter values of your array " ;
for(int i=0;i<n; i++){
cin>>array[i];
}
for(int i=0;i<n;i++){
    for (int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
            cout<<array[k];
        }
    cout<<endl;
    }
}
return 0;
}