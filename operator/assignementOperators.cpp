#include <iostream>
using namespace std;


int main(){
int a , b , c ,e  ;
char d ;
a= 4;
b=6;
c= a>b?a-b:b-a;
cout<< c <<endl ;
d = b ;
cout<< int(d)<<endl;
e = 8 ;
cout<< sizeof(e);
cout<< &e <<endl ;
int*f = &e;
cout<<f<<endl;
return 0;   
}
// = Assigns value of right operand to left operand A=B will put value of B in A
// += Adds right operand to the left operand and assigns the result to left operand. A+=B means A = A+B
// -= Subtracts right operand from the left operand and assigns the result to left operand. A-=B means A=A-B
// *= Multiplies right operand with the left operand and assigns the result to left operand. A*=B means A=A*B
// /= Divides left operand with the right operand and assigns the result to left operand. A/=B means A=A/B


// sizeof(). Returns the size of variable If a is integer then sizeof(a) will return 4
// Condition?X:Y. Conditional operator. If condition is true, then returns value of X or else value of Y. It is also known as terneary operator
// Cast. Casting operators convert one data type to another. int(4.350) would return 4., inta(a)  would return 97, i.e. ascii value of a
// & . returns the adress of a variable &(a) gives the location of "a" where it is stored.
// * . pointer to a variable  int*b =&a  , it gives pointer "b" to the locatia where "a" is stored
// Comma (,) . Comma operator causes a sequence of operations to be performed. The value of the entire comma expression is the value of the last expression of the comma-separated list


//kon sa operator pehle chlega 
// most are left to right except few 

// Category Operator Associativity
// Postfix  ()  [] -> . ++ - - Left to right
// Unary + - ! ~ ++ - - (type)* & sizeof Right to left
// Multiplicative * / % Left to right
// Additive + - Left to right
// Shift << >> Left to right
// Relational < <= > >= Left to right
// Equality == != Left to right
// Bitwise AND & Left to right
// Bitwise XOR ^ Left to right 
// Bitwise OR | Left to right
// Logical AND && Left to right
// Logical OR || Left to right
// Conditional ?: Right to left
// Assignment = += -= *= /= %=>>= <<= &= ^= |= Right to left
// Comma , Left to right