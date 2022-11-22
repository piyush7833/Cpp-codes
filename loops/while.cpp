//we not need to maintain a counter variable it runs till our condition is true 
#include <iostream>
using namespace std;


int main(){
int n;

cout<<"this program runs till you enter an odd number"<<endl;
cout<<"enter your number ";
cin >> n;

while(n%2==0){
    cout <<n<<endl;
    cout<<"enter your number ";
    cin >> n;
}

   
}