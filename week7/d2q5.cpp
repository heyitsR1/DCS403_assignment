// d2q5.cpp
// Linear Queue: traversal / display function (separate demo)
#include <iostream>
using namespace std;

const int SIZE = 8;

struct LinearQueue { int arr[SIZE], front, rear; LinearQueue():front(-1),rear(-1){};
    void enqueue(int x){ if (rear==SIZE-1) return; if (front==-1) front=0; arr[++rear]=x; }
    void traverse() const { if (front==-1) { cout<<"Queue empty\n"; return; } for(int i=front;i<=rear;++i) cout<<arr[i]<<(i==rear?"":" "); cout<<'\n'; }
};

int main(){
    LinearQueue q; for(int i=1;i<=5;++i) q.enqueue(i*3);
    cout<<"Traversal (front->rear): "; q.traverse();
    return 0;
}
