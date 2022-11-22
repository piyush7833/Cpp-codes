


#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

string str;
string s1 ="fam";
string s3 ="fam";
string s4 ="fam";
string s2 ="ily";
string s5 ="ily";
//appending
s1.append(s2);
cout<<"appended string is "<<s1<<endl;
//other way of appending without changing any str
cout<<"appended string is "<<s3 + s2<<endl;
//other way of appending without changing any str
s4= s3+s2;
cout<<"appended string is "<<s4<<endl;


//accessing
cout<<s1[1]<<endl;  //acessing second charecter of s1



//clearing
s5.clear();
cout<<"String is cleared "<<s5<<endl;



// compairing
cout<<"On comapiring s1 and s2 we get "<<s1.compare(s2)<<endl;  //if +ve then s1 is greater if 0 then equal if -ve then s2 is greater
int k = s1.compare(s2);
if(k>0){
    cout<<s1<<" is greater than "<<s2<<endl;
}
else if(k<0){
    cout<<s2<<" is greater than "<<s1<<endl;
}
else{
    cout<<s1<<" is equal to "<<s2<<endl;
}



//empty 
if(s5.empty()){
    cout<<"string is empty"<<endl;
}
else if(!s5.empty()){
        cout<<"string is not empty"<<endl;
}

//erasing
string s6 ="fuckOffyou";
s6.erase(3,3);   //index,number of charecter
cout<<"Erased string is "<<s6<<endl;



//find
string s7 ="fuckOffyou";
cout<< "Starting index of you is " <<s7.find("you")<<endl; //it gives starting index


//inserting
s7.insert(5,"tum");  //index,string
cout<<"inserted string is "<<s7<<endl;


// length of string
cout<<"length of "<<s7<<" is "<<s7.size() <<" or "<<s7.length()<<endl;
//it helps in iteration;
//  for(int i=0;i<=s7.length();i++){
//     cout<<s7[i]<<endl;
//  }


//substring
cout<<"substring is "<<s7.substr(0,4)<<endl;


//string to integer
string s8 ="783";
int x =stoi(s8);  //string to integer
cout<<"integer is "<<x<<endl;
cout<<"integer + 2 is "<<x+2<<endl;

//integer to string
int y = 783;
cout<<"string is "<<to_string(y)<<endl;
cout<<"string +2 is "<<to_string(x) + "2" <<endl;


//sorting
string s9="dsknfjszfjhgbfzsdfhygfyerklmvc";
sort(s9.begin(),s9.end());
cout<<s9<<endl;
return 0;


}