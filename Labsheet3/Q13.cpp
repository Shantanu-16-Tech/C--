#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long bubbleSort(vector<int> a) {
    long long count = 0;
    int n = a.size();

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++) {
            count++;
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }

    return count;
}

long long insertionSort(vector<int> a) {
    long long count = 0;
    int n = a.size();

    for (int i = 1; i < n; i++) {
        int key = a[i], j = i - 1;

        while (j >= 0) {
            count++;
            if (a[j] > key) {
                a[j + 1] = a[j];
                j--;
            } else {
                break;
            }
        }

        a[j + 1] = key;
    }

    return count;
}

long long selectionSort(vector<int> a) {
    long long count = 0;
    int n = a.size();

    for (int i = 0; i < n - 1; i++) {
        int m = i;

        for (int j = i + 1; j < n; j++) {
            count++;
            if (a[j] < a[m])
                m = j;
        }

        swap(a[i], a[m]);
    }

    return count;
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    if (n <= 0) return 0;

    vector<int> a(n);

    cout << "Enter elements: ";
    for (int& x : a) cin >> x;

    cout << "Bubble Sort comparisons: "
         << bubbleSort(a) << endl;

    cout << "Insertion Sort comparisons: "
         << insertionSort(a) << endl;

    cout << "Selection Sort comparisons: "
         << selectionSort(a) << endl;

    return 0;
}