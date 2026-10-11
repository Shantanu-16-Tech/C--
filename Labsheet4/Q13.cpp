#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

Node* first = NULL;

void insertNode() {
    Node* newNode = new Node();

    cout << "Enter value: ";
    cin >> newNode->data;

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
    }

    cout << "Node inserted\n";
}

void deleteNode() {
    if (first == NULL) {
        cout << "List is empty\n";
        return;
    }

    if (first->next == NULL) {
        delete first;
        first = NULL;
    }
    else {
        Node* temp = first;

        while (temp->next->next != NULL) {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }

    cout << "Node deleted\n";
}

void searchNode() {
    int key;
    cout << "Enter value to search: ";
    cin >> key;

    Node* temp = first;

    while (temp != NULL) {
        if (temp->data == key) {
            cout << "Element found\n";
            return;
        }

        temp = temp->next;
    }

    cout << "Element not found\n";
}

void display() {
    Node* temp = first;

    if (temp == NULL) {
        cout << "List is empty\n";
        return;
    }

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {
    int choice;

    do {
        cout << "\n1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Search\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                insertNode();
                break;

            case 2:
                deleteNode();
                break;

            case 3:
                searchNode();
                break;

            case 4:
                display();
                break;

            case 5:
                cout << "Program ended\n";
                break;

            default:
                cout << "Invalid choice\n";
        }
    } while (choice != 5);

    return 0;
}
