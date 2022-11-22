//polymorphism means many forms
//it have two types 1. compile time(static or early binding) 2. Run time:virtual functions (dynamic or late binding)
//compile time further have two tpes 1.Function Overloading 2.Operator Overloading
//function overloading different function have same name but different number of argument or different type of argument
//example of operator overloading is addition of Complex number
//virtual function if derived class and parent class both have a function name same then the the function which we make virtual is not called bycompiler

#include<iostream>
using namespace std;
//function overloading
class A{
    public:
    void fun(){
        cout<<"Function with no argument"<<endl;
    }
    void fun(int n){
        cout<<"Function with int argument "<<n<<endl;
    }
    void fun(string s){
        cout<<"Function with string argument "<<s<<endl;
    }
};  


//operator overloading
class Complex{
    int real;
    int imag;
    public:
    Complex (int r=0, int i=0){
        real =r;
        imag =i;
    }

    Complex operator + (Complex const &obj){
        Complex res;
        res.imag = imag + obj.imag;
        res.real = real + obj.real;
        return res;
    }
    void display(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }

};



//run time //virtual function
class base {
    public:
    virtual void print(){
        cout<<"This is base class print function"<<endl;
    }
    void display(){
        cout<<"This is base class display function"<<endl;
    }
};
class derived: public base{
    public:
    void print(){
        cout<<"This is derived class print function"<<endl;
    }
    void display(){
        cout<<"This is derived class display function"<<endl;
    }
};

int main(){
A a;
a.fun();
a.fun(4);
a.fun("piyush");

Complex c1(12,7);
Complex c2(12,7);
Complex c3 = c1 + c2;
c3.display();

base *bptr;
derived d;
bptr = &d;
bptr->display();
bptr->print();
return 0;
}