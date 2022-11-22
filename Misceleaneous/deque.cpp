#include<iostream>
using namespace std;
class deque{
    int* arr;
    int top;
    int show;
    int rear;
    deque(){
        arr = new int [n];
        top=-1;
        show=-1;
        rear=-1;
    }
    void push_front(int x){
        if(top+rear==n-2){
            cout<<"deque underflow"<<endl;
        }
        arr[++top]=x;
    }
    void push_back(int x){
        if(top+rear==n-2){
            cout<<"deque underflow"<<endl;
        }
            rear=rear+top+1;
            arr[++rear]=x;
    }
    void pop_back(){
        if(rear==-1){
            cout<<"Stack underflow "<<endl;
        }
        rear--;
    }
    void pop_front(){
        if(show==top+rear){
            cout<<"All elements are deleted "<<endl;
        }
        show++;
    }
    int Show_front(){
        if(show==rear+top){
            cout<<"All elements are displayed"endl;
        }
        return arr[++show];
    }
    int Show_rear(){
        if(rear==-1){
            cout<<"All elements are displayed"endl;
        }
        return arr[rear];
        rear--;
    }

};
int main(){

return 0;
}