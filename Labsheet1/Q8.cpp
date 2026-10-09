#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 5, 3, 4, 3, 5, 6};
    int n = 7;

    for (int i = 0; i < n; i++) {
        bool found = false;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                found = true;
                break;
            }
        }

        if (found == true) {
            cout << arr[i];
            break;
        }
    }

    return 0;
}