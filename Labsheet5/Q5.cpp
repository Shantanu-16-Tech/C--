#include <iostream>
using namespace std;

int stack[5];
int top = -1;

void push() {
    int value;

    if (top == 4) {
        cout << "Stack Overflow\n";
    }
    else {
        cout << "Enter value: ";
        cin >> value;

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
        cout << "TOP: " << stack[top] << endl;
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
    int choice;

    do {
        cout << "\n1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                cout << "Program ended\n";
                break;

            default:
                cout << "Invalid choice\n";
        }
    } while (choice != 5);

    return 0;
}
