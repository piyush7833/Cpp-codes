#include <iostream>
#include <math.h>
using namespace std;

int search(int array[], int n, int key){
    for(int i =0; i<n; i++){   
    if(array[i]==key){
        return key;
        // return n;
     }
    }
        return -1; 

}

int main(){
int n;
cout<<"enter size of your array ";
cin>>n;
cout<<"Enter values of your array ";
int array[n];
for(int i=0; i<n; i++){
    cin>>array[i];
}
int key;
cout<<"Enter the value you want to search ";
cin>>key;
cout<< search(array,n,key)<<endl;
// if(ans==-1){
//     cout<<key<<" is not in the array"<<endl;
// }
// else{
//     cout<<key<<" is in the array"<<endl;
// }
// return 0;   
}