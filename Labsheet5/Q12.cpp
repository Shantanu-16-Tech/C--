#include <iostream>
using namespace std;

int arr[10];
int top1 = -1;
int top2 = 10;

void push1(int value) {
    if (top1 + 1 == top2) {
        cout << "Stack Overflow\n";
    }
    else {
        arr[++top1] = value;
    }
}

void push2(int value) {
    if (top1 + 1 == top2) {
        cout << "Stack Overflow\n";
    }
    else {
        arr[--top2] = value;
    }
}

void display1() {
    cout << "Stack 1: ";

    for (int i = top1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

void display2() {
    cout << "Stack 2: ";

    for (int i = top2; i < 10; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main() {
    push1(10);
    push1(20);

    push2(100);
    push2(200);

    display1();
    display2();

    return 0;
}
