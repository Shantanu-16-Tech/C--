#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int precedence(char ch) {
    if (ch == '^') {
        return 3;
    }
    if (ch == '*' || ch == '/') {
        return 2;
    }
    if (ch == '+' || ch == '-') {
        return 1;
    }
    return 0;
}

int main() {
    string infix = "A+B*C";
    string reversed = infix;
    string postfix = "";
    char stack[100];
    int top = -1;

    reverse(reversed.begin(), reversed.end());

    for (int i = 0; i < reversed.length(); i++) {
        if (reversed[i] == '(') {
            reversed[i] = ')';
        }
        else if (reversed[i] == ')') {
            reversed[i] = '(';
        }
    }

    for (int i = 0; i < reversed.length(); i++) {
        char ch = reversed[i];

        if (isalnum(ch)) {
            postfix += ch;
        }
        else if (ch == '(') {
            stack[++top] = ch;
        }
        else if (ch == ')') {
            while (top != -1 && stack[top] != '(') {
                postfix += stack[top--];
            }

            if (top != -1) {
                top--;
            }
        }
        else {
            while (top != -1 && stack[top] != '(' &&
                  (precedence(stack[top]) > precedence(ch) ||
                  (precedence(stack[top]) == precedence(ch) &&
                   ch == '^'))) {
                postfix += stack[top--];
            }

            stack[++top] = ch;
        }
    }

    while (top != -1) {
        postfix += stack[top--];
    }

    reverse(postfix.begin(), postfix.end());

    cout << "Prefix: " << postfix;

    return 0;
}
