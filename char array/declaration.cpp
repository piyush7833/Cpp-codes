//here array is of size n+1 as we are adding a null charecter
#include<iostream>
using namespace std;
int main(){
char array[100] ="Mango" ;
int i=0;
while(array[i] != '\0'){
    cout<<array[i]<<endl;  //to get each charecter of array in one line
    i++;
}

return 0;
}