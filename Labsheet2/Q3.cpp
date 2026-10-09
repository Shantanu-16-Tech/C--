#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5, key;
    int linearPos = -1, binaryPos = -1;

    cout << "Enter key: ";
    cin >> key;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            linearPos = i;
            break;
        }
    }

    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            binaryPos = mid;
            break;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (linearPos != -1)
        cout << "Linear Search position: " << linearPos + 1 << endl;
    else
        cout << "Linear Search: Not found" << endl;

    if (binaryPos != -1)
        cout << "Binary Search position: " << binaryPos + 1 << endl;
    else
        cout << "Binary Search: Not found" << endl;

    return 0;
}