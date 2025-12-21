// d2q3.cpp
// Linear Queue: dequeue operation demonstration
#include <iostream>
using namespace std;

const int SIZE = 5;

struct LinearQueue {
    int arr[SIZE];
    int front, rear;
    LinearQueue(): front(-1), rear(-1) {}
    bool isEmpty() const { return front == -1; }
    void enqueue(int x) { if (rear==SIZE-1) return; if (isEmpty()) front=0; arr[++rear]=x; }
    int dequeue() {
        if (isEmpty()) { cout << "Queue empty\n"; return -1; }
        int v = arr[front++];
        if (front > rear) front = rear = -1;
        return v;
    }
    void display() const { if (isEmpty()) { cout<<"empty\n"; return;} for(int i=front;i<=rear;++i) cout<<arr[i]<<(i==rear?"":" "); cout<<'\n'; }
};

int main(){
    LinearQueue q;
    q.enqueue(10); q.enqueue(20); q.enqueue(30);
    cout<<"Before dequeue: "; q.display();
    cout<<"Removed: "<<q.dequeue()<<"\n";
    cout<<"After dequeue: "; q.display();
    q.dequeue(); q.dequeue();
    q.dequeue(); // extra remove should show empty message
    return 0;
}
