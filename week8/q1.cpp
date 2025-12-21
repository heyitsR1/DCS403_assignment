// 1. Recursive Search in BST
// Question:
// Write a C++ function that searches for a key in a BST using recursion. The function should return a pointer to the node if found, or nullptr if not found.

// Hint:

// Recursively compare the key to the current node’s data.
// If the key is smaller, search the left subtree. If larger, search the right.
// Base cases are when the root is nullptr or the root's data matches the key.

#include <iostream> 
using namespace std; 


class Node  { 
    public: 
        int data; 
        Node* l; 
        Node* r; 
    Node (int data, Node* l=nullptr, Node* r=nullptr);
};
Node::Node(int data, Node* l, Node* r) {
    this->data = data;
    this->l = l;
    this->r = r;
};
Node* searchKeyBST (Node* root, int key) ;

int main() { 

    // -----------------------------------------------

    // create a mock bst 

    Node* root = new Node(8,nullptr,nullptr);
    Node* l1 = new Node(3,nullptr,nullptr);
    Node* r1 = new Node(10,nullptr,nullptr);

    root->l = l1;
    root->r = r1;

    Node* l2n1lc = new Node(1,nullptr,nullptr);
    Node* l2n1rc = new Node(6,nullptr,nullptr);

    l1->l = l2n1lc;
    l1->r = l2n1rc;
    
    Node* l2n2lc = new Node(9,nullptr,nullptr);
    Node* l2n2rc = new Node(14,nullptr,nullptr);
    
    r1->l = l2n2lc;
    r1->r = l2n2rc;

    // -----------------------------------------------
    
    int key1 = 5;
    int key2=6;
    cout << "We are checking for 2 keys: key1: 5 and key2: 6 in this mock bst" <<endl; 
    cout << "Our mock bst is [8,3,10,1,6,9,14]" <<endl; 
    int key = key2;
    Node* result = searchKeyBST(root,key); 
    cout << "Searching for key: " << key<< endl;
    if (result) { 
        cout << "found"<<endl;
    } else { 

        cout << "not found"<<endl;
    }
    return 0; 
}

Node* searchKeyBST (Node* root, int key) { 
    if (root == nullptr || root->data == key) return root; 
    if (key < root->data) { 
        return searchKeyBST (root->l,key);
    } else { 
       return searchKeyBST (root->r,key);
    }
}
