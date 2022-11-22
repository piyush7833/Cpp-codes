#include<iostream>
using namespace std;
int main(){
int n ;
bool check;
cout<<"Enter size of your charecter array ";
cin>>n;
char array[n] ;
cout<<"Enter your charecter array ";
cin>>array;
for(int i=0; i<n;i++){

    if(array[i]=array[n-i-1]){
       check= true;
    }
    else{
        check=false;
    }
}
if(check){
    cout<<array<<" is a palindrome";
}
else{
    cout<<array<<" is not a palindrome";
}
return 0;
}