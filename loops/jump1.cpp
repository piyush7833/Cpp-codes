// it is used to control the flow of loop on meeting some specified condition 
//it uses break and continue
//continue statement is used to skip to the next iterations
//break is used to terminate the loop
#include <iostream>
using namespace std;


int main(){
int date ;
int love = 1000 ;
for (int date=1;date<=31;date++){
    if(date%7==0){
        continue;
    }
    if(love>=10000){
        cout<<"overload of love is not good" <<endl;
        break;
    }
    cout<<"Neha can go with piyush and enjoy"<<endl;
    love = love + 3000;
    cout<< "love is " <<love <<endl;
}
return 0;


    
}