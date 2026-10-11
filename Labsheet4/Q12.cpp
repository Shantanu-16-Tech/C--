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
    Node* fourth = new Node();

    first->data = 40;
    second->data = 10;
    third->data = 30;
    fourth->data = 20;

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    Node* temp;
    int value;

    for (Node* i = first; i != NULL; i = i->next) {
        for (Node* j = i->next; j != NULL; j = j->next) {
            if (i->data > j->data) {
                value = i->data;
                i->data = j->data;
                j->data = value;
            }
        }
    }

    temp = first;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
