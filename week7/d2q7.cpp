// d2q7.cpp
// Circular Queue: creation and basic operations demo
#include <iostream>
using namespace std;

const int SIZE = 6;

struct CircularQueue {
    int arr[SIZE]; int front, rear;
    CircularQueue(): front(-1), rear(-1) {}
    bool isEmpty() const { return front == -1; }
    bool isFull() const { return (rear + 1) % SIZE == front; }
    void enqueue(int x) {
        if (isFull()) { cout << "Circular queue full\n"; return; }
        if (isEmpty()) front = 0;
        rear = (rear + 1) % SIZE;
        arr[rear] = x;
    }
    int dequeue() {
        if (isEmpty()) { cout << "Circular queue empty\n"; return -1; }
        int val = arr[front];
        if (front == rear) front = rear = -1;
        else front = (front + 1) % SIZE;
        return val;
    }
    void display() const {
        if (isEmpty()) { cout << "empty\n"; return; }
        cout << "Circular Queue: ";
        int i = front;
        while (true) {
            cout << arr[i];
            if (i == rear) break;
            cout << ' ';
            i = (i + 1) % SIZE;
        }
        cout << '\n';
    }
};

int main(){
    CircularQueue q;
    q.enqueue(1); q.enqueue(2); q.enqueue(3); q.enqueue(4);
    q.display();
    cout<<"Dequeued: "<<q.dequeue()<<"\n";
    q.display();
    q.enqueue(5); q.enqueue(6); q.enqueue(7); // one will show full
    q.display();
    return 0;
}
