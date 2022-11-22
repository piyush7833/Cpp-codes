//find if there are three values in an array whose sum is equal to a given value
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
int n ;
cout<<"Enter size of an array ";
cin>>n;
cout<<"Enter values of an array ";
vector <int> v(n);
for(auto &i:v){
    cin>>i;
}
cout<<"Enter value whose sum need to be finded ";
int k;
cin>>k;
for(int i=0;i<v.size();i++){
    for(int j=i+1;j<n;j++){
        for(int m=j+1;m<n;m++){
            if(v[i]+v[j]+v[m]==k){
                cout<<"Yes"<<endl;
                cout<<"The values are "<<v[i]<<" "<<v[j]<<" "<<v[m]<<endl;
                break;
            }
            else{
                if(i==v.size()-1){
                    cout<<"NO"<<endl;
                }
                else{
                    continue;
                }
            }
        }
    }
}
return 0;
}