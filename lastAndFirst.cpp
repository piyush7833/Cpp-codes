#include<bits/stdc++.h>
#include<math.h>

using namespace std;
// #define el endl;

int main()
{
   
   int t,n,first,last,j,k;
   cin>>t;
   j=0;
   
for(int i=1 ; i<=t ; i++){
       cin>>n;
       k=n;
       last = n%10;
       
       
       while(k>0){
           k=n/10;
           j++;
       }
       
       
       first = n/pow(10,j-1) ;

       cout<< last + first<<endl;
       
   }

   
return 0;

}