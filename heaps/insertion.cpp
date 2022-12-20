#include <bits/stdc++.h>
#include <vector>
using namespace std;
class heap
{
public:
    int arr[100];
    int size;
    heap()
    {
        arr[0] = -1;
        size = 0;
    }
    void Max_insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;
        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }
    void Min_insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;
        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] > arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }
    void Max_deletion()
    {
        if (size == 0)
        {
            cout << "nothing to delete" << endl;
            return;
        }
        // removing root node
        arr[1] = arr[size];
        size--;
        // taking the root node to its correct position
        int i = 1;
        while (i < size)
        {
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;
            if (leftIndex < size && arr[leftIndex] > arr[i])
            {
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }
            else if (rightIndex < size && arr[rightIndex] > arr[i])
            {
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
            else
            {
                return;
            }
        }
    }
    void Min_deletion()
    {
        if (size == 0)
        {
            cout << "nothing to delete" << endl;
            return;
        }
        // removing root node
        arr[1] = arr[size];
        size--;
        // taking the root node to its correct position
        int i = 1;
        while (i < size)
        {
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;
            if (leftIndex < size && arr[leftIndex] < arr[i])
            {
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }
            else if (rightIndex < size && arr[rightIndex] < arr[i])
            {
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
            else
            {
                return;
            }
        }
    }
    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
void Max_heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;
    if (left <= n && arr[largest] < arr[left])
    {
        largest = left;
    }
    if (right <= n && arr[largest] < arr[right])
    {
        largest = right;
    }
    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        Max_heapify(arr, n, largest); // for further check
    }
}
void Min_heapify(int arr[], int n, int i)
{
    int smallest = i;
    int left = 2 * i;
    int right = 2 * i + 1;
    if (left <= n && arr[smallest] > arr[left])
    {
        smallest = left;
    }
    if (right <= n && arr[smallest] > arr[right])
    {
        smallest = right;
    }
    if (smallest != i)
    {
        swap(arr[smallest], arr[i]);
        Min_heapify(arr, n, smallest); // for further check
    }
}
void BuildMaxHeap(int A[], int n)
{
    for (int i = 3; i >= 1; i--)
    {
        Max_heapify(A, n, i);
    }
}
void HeapSort(int A[], int n)
{
    BuildMaxHeap(A, n);
    for (int i = n; i >= 2; i--)
    {
        swap(A[i], A[1]); // swap because root element is greatest and it should be at last
        n--;              // decrease the heapsize and again create the heap
        Max_heapify(A, n, 1);
    }
}

void IncreaseKey(int arr[],int i,int key,int n){
    if(arr[i]>key){
        cout<<"Wrong operation "<<endl;
    }
    arr[i]=key;
    
}
void DecreaseKey(int arr[],int i,int key,int n){
    if(arr[i]<key){
        cout<<"Wrong operation "<<endl;
    }
    arr[i]=key;
    while(i>1 && arr[i]<arr[i/2]){ //perlocate up
        swap(arr[i],arr[i/2]);
        i=i/2;
    }
    // Max_heapify(arr,n,i);
}
int main()
{
    heap h;
    heap h1;
    h.Max_insert(50);
    h.Max_insert(55);
    h.Max_insert(53);
    h.Max_insert(52);
    h.Max_insert(54);
    h.print();
    h.Max_deletion();
    h.print();
    h1.Min_insert(50);
    h1.Min_insert(55);
    h1.Min_insert(53);
    h1.Min_insert(52);
    h1.Min_insert(54);
    h1.print();
    h1.Min_deletion();
    h1.print();

    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;
    // building MAx_heap
    for (int i = n / 2; i > 0; i--)
    { // leaf node is already an heap //leaf node in cbt starts from (n/2) +1 and ends at n  // so we need to heapify from n/2 th index to 1th index
        Max_heapify(arr, n, i);
    }
    IncreaseKey(arr,1,70,n);
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    DecreaseKey(arr,1,10,n);
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    // Building Min Heap
    for (int i = n / 2; i > 0; i--)
    {
        Min_heapify(arr, n, i);
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    HeapSort(arr, n);
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Max heap using priority queue ";
    priority_queue<int> pq;
    pq.push(4);
    pq.push(1);
    pq.push(3);
    pq.push(6);
    cout << pq.top();
    cout << endl;
    cout << "Min heap using priority queue ";
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(4);
    pq2.push(1);
    pq2.push(3);
    pq2.push(6);
    cout << pq2.top();
    return 0;
}