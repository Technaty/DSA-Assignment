#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

void printListBackward(Node* tail) {
    // Traverse the list from tail to head
    while (tail != NULL) {
        cout << tail->data << " ";
        tail = tail->prev;
    }
    cout << endl;
}

int main() {
    // Create a doubly linked list
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    head->data = 1;
    head->prev = NULL;
    head->next = second;
    second->data = 2;
    second->prev = head;
    second->next = third;
    third->data = 3;
    third->prev = second;
    third->next = NULL;
    Node* tail = third; // Set the tail pointer to the last node
    
    // Print the list backward
    cout << "List backward:" << endl;
    printListBackward(tail);
    
    return 0;
}
