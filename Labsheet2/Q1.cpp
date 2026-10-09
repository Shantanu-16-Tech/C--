#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5, key;
    bool found = false;

    cout << "Enter key: ";
    cin >> key;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Found at position " << i + 1;
            found = true;
            break;
        }
    }

    if (found == false)
        cout << "Element not found";

    return 0;
}