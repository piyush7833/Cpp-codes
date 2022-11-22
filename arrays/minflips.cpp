#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	int a=0;
	int b=0;
	cin>>t;
	for(int i=1;i<=t;i++){
	    cin>>n;
	    int arr[n];
	    for (int j=1;j<=n;i++){
	        cin>>arr[i];
	        if(arr[i]==1){
	            a+=1;
	        }
	        else{
	            b+=1;
	        }
	    }
	    int k=a-b;
	    if((k%2==0 && k>0)||k==0){
	        cout<<k/2;
	    }
	    else if(k%2==0 && k<0){
	        cout<<-k/2;
	    }
	    else{
	        cout<<-1;
	    }
	    a=0;
	    b=0;
	}
	return 0;
}
