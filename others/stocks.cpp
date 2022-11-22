#include<iostream>
using namespace std;
int main(){
int n;
int p;
int q ;
p=0;
char d;

cout<<"Enter size of your array ";
cin>>n;
int array[n];
cout<<"Enter values of your array ";
for(int i=0;i<n;i++){
    cin>>array[i];
}
//  d = 'a';
int i;
for(i=0;i<n;i++){
    if(i==0 && array[i]<array[i+1]){
        d='b';
        cout<<"buy on day "<<i<<endl;
    }
    else if(i==0 && array[i]>array[i+1]){
        d='s';
        cout<<"buy on day "<<i<<endl;
    }
    else if(array[i]<array[i+1] && d=='s'){
        d='b';
        cout<<"buy on day "<<i<<endl;
        }
    else if(array[i]<array[i+1] && (d=='b' || d=='h')){
        d='h';
        q=array[i]-array[i-1];
        p = q+p;
        cout<<"hold on day "<<i<<endl;
    }
    else if(array[i]>array[i+1] && (d=='h' || d=='b')){
        d='s';
        cout<<"sell on day "<<i<<endl;
        q=array[i]-array[i-1];
        p = q+p;
    }
   if(i==n-1){
        cout<<"total proffit is "<<p;
    }
}
 
return 0;
}