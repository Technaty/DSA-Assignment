#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

void deleteNode(Node** head_ref, Node* del) {
    // Base case
    if (*head_ref == NULL || del == NULL) {
        return;
    }
    
    // If node to be deleted is head node
    if (*head_ref == del) {
        *head_ref = del->next;
    }
    
    // Change next only if node to be deleted is NOT the last node
    if (del->next != NULL) {
        del->next->prev = del->prev;
    }
    
    // Change prev only if node to be deleted is NOT the first node
    if (del->prev != NULL) {
        del->prev->next = del->next;
    }
    
    // Finally, free the memory occupied by del
    delete(del);
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
    
    // Print the original list
    cout << "Original list:" << endl;
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
    
    // Delete the second node
    deleteNode(&head, second);
    
    // Print the updated list
    cout << "Updated list:" << endl;
    current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
    
    return 0;
}
