// d2q11.cpp
// Circular Queue: traversal / display function demo
#include <iostream>
using namespace std;

const int SIZE = 7;

struct CircularQueue { int arr[SIZE]; int front, rear; CircularQueue():front(-1),rear(-1){}
    bool isEmpty() const { return front==-1; }
    void enqueue(int x){ if((rear+1)%SIZE==front) return; if(isEmpty()) front=0; rear=(rear+1)%SIZE; arr[rear]=x; }
    void traverse() const { if(isEmpty()){ cout<<"empty\n"; return;} int i=front; while(true){ cout<<arr[i]; if(i==rear) break; cout<<' '; i=(i+1)%SIZE;} cout<<'\n'; }
};

int main(){
    CircularQueue q; for(int i=1;i<=5;++i) q.enqueue(i*2);
    cout<<"Traverse circular queue: "; q.traverse();
    return 0;
}
