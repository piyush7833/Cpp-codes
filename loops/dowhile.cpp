//it runs our program for a time and then execute it so it must run for a time
#include <iostream>
using namespace std;


int main(){

int n ;
cout<<"this program runs till you enter an odd number but not for a first entered number"<<endl;
cout<<"enter your number ";
cin >> n;

do {
    cout <<n<<endl;
    cout<<"enter your number ";
    cin >> n;
}while(n%2==0);

    
}