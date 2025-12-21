#include <iostream> 
using namespace std; 

struct Node { 
    int data; 
    Node* next;
};

Node* arrToLL(int* arr, int size);
void printLinkedListReverse(Node* head);
void printLinkedList(Node* head);

int main () { 
    int arr [] = {1,2,3,4,5};
    int old_element = 2;
    int new_element = 11; 
    Node* linkedList = arrToLL(arr,sizeof(arr)/sizeof(arr[0]));
    printLinkedList(linkedList);
    cout << "Linked List in reverse: "<<endl; 
    printLinkedListReverse(linkedList);
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
void printLinkedListReverse(Node* head) { 
    if (head == nullptr) return;   
    printLinkedListReverse(head->next);
    cout << head->data <<endl;
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
