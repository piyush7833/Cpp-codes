#include <iostream> // it is pre pocessor director it includes c++ files which perform certain tasks
using namespace std; //it is used to tell compiler that we are using standard namespace

int main (){ //main is used to tell compiler that from which point execution of our code starts
    int a; //declaration of a
    a=12; //initialisation of a
    cout << "size of integer a is " <<sizeof(a)<<endl; // we are printing our output using cout
    // <<endl or \n is used to break line i.e. to print in other line
    // semicolon is used to tell compiler that our statement is ended 


    float b ;
    b=12.34643376465867545; //initialisation of b
    cout << "size of decimal value b is " <<sizeof(b)<<endl;

    char c ;
    // c= # ; //initialisation of c
    cout << "size of charecter c is " <<sizeof(c)<<endl;
    
    bool d ;
    cout << "size of boolean d is " <<sizeof(c)<<endl;

    // modifier used to modify length example
    short int(si);
    long int(li);
    cout << "size of short int is " <<sizeof(si)<<endl;
    cout << "size of long int is " <<sizeof(li)<<endl;

    return 0 ; //it is used to tell compiler that this piece of code is ended

} //it indicates start and end of function