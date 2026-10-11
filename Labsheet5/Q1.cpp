#include <iostream>
using namespace std;

int stack[5];
int top = -1;

void push(int value) {
    if (top == 4) {
        cout << "Stack Overflow\n";
    }
    else {
        top++;
        stack[top] = value;
    }
}

void pop() {
    if (top == -1) {
        cout << "Stack Underflow\n";
    }
    else {
        cout << "Popped: " << stack[top] << endl;
        top--;
    }
}

void peek() {
    if (top == -1) {
        cout << "Stack is empty\n";
    }
    else {
        cout << "Top element: " << stack[top] << endl;
    }
}

void display() {
    if (top == -1) {
        cout << "Stack is empty\n";
    }
    else {
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    push(10);
    push(20);
    push(30);

    display();
    peek();
    pop();
    display();

    return 0;
}
