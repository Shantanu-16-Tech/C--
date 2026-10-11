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
    third->data = 50;
    fourth->data = 20;

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    int maximum = first->data;
    int minimum = first->data;

    Node* temp = first;

    while (temp != NULL) {
        if (temp->data > maximum) {
            maximum = temp->data;
        }

        if (temp->data < minimum) {
            minimum = temp->data;
        }

        temp = temp->next;
    }

    cout << "Maximum: " << maximum << endl;
    cout << "Minimum: " << minimum;

    return 0;
}
