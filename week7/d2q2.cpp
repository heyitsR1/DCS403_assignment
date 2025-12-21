// d2q2.cpp
// Linear Queue: enqueue operation demonstration
#include <iostream>
using namespace std;

const int SIZE = 5;

struct LinearQueue {
    int arr[SIZE];
    int front, rear;
    LinearQueue(): front(-1), rear(-1) {}
    bool isFull() const { return rear == SIZE-1; }
    bool isEmpty() const { return front == -1; }
    void enqueue(int x) {
        if (isFull()) { cout << "Queue full\n"; return; }
        if (isEmpty()) front = 0;
        arr[++rear] = x;
    }
    void display() const {
        if (isEmpty()) { cout << "Queue empty\n"; return; }
        for (int i = front; i <= rear; ++i) cout << arr[i] << (i==rear?"":" ");
        cout << '\n';
    }
};

int main() {
    LinearQueue q;
    cout << "Enqueue demo\n";
    for (int v : {1,2,3,4,5,6}) { // 6th should show full
        cout << "Inserting " << v << " -> ";
        q.enqueue(v);
        q.display();
    }
    return 0;
}
