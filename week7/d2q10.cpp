// d2q10.cpp
// Circular Queue: peek / front element
#include <iostream>
using namespace std;

const int SIZE = 6;

struct CircularQueue { int arr[SIZE]; int front, rear; CircularQueue():front(-1),rear(-1){}
    bool isEmpty() const { return front==-1; }
    void enqueue(int x){ if((rear+1)%SIZE==front) return; if(isEmpty()) front=0; rear=(rear+1)%SIZE; arr[rear]=x; }
    int peek() const { if(isEmpty()){ cout<<"empty\n"; return -1; } return arr[front]; }
    void display() const { if(isEmpty()){ cout<<"empty\n"; return;} int i=front; while(true){ cout<<arr[i]; if(i==rear) break; cout<<' '; i=(i+1)%SIZE;} cout<<'\n'; }
};

int main(){
    CircularQueue q; q.enqueue(11); q.enqueue(22);
    cout<<"Queue: "; q.display();
    cout<<"Front element: "<<q.peek()<<"\n";
    return 0;
}
