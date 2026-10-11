#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

Node* first = NULL;

void insertNode(int value) {
    Node* newNode = new Node();

    newNode->data = value;

    if (first == NULL) {
        first = newNode;
        newNode->next = first;
    }
    else {
        Node* temp = first;

        while (temp->next != first) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->next = first;
    }
}

void display() {
    if (first == NULL) {
        cout << "List is empty";
        return;
    }

    Node* temp = first;

    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != first);

    cout << endl;
}

int main() {
    insertNode(10);
    insertNode(20);
    insertNode(30);

    cout << "Circular Linked List: ";
    display();

    insertNode(40);

    cout << "After insertion: ";
    display();

    return 0;
}
