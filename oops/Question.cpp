//hierarichal inheritance //In this there a hireachy is being made like in hybrid //hybrid inheritance is also an example of hierarichal inheritance
#include<iostream>
using namespace std;
//questions
//which type of inheritance is this
//Write the names of all values and function which is acessible by give() of middle
//Write the names of all values and function which is acessible by out() of top
//Write the names of all members which are acessible by the object t of the class top declared in main function 
//this is multilevel inheritance
class Ground{
    int rooms;
    protected:
    void put();
    public :
    void get();
};
class Middle : private Ground{  //public of ground is private for middle
    int labs;
    public:
    void take();
    void give();
};
class Top : public Middle{  //public of middle is public for top
    int roof;
    public:
    void in();
    void out();
}
int main(){
int n ;

return 0;
}