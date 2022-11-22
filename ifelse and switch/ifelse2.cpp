#include <iostream>
using namespace std;

int main(){
    int a,b,c ;
    cout << "enter value of a ";
    cin>>a;
    cout << "enter value of b ";
    cin>>b;
    cout << "enter value of c";
    cin>>c;


    if(a>b){
        if (a>c){
            cout<< a << " is greater than " <<c ;
        }
        else{
            cout<< c << " is greater than " <<a ;
        }
    }

    else if(b>c){
        if (b>c){
            cout << b <<" is greater than " << c ;
        }
        if (c>b){
            cout << c <<" is greater than " << b ;
        }
    }
    return 0;
}