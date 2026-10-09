#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 4, 3, 4, 5, 1};
    int n = 6;

    cout << "Duplicate elements = ";

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break;
            }
        }
    }

    return 0;
}