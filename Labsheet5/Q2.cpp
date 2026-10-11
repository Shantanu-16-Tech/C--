#include <iostream>
using namespace std;

int main() {
    int stack[3];
    int top = -1;

    for (int i = 1; i <= 4; i++) {
        if (top == 2) {
            cout << "Stack Overflow\n";
        }
        else {
            top++;
            stack[top] = i * 10;
            cout << "Pushed: " << stack[top] << endl;
        }
    }

    return 0;
}
