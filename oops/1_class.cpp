//it is similar to structure in c
#include<iostream>
using namespace std;
class student{
    private:
    string relationship;
    //data members of class  //by default these data members are private i.e. these data members are inaccessible outside class


    public:   //we can not make a structure private but it is possible in class
    string name;
    int age;
    string gender;


    //constructor
    student(string s, string n , int a , string g){  //constructor get called by default when class object is being made //to create constructor we write class name first then pass the datatype     //it is also known as parameterised constructor
    cout<<"This is a parameterised constructor"<<endl;
        relationship =s ;
        name = n;
        age = a;
        gender = g;
    }
    student (){  //this is default constructor when no value is passed this will get printed 
        cout<<"There is a default constructor so that if null value is passed then no error is generated"<<endl;
    }
    //copy constructor  //deep copy pointers  as well as its location get copied
    student (student &b){
        cout<<"This is a copy constructor"<<endl;
        name = b.name;
        age = b.age;
        gender = b.gender;
        relationship = b.relationship;
    }
    // default copy constructor //shallow copy pointers get copied but location of those pointers would't get copied



    //destructor
    ~student(){
        cout<<"This is destructor "<<endl; //it gets clled when an object gets destoyed here it is at end of int main
    }

    

    //operator overloading //we tell the operator how to behave
    bool operator == (student &b){ //here we pass whose value is need to be compared //mtlb jiski value ko compare krvana hain i.e b
        if(name == b.name && age==b.age && gender == b.gender && relationship==b.relationship ){ //here we check value of whose we want to check i.e. d
            return true;
        }
        else{
            return false;
        }
    };



    //printing values
    void setRelationship(string s){  //to acess the private element of student/class  //setter function
        relationship =s; 
    }
    void getRelationship(){
        cout<<"Relationship status of student is "<<relationship<<endl;
    }
    void printInfo(){   //we can not input function this inside structure but it is possible in classes  //getter function
    cout<<"Name  of student is  "<<name<<endl;
    cout<<"Age  of student is  "<<age<<endl;
    cout<<"Gender of student is  "<<gender<<endl;
    // cout<<"Relationship status of student is  "<<relationship<<endl;
    }
};
 
int main(){
// student a;
// a.name="piyush";
// a.age=20;
// a.gender = 1;
// // a.printInfo();



//another way of doing it in array
// student arr[2];
// for(int i=0;i<2;i++){
//     cout<<"Enter name ";
//     cin>>arr[i].name;
//     cout<<"Enter age ";
//     cin>>arr[i].age;
//     cout<<"Enter gender ";
//     cin>>arr[i].gender;
//     cout<<"Enter relationship status ";
//     string s;
//     cin>>s;
//     arr[i].setRelationship(s);
// }
// for(int i=0;i<2;i++){
//     arr[i].printInfo();
// }   



//to specify the name at the time of declaring a student or variable //we use constructor
student b("single", "hardik", 20, "Male");
b.printInfo();
b.getRelationship();

student c;

//copy constructor
student d = b;
d.printInfo();
d.getRelationship();

if(d==b){
    cout<<"same"<<endl;
}
else{
    cout<<"not same"<<endl;
}
return 0;
}