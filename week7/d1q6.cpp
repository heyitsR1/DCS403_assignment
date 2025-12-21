#include <iostream> 
using namespace std; 

struct Node { 
    int data; 
    Node* next;
};

Node* arrToLL(int* arr, int size);
void printLinkedList(Node* head);
bool deleteElementLL(Node*& head, int element);

int main () { 
    int arr [] = {1,2,3,4,5};
    int element_index = 2; 
    Node* linkedList = arrToLL(arr,sizeof(arr)/sizeof(arr[0]));
    cout << "Before delete: "; 
    printLinkedList(linkedList);
    if (deleteElementLL(linkedList,element_index)) { 
        cout << "Afer deleting element at index " << element_index << " : "; 
        printLinkedList(linkedList);
    } else{ 
        cout << "Couldn't delete element from linked list"; 
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

bool deleteElementLL(Node*& head, int element_index) { 

    if (head == nullptr) return false;
    if (element_index==1){ 
        Node * temp = head;
        head = head->next;
        delete temp;
        return true;}

    int index = 2; 

    Node* current = head->next; 
    Node* prev = head;

    while (current !=nullptr) { 
        if (index == element_index) { 
            prev->next = current->next;
            delete current;
            return true;
        }
        prev = current;
        current= current->next;
        index++;
    }
    return false;
}
