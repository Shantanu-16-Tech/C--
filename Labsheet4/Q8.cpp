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

    int key = 20;
    int position = 1;
    Node* temp = first;

    while (temp != NULL) {
        if (temp->data == key) {
            break;
        }

        temp = temp->next;
        position++;
    }

    if (temp != NULL) {
        cout << "Element found at position " << position;
    }
    else {
        cout << "Element not found";
    }

    return 0;
}
