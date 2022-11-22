//find number of consecutive days for which prices of stock was less than or equal to before
#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector <int> stockspan(vector <int> prices){
     vector <int> ans;
     stack<pair<int,int>> st;
     for(auto price:prices){
        int days =1;
        while(!st.empty() && st.top().first <= price){
            days = days + st.top().second;   //first means price second means number of days it is greater than the consecutive
            st.pop();
        }
        st.push({price,days}); //this is also an syntax of makepair  //it is equivalent to st.push(make_pair(price,days))
        ans.push_back(days);
     }
     return ans;
}
int main(){
int n ;
cout<<"Enter number of days of stocks ";
cin>>n;
vector <int> v(n);
vector <int> ans;
for(auto &i:v){
    cin>>i;
}
vector <int> res=stockspan(v);
for(auto i:res){
    cout<<i<<" ";
}
return 0;
}