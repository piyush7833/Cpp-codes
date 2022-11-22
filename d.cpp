#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	int s[n];
	int d[n];
	int k=0;
	cin>>t;
	while(t--){
	    cin>>n;
	for(int i=1; i<=n;i++){
	    cin>>s[i]>>d[i];
	    
	}
	for(int i=1;i<=n;i++){
	    	    if(s[i]==d[i]){
	        k+=1;
	    }
	    else{
	        k=k;
	    }
	}
	cout<<k<<" "<<endl;
	k=0;
}
	return 0;
}
