#include<iostream>
using namespace std;
int getBit(int n, int i){
    return ((n & (1<<i))!=0);
} 
int setBit(int n, int i){
    return (n | (1<<i));
} 
int clrBit(int n, int i){
    int mask = ~(1<<i);  //we are doing complement of 1 as it make every position 0 except the ith position
    return (n & mask);
} 
int upBit(int n, int i, int u){
    int mask = ~(1<<i);  //we are doing complement of 1 as it make every position 0 except the ith position 
    n = n & mask ;   //firstly clear the bit we need to update
    return(n | (u<<i));  //make or with value we need to set  //like in set bit we did it with 1 but now we do it with any other value
} 

int main(){
int n, i, u ;
cout<<"Enter a number ";
cin>>n;
cout<<"Enter a position whose bit value you want ";
cin>>i;
cout<<"Enter a bit value you want to update ";
cin>>u;
        cout<<"value of bit at position "<< i<<" is "<<getBit(n,i)<<endl;
        cout<<"value of n after setting 1 at position "<< i<<" is "<<setBit(n,i)<<endl;
        cout<<"value of n after clearing at position "<< i<<" is "<<clrBit(n,i)<<endl;
        cout<<"value of n after updating value "<<u<<" at position "<< i<<" is "<<upBit(n,i,u)<<endl;
        

return 0;
}