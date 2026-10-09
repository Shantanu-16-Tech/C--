#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bubbleSort(vector<int> a) {
    long long comparisons = 0, swaps = 0;
    int n = a.size();

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++) {
            comparisons++;
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                swaps++;
            }
        }

    cout << "Bubble Sort: Comparisons = " << comparisons
         << ", Swaps = " << swaps << endl;
}

void insertionSort(vector<int> a) {
    long long comparisons = 0, shifts = 0;
    int n = a.size();

    for (int i = 1; i < n; i++) {
        int key = a[i], j = i - 1;

        while (j >= 0) {
            comparisons++;
            if (a[j] > key) {
                a[j + 1] = a[j];
                shifts++;
                j--;
            } else break;
        }

        a[j + 1] = key;
    }

    cout << "Insertion Sort: Comparisons = " << comparisons
         << ", Shifts = " << shifts << endl;
}

void selectionSort(vector<int> a) {
    long long comparisons = 0, swaps = 0;
    int n = a.size();

    for (int i = 0; i < n - 1; i++) {
        int m = i;

        for (int j = i + 1; j < n; j++) {
            comparisons++;
            if (a[j] < a[m])
                m = j;
        }

        if (m != i) {
            swap(a[i], a[m]);
            swaps++;
        }
    }

    cout << "Selection Sort: Comparisons = " << comparisons
         << ", Swaps = " << swaps << endl;
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    if (n <= 0) return 0;

    vector<int> a(n);

    cout << "Enter elements: ";
    for (int& x : a) cin >> x;

    bubbleSort(a);
    insertionSort(a);
    selectionSort(a);

    return 0;
}