#include<iostream>
using namespace std;

int A[] = {1,5,6,8,12,14,16};
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
void MinHeapify(int A[],int i){
    int l = 2*i;
    int r = 2*i + 1;
    int smallest;
    if(l<=heapsize && A[l-1] < A[i-1])
        smallest = l;
    else
        smallest = i;
   
    if(r<=heapsize && A[r-1] < A[smallest-1])
        smallest = r;
    if(smallest != i){
        swap(A,i,smallest);
        MinHeapify(A,smallest);
    }
}
void BuildMaxHeap(int A[]){
    for(int i=3;i>=1;i--){
        MaxHeapify(A,i);
    }
}
void BuildMinHeap(int A[]){
    for(int i=3;i>=1;i--){
        MinHeapify(A,i);
    }
}

void HeapIncreaseKey(int A[],int i,int key){
    if(key < A[i-1]){  //key should be greater than its value
        cout<<"ERROR!";
        return;
    }
    A[i-1] = key;
    while(i>1 && A[(i/2)-1] < A[i-1]){
        swap(A,i,i/2);
        i/=2;
    }
}

void HeapDecreaseKey(int A[],int i,int key){
    if(key > A[i-1]){
        cout<<"ERROR!";
        return;
    }
    A[i-1] = key;
    MaxHeapify(A,i);
}

void HeapSort(int A[]){
    BuildMaxHeap(A);
    for(int i = heapsize; i >= 2; i--){
        swap(A,i,1);
        heapsize--;
        MaxHeapify(A,1);
    }
}

int HeapExtractMax(int A[]){
    if(heapsize<1){
        cout<<"Heap Underflow";
        return -1;
    }
    int max = A[0];
    A[0]=A[heapsize];
    heapsize--;
    MaxHeapify(A,1);
    return max;
}
int main(){
    BuildMaxHeap(A);
     for(int j=0;j<7;j++){
        cout<<A[j]<<" ";
    }
    cout<<endl;
    BuildMinHeap(A);
     for(int j=0;j<7;j++){
        cout<<A[j]<<" ";
    }
    cout<<endl;
    HeapIncreaseKey(A,2,18);
    for(int j=0;j<7;j++){
        cout<<A[j]<<" ";
    }
    cout<<endl;
    HeapDecreaseKey(A,1,12);
    for(int j=0;j<7;j++){
        cout<<A[j]<<" ";
    }
    cout<<endl;
    HeapSort(A);
    return 0;
}