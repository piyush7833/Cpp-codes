#include<iostream>
using namespace std;
int main(){
// int n ;
int arr[]={10,20,30,40,50};
cout<<*arr<<endl;  //show result similar as pointer  //it prints zeroth element of array
int *ptr = arr;
for(int i=0;i<5;i++){
    cout<<"location of "<<*ptr<<" is ";
    cout<<ptr<<endl;
    ptr++;
}

//without pointer
for(int i=0;i<5;i++){
    cout<<*(arr+i)<<endl; //it is an indexing pointer so we are doing just +i not +4i
    //arr++ //it is illegal as arr is constant pointer
    //ptr++;
}


return 0;
}