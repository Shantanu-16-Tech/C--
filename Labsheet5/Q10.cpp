#include <iostream>
#include <string>
using namespace std;

int main() {
    string postfix = "23*54*+";
    int stack[100];
    int top = -1;

    for (int i = 0; i < postfix.length(); i++) {
        char ch = postfix[i];

        if (ch >= '0' && ch <= '9') {
            stack[++top] = ch - '0';
        }
        else {
            int b = stack[top--];
            int a = stack[top--];
            int result;

            if (ch == '+') {
                result = a + b;
            }
            else if (ch == '-') {
                result = a - b;
            }
            else if (ch == '*') {
                result = a * b;
            }
            else {
                result = a / b;
            }

            stack[++top] = result;
        }
    }

    cout << "Result: " << stack[top];

    return 0;
}
