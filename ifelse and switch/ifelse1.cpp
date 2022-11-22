#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE //not part of code, used to beautify input and output and store input and output in some other files
        freopen("input.txt" , "r" , stdin);
        freopen ("output.txt", "w", stdout);
    #endif


int savings ;
cin>>savings ; 

    if (savings>1000){
    if(savings>7000){
        cout<<"roadtrip with neha"<<endl;
    }
    else if(savings>5000){
        cout<< "shopping with neha"<<endl;
    }
    else if(savings>4000){
        cout<< "dinner with neha"<<endl;
    }
}
else if(savings>3000){
    cout<<"fun with lala"<<endl;
}
else{
    cout<<"Party with friends in contribution"<<endl;
}
}