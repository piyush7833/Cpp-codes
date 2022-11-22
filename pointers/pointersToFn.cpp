#include<iostream>
using namespace std;
void increment(int n){ //different variable it is local variable of fn //call by value
    n+=1;
}
void increment2(int *d){ //call by reference  //stack have fix size heap not have fix size
//we can reuse the dangling pointer
    *d+=1;
}
void swap(int *a, int *b){
    int temp = *b;
    *b=*a;
    *a=temp;
}
int main(){
int c=2 ;
increment(c);
cout<<c<<endl;  //value of a changes but original a not change here so in cout it would be same //here we are passing by value
//if we send adrees or pointer of variable then pointer can acess througgh anywhere and modify it


//incrementing by pointer 
int d=2;
int *dptr = &d;
increment2(dptr);
cout<<d<<endl;


//example by swaping 
int a=2;
int b=4;
int *aptr =&a;
int *bptr =&b;
cout<<"a is "<<a<<" b is "<<b<<endl;
swap(aptr,bptr); //swapping by pointer  or swap(&a,&b);
cout<<"swaped a is "<<a<<" swaped b is "<<b<<endl;
return 0;
}