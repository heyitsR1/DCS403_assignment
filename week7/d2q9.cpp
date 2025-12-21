// d2q9.cpp
// Circular Queue: dequeue operation demonstration
#include <iostream>
using namespace std;

const int SIZE = 5;

struct CircularQueue { int arr[SIZE]; int front, rear; CircularQueue():front(-1),rear(-1){}
    bool isEmpty() const { return front==-1; }
    void enqueue(int x){ if((rear+1)%SIZE==front) return; if(isEmpty()) front=0; rear=(rear+1)%SIZE; arr[rear]=x; }
    int dequeue(){ if(isEmpty()){ cout<<"empty\n"; return -1; } int v=arr[front]; if(front==rear) front=rear=-1; else front=(front+1)%SIZE; return v; }
    void display() const { if(isEmpty()){ cout<<"empty\n"; return;} int i=front; while(true){ cout<<arr[i]; if(i==rear) break; cout<<' '; i=(i+1)%SIZE;} cout<<'\n'; }
};

int main(){
    CircularQueue q; q.enqueue(1); q.enqueue(2); q.enqueue(3);
    cout<<"Before: "; q.display();
    cout<<"Removed: "<<q.dequeue()<<"\n";
    cout<<"After: "; q.display();
    q.dequeue(); q.dequeue(); q.dequeue(); // extra
    return 0;
}
