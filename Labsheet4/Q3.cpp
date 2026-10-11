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
    second->data = 20;

    first->next = second;
    second->next = NULL;

    newNode->data = 30;
    newNode->next = NULL;

    Node* temp = first;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;

    temp = first;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
