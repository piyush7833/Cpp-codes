#include <iostream>
using namespace std;


int main(){
int a, b ;
char button ;
cout<<"calculate your values ";
cin>> a >> button >> b;
if(button == '+'){
    cout<< a + b ;
}
else if(button == '-'){
    cout<< a - b ;
}
else if(button == '*'){
    cout<< a*b ;
}
else if(button == '/'){
    cout<< a/b ;
}

return 0;   
}