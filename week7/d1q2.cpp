#include <iostream> 
using namespace std; 

struct Node { 
    int data; 
    Node* next;
};

Node* arrToLL(int* arr, int size);
void printLinkedList(Node* head);
int ll_search(Node* head, int element); 

int main () { 
    int arr [] = { 1,2,8,4,5};
    int element = 9;
    Node* linkedList = arrToLL(arr,sizeof(arr)/sizeof(arr[0]));
    printLinkedList(linkedList);
    cout << "Element to search for: " << element <<endl;
    int elementIndex= ll_search(linkedList, element);
    if (elementIndex> 0) { 
        cout << "Element found at index: " << elementIndex<<endl;
    }
    else { 
        cout << "Element not found in list" <<endl;
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

int ll_search(Node* head, int element) { 
    Node* current = head;     int counter = 1; 

    while (current !=nullptr) { 
        if (current->data == element) { 
            return counter; 
        }
        current = current->next;
        counter ++; 
    }   
    return -1;
}
