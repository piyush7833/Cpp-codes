#include <iostream>
using namespace std;
#define n 100
class queue{
    int* arr;
    int front;
    int rear;
    public:
    queue(){
        arr = new int[n];
        front = -1;
        rear = -1;
    }
    void enqueue(int x){
        if (rear==n-1){
            cout<<"Queue overflow"<<endl;
            return;
        }
        rear++;
        arr[rear] = x;
        if (front==-1){
            front++;
        }
    }
    void dequeue(){
        if (front==-1 || front>rear){
            cout << "No elements in queue" << endl;
            return;
        }
        front++;
    }
    int peek(){
        if (front==-1 || front>rear){
            cout << "No elements in queue" << endl;
            return -1;
        }
        return arr[front];
    }
    bool empty(){
        if (front==-1 || front>rear){
            return true;
        }
        return false;
    }
};
int main()
{
   queue q;
   int m;
   cout<<"Enter size of queue ";
   cin>>m;
   cout<<"Enter values of queue ";
   for(int i=0;i<m;i++){
    int d;
    cin>>d;
    q.enqueue(d);
   }
   for(int i=0;i<m;i++){
    cout<<q.peek()<<" ";
    q.dequeue();
   }
   cout<<endl;
   cout<<q.empty();
    return 0;
}