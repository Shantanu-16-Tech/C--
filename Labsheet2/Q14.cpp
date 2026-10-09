#include <iostream>
using namespace std;

int main() {
    int A[] = {5, 3, 4, 1, 2};
    int B[] = {5, 3, 4, 1, 2};
    int n = 5;
    int bubbleCount = 0, selectionCount = 0;

    // Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            bubbleCount++;

            if (A[j] > A[j + 1]) {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    // Selection Sort
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            selectionCount++;

            if (B[j] < B[minIndex])
                minIndex = j;
        }

        int temp = B[i];
        B[i] = B[minIndex];
        B[minIndex] = temp;
    }

    cout << "Bubble Sort comparisons: " << bubbleCount << endl;
    cout << "Selection Sort comparisons: " << selectionCount << endl;

    return 0;
}