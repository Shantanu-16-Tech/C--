#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5, choice, key, pos = -1;

    cout << "1. Linear Search\n";
    cout << "2. Binary Search\n";
    cout << "Enter choice: ";
    cin >> choice;

    cout << "Enter key: ";
    cin >> key;

    if (choice == 1) {
        for (int i = 0; i < n; i++) {
            if (arr[i] == key) {
                pos = i;
                break;
            }
        }
    }
    else if (choice == 2) {
        int low = 0, high = n - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (arr[mid] == key) {
                pos = mid;
                break;
            }
            else if (arr[mid] < key)
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    else {
        cout << "Invalid choice";
        return 0;
    }

    if (pos != -1)
        cout << "Found at position " << pos + 1;
    else
        cout << "Element not found";

    return 0;
}