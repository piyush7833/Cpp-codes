#include <iostream>
using namespace std;


int main(){
int i, j, k ;
i =1 ;
j = 2 ;
//post operator:- valu changes after runninga a statement
//pre operator:- valu changes before runninga a statement
  //   1   2   1      2      3     4   4     3   4     3     2   2
  k =  i + j + i++ + j++ + ++i + ++j + j + --i - j-- + j - --j + i;

  cout<< " value of i is " <<i<< " value of j is " << j << " value of k is "<< k<<endl; ;


return 0;   
}