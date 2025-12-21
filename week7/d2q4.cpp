// d2q4.cpp
// Linear Queue: peek / front element
#include <iostream>
using namespace std;

const int SIZE = 6;

struct LinearQueue {
    int arr[SIZE]; int front, rear;
    LinearQueue(): front(-1), rear(-1) {}
    bool isEmpty() const { return front == -1; }
    void enqueue(int x) { if (rear==SIZE-1) return; if (isEmpty()) front=0; arr[++rear]=x; }
    int peek() const { if (isEmpty()) { cout<<"Queue empty\n"; return -1; } return arr[front]; }
    void display() const { if (isEmpty()) { cout<<"empty\n"; return;} for(int i=front;i<=rear;++i) cout<<arr[i]<<(i==rear?"":" "); cout<<'\n'; }
};

int main(){
    LinearQueue q; q.enqueue(7); q.enqueue(14);
    cout<<"Queue: "; q.display();
    cout<<"Front element (peek): "<<q.peek()<<"\n";
    return 0;
}
