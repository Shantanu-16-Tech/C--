#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;
};

Node* first = NULL;

void insertNode(int value) {
    Node* newNode = new Node();

    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;

    if (first == NULL) {
        first = newNode;
    }
    else {
        Node* temp = first;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->prev = temp;
    }
}

void deleteNode() {
    if (first == NULL) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = first;
    first = first->next;

    if (first != NULL) {
        first->prev = NULL;
    }

    delete temp;
    cout << "First node deleted\n";
}

void display() {
    Node* temp = first;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {
    insertNode(10);
    insertNode(20);
    insertNode(30);

    cout << "Original list: ";
    display();

    deleteNode();

    cout << "After deletion: ";
    display();

    return 0;
}
