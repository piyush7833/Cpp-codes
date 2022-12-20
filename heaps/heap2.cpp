#include<iostream>
using namespace std;

int A[] = {16,18,14,8,5,6,2};
int heapsize = sizeof(A)/sizeof(int);

void swap(int A[],int i, int largest){
    int temp = A[i-1];
    A[i-1] = A[largest-1];
    A[largest-1] = temp;
}

void MaxHeapify(int A[],int i){
    int l = 2*i;
    int r = 2*i + 1;
    int largest;
    if(l<=heapsize && A[l-1] > A[i-1])
        largest = l;
    else
        largest = i;
   
    if(r<=heapsize && A[r-1] > A[largest-1])
        largest = r;
    if(largest != i){
        swap(A,i,largest);
        MaxHeapify(A,largest);
    }
}
int main(){
    cout<<"After max heapifying array ";
    MaxHeapify(A,1);
    for(int j=0;j<7;j++){
        cout<<A[j]<<" ";
    }
    return 0;
}