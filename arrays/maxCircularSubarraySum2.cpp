#include<iostream>
#include<climits>
using namespace std;

int kadane(int array[], int n) {
    int maxsum = INT_MIN;
    int currsum=0;
    for(int i=0;i<n;i++){
        currsum += array[i];
        if(currsum < 0){
            currsum = 0;
        }
        maxsum = max(currsum, maxsum);
    }
    return maxsum;
}
int main(){
int n ;
int array[n];
cout<<"Enter size of your array ";
cin>>n;
cout<<"enter values of your array ";
for(int i=0;i<n; i++){
cin>>array[i];
}
int wrapsum;
int nowrapsum;
nowrapsum = kadane(array,n);
int totalsum = 0;
for(int i=0;i<n;i++){
    totalsum += array[i];
    array[i] = -(array[i]);
}
wrapsum = totalsum + kadane (array,n);
cout<<max(wrapsum,nowrapsum)<<endl;
return 0;
}