#include<iostream>
using namespace std;

int sort(int n){

}

int main (){
int n;
cout<<"Enter size of your array ";
cin>>n;
int array[n];
cout<<"Enter value of your arrays ";
for(int i=0;i<=n-1;i++){
    cin>>array[i];

}
    for(int i=0;i<=n-1; i++){
        for(int j = i+1; j<=n; j++){
            if ( array[j]<array[i]){
                int temp = array[j];
                array[j]=array[i];
                array[i]= temp;
            }
        }
    }
for(int i= 0; i<n; i++){
    cout<<array[i]<<" ";
}
cout<<endl;
return 0;
}