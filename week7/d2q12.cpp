// d2q12.cpp
// Circular Queue: check full / empty functions
#include <iostream>
using namespace std;

const int SIZE = 4;

struct CircularQueue { int arr[SIZE]; int front, rear; CircularQueue():front(-1),rear(-1){}
    bool isEmpty() const { return front==-1; }
    bool isFull() const { return (rear+1)%SIZE==front; }
    void enqueue(int x){ if(isFull()){ cout<<"Full\n"; return;} if(isEmpty()) front=0; rear=(rear+1)%SIZE; arr[rear]=x; }
    void display() const { if(isEmpty()){ cout<<"empty\n"; return;} int i=front; while(true){ cout<<arr[i]; if(i==rear) break; cout<<' '; i=(i+1)%SIZE;} cout<<'\n'; }
};

int main(){
    CircularQueue q;
    cout<<"Empty? "<<(q.isEmpty()?"Yes":"No")<<"\n";
    q.enqueue(1); q.enqueue(2); q.enqueue(3);
    cout<<"Now full? "<<(q.isFull()?"Yes":"No")<<"\n";
    q.display();
    return 0;
}
