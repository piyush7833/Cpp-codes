#include <iostream>
#include <math.h>
using namespace std;
 int binarySearch(int array[], int n , int key ,int s,int e){
    int mid =(s+e)/2;
     if(s>e){
        return -1;
     }
     else{
        if(array[mid]==key){
            return mid;
        }
        else if(array[mid]<key){
          s= mid+1;
        }
        else{
            e=mid-1;
        }
     }
    binarySearch(array,n,key,s,e);
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
cout<<binarySearch( array,n,key,0,n);
return 0;   
}