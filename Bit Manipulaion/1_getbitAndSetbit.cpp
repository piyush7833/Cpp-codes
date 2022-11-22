//For getting a bit of certain position of a certain number lets say n and i respectively (i is always less than or equal to 8 as binary digits have only 8 digits)

#include<iostream>
using namespace std;
int main(){
int n, i ,u;
cout<<"Enter a number ";
cin>>n;
cout<<"Enter a position whose bit value you want ";
cin>>i;
cout<<"Enter a bit value you want to update ";
cin>>u;
if(i<=8 && i>0){
    int p = n & (1<<i);  // if 1 is left shifted to ith position then all value is zero except ith position and when bit value of n and i gets multiplid then we get 1 or 0 if in bit value of n at position i there is 1 or 0
    
    int q = n | (1<<i);  //we are setting value 1 at position i by using or i.e. add 

    int mask = ~(1<<i);    //we have to find complement of 1 after setting 1 at positon i basically we are masking it
    int r = n & mask;  //we are setting value 0 at position i by using or i.e. add 
 
    int l = r | (u<<i)  ;     //setting bit after clearing the bit at that position


    if(p==0){
        cout<<"value of bit at position "<< i<<" is 0"<<endl;
        cout<<"value of n after setting 1 at position "<< i<<" is "<<q<<endl;
        cout<<"value of n after updating ith value "<<u<<" at position "<< i<<" is "<<l<<endl;
        
    }
    else{
        cout<<"value of bit at position "<< i<<" is 1"<<endl;
        cout<<"value of n after setting 1 at position "<< i<<" is "<<q<<endl;
        cout<<"value of n after clearing at position "<< i<<" is "<<r<<endl;
        cout<<"value of n after updating ith value "<<u<<" at position "<< i<<" is "<<l<<endl;
    }
}
else{
    cout<<"Enter value of i less than 9 and positive"<<endl;
}

return 0;
}

