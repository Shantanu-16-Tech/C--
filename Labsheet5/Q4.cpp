#include <iostream>
using namespace std;

int main() {
    int stack[5] = {10, 20, 30};
    int top = 2;

    if (top == -1) {
        cout << "Stack is empty";
    }
    else {
        cout << "TOP element: " << stack[top];
    }

    return 0;
}
