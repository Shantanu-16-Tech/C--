#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> a) {
    int n = a.size();
    int comparisons = 0, swaps = 0;

    for (int i = 0; i < n - 1; i++) {
        bool changed = false;

        for (int j = 0; j < n - i - 1; j++) {
            comparisons++;

            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                swaps++;
                changed = true;
            }
        }

        if (!changed) break;
    }

    cout << "Bubble Sort comparisons: " << comparisons << endl;
    cout << "Bubble Sort swaps: " << swaps << endl;
}

void insertionSort(vector<int> a) {
    int n = a.size();
    int comparisons = 0, shifts = 0;

    for (int i = 1; i < n; i++) {
        int key = a[i], j = i - 1;

        while (j >= 0) {
            comparisons++;

            if (a[j] > key) {
                a[j + 1] = a[j];
                shifts++;
                j--;
            } else {
                break;
            }
        }

        a[j + 1] = key;
    }

    cout << "Insertion Sort comparisons: "
         << comparisons << endl;
    cout << "Insertion Sort shifts: " << shifts << endl;
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    if (n <= 0) return 0;

    vector<int> a(n);

    cout << "Enter an already sorted array: ";
    for (int& x : a) cin >> x;

    bubbleSort(a);
    insertionSort(a);

    return 0;
}