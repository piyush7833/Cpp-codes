//it is quiet similar to bubble sort
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter size of your array ";
cin>>n;
cout<<"Enter values of your array ";
int array[n];
for(int i=0; i<n; i++){
    cin>>array[i];
}
for(int i=1;i<n;i++){
    int currentNo = array[i];  //currentNo is just like temp
    int j = i-1;
    while(array[j]>currentNo && j>=0){        //it will insert the biggest number at end
        array[j+1] = array[j];
        j--;
    }
    array[j+1]= currentNo;

}
for(int i= 0; i<n; i++){
    cout<<array[i]<<" ";
}
return 0;
}