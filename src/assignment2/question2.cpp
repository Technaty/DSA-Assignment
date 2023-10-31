#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void addNode(Node** head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    addNode(&head, 15);
    addNode(&head, 25);
    addNode(&head, 35);
    printList(head);
    return 0;
}
