#include <iostream> 
using namespace std; 

struct Node { 
    int data; 
    Node* next;
};

Node* arrToLL(int* arr, int size);
void printLinkedList(Node* head);
Node* insertElementAtBeginning(Node* head, int new_element);

int main () { 
    int arr [] = { 1,2,3,4,5};
    int element = 0; 
    Node* linkedList = arrToLL(arr,sizeof(arr)/sizeof(arr[0]));
    cout << "Before insert: "; 
    printLinkedList(linkedList);
    Node* newlinkedList = insertElementAtBeginning(linkedList,element);
    cout << "Afer insert: "; 
    printLinkedList(newlinkedList);
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

Node* insertElementAtBeginning(Node* head, int element) { 

    // head -> node 1
    // head -> new_node -> node 1
    // node 1 accessed via head->next ? 

    Node* new_node = new Node(); 
    new_node->data = element; 
    new_node->next = head;

    head = new_node;

    return head; 
}
