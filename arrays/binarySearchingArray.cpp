#include <iostream>
#include <math.h>
using namespace std;
 int binarySearch(int array[], int n , int key){
     int s =0;
     int e = n;
     while(s<=e){
         int mid =(s+e)/2;
         if (array[mid]==key){
             return mid;
         }
         else if (array[mid]<key){
             s= mid+1;
         }
         else{
             e= mid-1;
         }
     }
     return -1;
 }
int main(){
int n;
cout<<"Enter size of your array ";
cin>>n;
cout<<"Enter values of your array ";
int array[n];
for(int i=0; i<n; i++){
    cin>>array[i];
    }
int key;
cout<<"Enter number to search in array " ;
cin>>key;    
cout<<binarySearch( array,n,key);
return 0;   
}