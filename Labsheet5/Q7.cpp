#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "HELLO";
    char stack[100];
    int top = -1;

    for (int i = 0; i < str.length(); i++) {
        stack[++top] = str[i];
    }

    cout << "Reversed string: ";

    while (top != -1) {
        cout << stack[top];
        top--;
    }

    return 0;
}
