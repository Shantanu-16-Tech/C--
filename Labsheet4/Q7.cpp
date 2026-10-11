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
    Node* third = new Node();

    first->data = 10;
    second->data = 20;
    third->data = 30;

    first->next = second;
    second->next = third;
    third->next = NULL;

    int position = 2;

    Node* temp = first;

    for (int i = 1; i < position - 1; i++) {
        temp = temp->next;
    }

    Node* delNode = temp->next;
    temp->next = delNode->next;
    delete delNode;

    temp = first;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
