#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

int main() {
    Node* first = new Node();
    Node* second = new Node();
    Node* newNode = new Node();

    first->data = 10;
    second->data = 30;

    first->next = second;
    second->next = NULL;

    int position = 2;

    newNode->data = 25;

    Node* temp = first;

    for (int i = 1; i < position - 1; i++) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    temp = first;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
