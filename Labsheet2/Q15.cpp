#include <iostream>
using namespace std;

int main() {
    int A[] = {5, 3, 4, 1, 2};
    int B[] = {5, 3, 4, 1, 2};
    int C[] = {5, 3, 4, 1, 2};
    int n = 5;

    // Bubble Sort
    // Best: O(n) with optimization
    // Average: O(n^2), Worst: O(n^2)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (A[j] > A[j + 1]) {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    // Insertion Sort
    // Best: O(n), Average: O(n^2), Worst: O(n^2)
    for (int i = 1; i < n; i++) {
        int key = B[i];
        int j = i - 1;

        while (j >= 0 && B[j] > key) {
            B[j + 1] = B[j];
            j--;
        }

        B[j + 1] = key;
    }

    // Selection Sort
    // Best: O(n^2), Average: O(n^2), Worst: O(n^2)
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (C[j] < C[minIndex])
                minIndex = j;
        }

        int temp = C[i];
        C[i] = C[minIndex];
        C[minIndex] = temp;
    }

    cout << "Bubble Sort: Best O(n), Average O(n^2), Worst O(n^2)" << endl;
    cout << "Insertion Sort: Best O(n), Average O(n^2), Worst O(n^2)" << endl;
    cout << "Selection Sort: Best O(n^2), Average O(n^2), Worst O(n^2)" << endl;

    return 0;
}