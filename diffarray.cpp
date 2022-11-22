#include<iostream>
#include<array>
using namespace std;
int main(){
int array1[5]={1,2,3,4,5 };
int array2[5]={1,2,4,0,5 };
for(int i =0; i<5; i++){
    for(int j =0 ; j<5; j++)
        if(array1[i] != array2[j] && j==4){
            printf("Number which is not common in both array is %d ", array1[i] );
        }

        else if (array1[i] != array2[j] && j != 4){
            continue;
        }
        else if (array1[i] == array2[j]){
            j=6;
        }
}
return 0;
}