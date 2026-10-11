#include <iostream>
using namespace std;

class Stack {
    int arr[5];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int value) {
        if (top == 4) {
            cout << "Stack Overflow\n";
        }
        else {
            arr[++top] = value;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
        }
        else {
            cout << "Popped: " << arr[top--] << endl;
        }
    }

    void peek() {
        if (top == -1) {
            cout << "Stack is empty\n";
        }
        else {
            cout << "Top: " << arr[top] << endl;
        }
    }

    void display() {
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();
    s.peek();
    s.pop();
    s.display();

    return 0;
}
