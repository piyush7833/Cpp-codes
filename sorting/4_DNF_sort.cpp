#include<iostream>
using namespace std;
//divide array in 3 region 0,1 and 2
//check value of array if 0 then swap arr[low] and arr[mid], low++ and mid++
//if 1 mid++ //if 2 swap arr[mid] and arr[high],high-- 
//this sort is only for 0,1 and 2
void swap(int arr[],int i,int j){
    int temp;
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void dnf(int arr[],int n){
     int l=0;
     int m=0;
     int h=n-1;
     while(m<=h){
        if(arr[m]==0){
            swap(arr,l,m);
            l++;
            m++;
        }
        else if(arr[m]==2){
            swap(arr,m,h);
            h--;
        }
        else{
            m++;
        }
     }
}
int main(){
int n ;
cout<<"Enter size of array ";
cin>>n;
int arr[n];
cout<<"Enter values of array ";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
dnf(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}
//time complexity of dnf sort is o(n)