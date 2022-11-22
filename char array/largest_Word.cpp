#include<iostream>
using namespace std;
int main(){
int n ;
cout<<"Enter size of your charecter array ";
cin>>n;
cin.ignore();
char array[n+1];
cout<<"Enter your sentence ";
cin.getline(array,n); // to insert line
cin.ignore();   //to clear the buffer
int i=0;
int crrl=0;
int maxl=0;
int st=0, mst=0;
while(1){//to run the loop infinite
if((array[i]==' ') || (array[i]='\0')){ 
    if(crrl>maxl){
        maxl=crrl;
        mst = st;
    }
            crrl=0;
            st=i+1;
}

else{
        crrl++;
}

    
if(array[i]='\0'){
    break;
}


i++;
}

cout<<"Maximum length of word is "<<maxl;

for(int i=0; i<maxl; i++){
    cout<<"Word with maximum length is "<<array[i+mst];
}
return 0;
}