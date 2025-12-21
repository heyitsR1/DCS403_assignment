#include <iostream> 
using namespace std; 

struct Node { 
    int data; 
    Node* next;
};

Node* arrToLL(int* arr, int size);
void printLinkedList(Node* head);
bool insertElementLL(Node*& head, int old_element, int new_element);

int main () { 
    int arr [] = {1,2,3,4,5};
    int old_element = 2;
    int new_element = 11; 
    Node* linkedList = arrToLL(arr,sizeof(arr)/sizeof(arr[0]));
    cout << "Before insertion: "; 
    printLinkedList(linkedList);
    if (insertElementLL(linkedList,old_element,new_element)) { 
        cout << "Afer inserting new element [" << new_element << "] after old element  [" <<old_element << "] : "; 
        printLinkedList(linkedList);
    } else{ 
        cout << "Couldn't insert element to linked list"; 
    }
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

bool insertElementLL(Node*& head, int old_element, int new_element) { 
    if (head == nullptr) return false;

    Node* current = head; 

    while (current !=nullptr) { 
        if (current->data == old_element) { 
            Node* temp = new Node (); 
            temp->data = new_element; 
            temp-> next = current->next;
            current->next = temp;
            return true;
        }
        current= current->next;
    }
    return false;
}
