#include <iostream> 
using namespace std; 

struct Node { 
    int data; 
    Node* next;
};

Node* arrToLL(int* arr, int size);
void printLinkedList(Node* head);
Node* reverseLL(Node*& head);

int main () { 
    int arr [] = {1,2,3,4,5};
    int element_index = 2; 
    Node* linkedList = arrToLL(arr,sizeof(arr)/sizeof(arr[0]));
    cout << "Before reversing: "; 
    printLinkedList(linkedList);
    reverseLL(linkedList);
    cout << "After reversing: "; 
    printLinkedList(linkedList);
}

Node* arrToLL(int* arr, int size) { 
    if (size ==0) return nullptr; 

    Node* head = new Node(); 
    head->data = arr[0]; 
    head->next = nullptr; 

    Node* current = head; 

    for (int i=1; i<size; i++){
        Node* newNode = new Node(); 
        newNode->data = arr[i]; 
        newNode->next   = nullptr; 
        current->next=newNode; 
        current=newNode; 
    }
    return head; 

}
void printLinkedList(Node* head) { 
    Node* current = head; 
    cout << "Linked List elements: " <<endl;
    while (current !=nullptr) { 
        cout<< current->data <<" "; 
        current= current->next;
    }
    cout <<endl;
}

Node* reverseLL(Node*& head) { 
    
    if (head == nullptr) return nullptr;

    Node* prev = nullptr;
    Node* current = head; 
    Node* next = current->next;

    while (current!= nullptr) {
        next = current->next; 
        current->next = prev;
        prev=current;
        current = next;
    }
    head = prev;
    return head;
}
