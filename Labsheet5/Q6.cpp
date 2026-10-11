#include <iostream>
using namespace std;

int main() {
    int stack[5];
    int top = -1;

    stack[++top] = 10;
    stack[++top] = 20;
    stack[++top] = 30;

    cout << "Stack elements: ";

    for (int i = top; i >= 0; i--) {
        cout << stack[i] << " ";
    }

    return 0;
}
