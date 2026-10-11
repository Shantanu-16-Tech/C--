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

    Node* previous = NULL;
    Node* current = first;
    Node* nextNode = NULL;

    while (current != NULL) {
        nextNode = current->next;
        current->next = previous;
        previous = current;
        current = nextNode;
    }

    first = previous;

    Node* temp = first;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
