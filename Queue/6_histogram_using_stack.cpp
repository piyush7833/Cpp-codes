#include<iostream>
#include<vector>
#include<stack> 
using namespace std;
int histogramArea(vector <int> a){
    int n=a.size(), ans=0, i=0;
    stack <int> st;
    a.push_back(0); //if in case some values are left in stack
    while(i<n){
        while(!st.empty() && a[st.top()]>a[i]){  //st.top() is basically an width of rectangle
            int t=st.top();
            int h=a[t];
            st.pop();
            if(st.empty()){
                ans=max(ans,h*i);
            }
            else{
                int len =i-st.top()-1;
                ans=max(ans,h*len);
            }
        }
        st.push(i);
        i++;
    }
    return ans;
}
int main(){
int n ;
cout<<"Enter size of array ";
cin>>n;
vector <int> v(n);
cout<<"Enter values of array ";
for(auto &i: v){
    cin>>i;
}
cout<<"Maximum area of rectange that can be fitted in given historgram is "<<histogramArea(v);
return 0;
}