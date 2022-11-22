#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//vectors are dynamic array i.e. array of size is not needed to be defined
int main(){
int n ;
 vector<int> v; //declaration of vector v
 v.push_back(1); //inserting elements in vector
 v.push_back(2);
 v.push_back(3);
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}



//another way to iterate through vector or to print vector in this case
vector<int>::iterator it; //initialising iterator vector it 
for(it=v.begin();it!=v.end();it++){
    cout<<*it<<endl;   //iterator vector is a pointer
}




//another way of iterating through vector
for(auto element:v){//auto means we are saying compiler to get datatype by its own
   cout<<element<<endl; //element is not a iterator we can use anything instead of auto
}


//deleting values from array
v.pop_back(); //deletes the last value from the pointer
for(auto e:v){
    cout<<e<<endl;
}



//another vector
vector <int> v2(3,50);  //if size is known and we want to insert values at same time //here size is 3 and we are inserting all 3 values equal to 50


//swaping values of v1 and v2
swap(v,v2);  //it swaps all value of v into v2
for(auto e:v){
    cout<<e<<endl;
}
for(auto e:v2){
    cout<<e<<endl;
}

//sorting
sort(v2.begin(),v2.end());

//taking input in vector
vector <int> v3;
int a;
for(int i=0; i<3;i++){
    cin>>a;
    v3.push_back(a);
}
for(auto e:v3){
    cout<<e<<" ";
}

//there are many more functiion in vector for that google it
return 0;
}