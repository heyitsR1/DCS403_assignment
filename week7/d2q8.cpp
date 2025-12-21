// d2q8.cpp
// Circular Queue: enqueue operation demonstration
#include <iostream>
using namespace std;

const int SIZE = 5;

struct CircularQueue { int arr[SIZE]; int front, rear; CircularQueue():front(-1),rear(-1){}
    bool isFull() const { return (rear+1)%SIZE==front; }
    bool isEmpty() const { return front==-1; }
    void enqueue(int x){ if(isFull()){ cout<<"Full\n"; return;} if(isEmpty()) front=0; rear=(rear+1)%SIZE; arr[rear]=x; }
    void display() const { if(isEmpty()){ cout<<"empty\n"; return;} int i=front; while(true){ cout<<arr[i]; if(i==rear) break; cout<<' '; i=(i+1)%SIZE; } cout<<'\n'; }
};

int main(){
    CircularQueue q;
    cout<<"Circular enqueue demo\n";
    for(int v: {10,20,30,40,50,60}){ cout<<"Insert "<<v<<" -> "; q.enqueue(v); q.display(); }
    return 0;
}
