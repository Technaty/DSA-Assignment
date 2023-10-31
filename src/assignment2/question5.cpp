#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

struct Stack {
    Node* top;
};

void push(Stack* stack, int val) {
    Node* newnode = new Node();
    newnode->data = val;
    newnode->next = stack->top;
    stack->top = newnode;
}

void pop(Stack* stack) {
    if (stack->top == NULL) {
        cout << "Stack is empty" << endl;
        return;
    }
    Node* temp = stack->top;
    stack->top = stack->top->next;
    delete(temp);
}

void display(Stack* stack) {
    if (stack->top == NULL) {
        cout << "Stack is empty" << endl;
        return;
    }
    Node* current = stack->top;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    // Create an empty stack
    Stack stack = {NULL};
    
    // Push some values onto the stack
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    
    // Print the contents of the stack
    cout << "Stack contents:" << endl;
    display(&stack);
    
    // Pop a value from the stack
    pop(&stack);
    
    // Print the updated contents of the stack
    cout << "Updated stack contents:" << endl;
    display(&stack);
    
    return 0;
}
