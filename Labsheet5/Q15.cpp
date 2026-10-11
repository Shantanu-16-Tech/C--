#include <iostream>
using namespace std;

int stack[5];
int top = -1;

void push(int value) {
    if (top == 4) {
        cout << "Stack Overflow\n";
    }
    else {
        stack[++top] = value;
    }
}

void pop() {
    if (top == -1) {
        cout << "Stack Underflow\n";
    }
    else {
        cout << "Popped: " << stack[top--] << endl;
    }
}

void peek() {
    if (top == -1) {
        cout << "Stack is empty\n";
    }
    else {
        cout << "Top: " << stack[top] << endl;
    }
}

void display() {
    for (int i = top; i >= 0; i--) {
        cout << stack[i] << " ";
    }

    cout << endl;
}

int main() {
    push(10);
    push(20);
    push(30);

    cout << "Stack: ";
    display();

    peek();
    pop();

    cout << "Push: O(1)" << endl;
    cout << "Pop: O(1)" << endl;
    cout << "Peek: O(1)" << endl;
    cout << "Display: O(n)" << endl;

    return 0;
}
