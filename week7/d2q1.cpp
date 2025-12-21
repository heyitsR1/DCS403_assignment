// d2q1.cpp
// Linear Queue: creation and basic operations demo
#include <iostream>
// d2q1.cpp
// Linear Queue: creation and basic operations demo
#include <iostream>
using namespace std;

const int SIZE = 10;

struct LinearQueue {
    int arr[SIZE];
    int front, rear;
    LinearQueue(): front(-1), rear(-1) {}

    bool isEmpty() const { return front == -1; }
    bool isFull() const { return rear == SIZE - 1; }

    void enqueue(int x) {
        if (isFull()) { cout << "Queue is full\n"; return; }
        if (isEmpty()) front = 0;
        arr[++rear] = x;
    }

    int dequeue() {
        if (isEmpty()) { cout << "Queue is empty\n"; return -1; }
        int val = arr[front++];
        if (front > rear) front = rear = -1;
        return val;
    }

    void display() const {
        if (isEmpty()) { cout << "Queue empty\n"; return; }
        cout << "Queue: ";
        for (int i = front; i <= rear; ++i) {
            cout << arr[i];
            if (i != rear) cout << ' ';
        }
        cout << '\n';
    }
};

int main() {
    LinearQueue q;
    cout << "Demo: Linear Queue creation and basic ops\n";
    q.enqueue(5); q.enqueue(10); q.enqueue(15);
    q.display();
    cout << "Dequeued: " << q.dequeue() << '\n';
    q.display();
    return 0;
}
