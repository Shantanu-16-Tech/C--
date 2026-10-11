#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "{[()]}";
    char stack[100];
    int top = -1;
    bool balanced = true;

    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            stack[++top] = ch;
        }
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (top == -1) {
                balanced = false;
                break;
            }

            char opening = stack[top];
            top--;

            if ((ch == ')' && opening != '(') ||
                (ch == '}' && opening != '{') ||
                (ch == ']' && opening != '[')) {
                balanced = false;
                break;
            }
        }
    }

    if (top != -1) {
        balanced = false;
    }

    if (balanced) {
        cout << "Parentheses are balanced";
    }
    else {
        cout << "Parentheses are not balanced";
    }

    return 0;
}
