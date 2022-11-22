#include<iostream>
using namespace std;
//it is possible to inherit attributes and methods from one class to another class
//base class - parent class
//derived class -child - the class that inherit from another class
//there are total of 5 type of inheritance


//single inheritance - 
class A{
    private:
    void func1(){
        cout<<"This is public this never get inherited "<<endl;
    }
    public:
    void func2(){
        cout<<"This is A : Only public and protected elements or functions get inherited"<<endl;
    }
    // protected:
    // void func4(){
    //     cout<<"This is A : This is protected element inherited from A"<<endl;
    // }
};
class C{
    public:
    void func3(){
        cout<<"Inherited from class C"<<endl;
    }
};
//single inheritance
class B : public A{  // make all public element of A to public element of B
public:
void  funcB(){
cout<<"This is B derived from A"<<endl;
}
};

//Multiple inheritance - a class get inherited from multiple classes
class D : public A, public C{  // make all public element of A to public element of B
public:
void  funcD(){
cout<<"This is D derived from A and C"<<endl;
}
};


//multi level inheritance i.e e is inherited by b and b is inherited by a
class E : public B{
    public:
    void  funcE(){
    cout<<"This is E derived from B and B is derived from A"<<endl;
    }
};



//hybrid inheritance h class is multiple inheritance which is inherited by E(multi level inherited class) and C(single inheritance)
class H :public E, public C{
    public:
    void funcH(){
        cout<<"This is h derived from class E and class C"<<endl;
    }
};

//hierarichal inheritance //In this there a hireachy is being made like in hybrid //hybrid inheritance is also an example of hierarichal inheritance
int main(){
B b;
D d;
E e;
H h;
// b.func1();  // gives error as it was private element/functiom 
b.funcB();
b.func2();
b.func4();
cout<<endl;
d.funcD();
d.func2();
d.func3();
cout<<endl;
e.funcE();
e.funcB();
e.func2();
cout<<endl;
h.funcH();
h.funcE();
h.funcB();
h.func2();
h.func3();
cout<<endl;
return 0;
}