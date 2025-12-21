// d2q6.cpp
// Linear Queue: check full / empty functions
#include <iostream>
using namespace std;

const int SIZE = 4;

struct LinearQueue { int arr[SIZE], front, rear; LinearQueue():front(-1),rear(-1){}
    bool isEmpty() const { return front==-1; }
    bool isFull() const { return rear==SIZE-1; }
    void enqueue(int x){ if(isFull()){ cout<<"Cannot insert, full\n"; return; } if(isEmpty()) front=0; arr[++rear]=x; }
    void display() const { if(isEmpty()){ cout<<"empty\n"; return; } for(int i=front;i<=rear;++i) cout<<arr[i]<<(i==rear?"":" "); cout<<'\n'; }
};

int main(){
    LinearQueue q;
    cout<<"Empty? "<<(q.isEmpty()?"Yes":"No")<<"\n";
    q.enqueue(1); q.enqueue(2); q.enqueue(3); q.enqueue(4);
    cout<<"After inserts — Full? "<<(q.isFull()?"Yes":"No")<<"\n";
    q.display();
    return 0;
}
