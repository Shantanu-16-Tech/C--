#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bubble(vector<int>& a) {
    for (int i = 0; i < (int)a.size() - 1; i++)
        for (int j = 0; j < (int)a.size() - i - 1; j++)
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
}

void insertion(vector<int>& a) {
    for (int i = 1; i < (int)a.size(); i++) {
        int key = a[i], j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

void selection(vector<int>& a) {
    for (int i = 0; i < (int)a.size() - 1; i++) {
        int m = i;
        for (int j = i + 1; j < (int)a.size(); j++)
            if (a[j] < a[m]) m = j;
        swap(a[i], a[m]);
    }
}

void merge(vector<int>& a, int l, int m, int r) {
    vector<int> t;
    int i = l, j = m + 1;

    while (i <= m && j <= r) {
        if (a[i] <= a[j]) t.push_back(a[i++]);
        else t.push_back(a[j++]);
    }
    while (i <= m) t.push_back(a[i++]);
    while (j <= r) t.push_back(a[j++]);

    for (int k = 0; k < (int)t.size(); k++)
        a[l + k] = t[k];
}

void mergeSort(vector<int>& a, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);
        merge(a, l, m, r);
    }
}

int partition(vector<int>& a, int l, int r) {
    int pivot = a[r], i = l - 1;
    for (int j = l; j < r; j++)
        if (a[j] <= pivot) swap(a[++i], a[j]);
    swap(a[i + 1], a[r]);
    return i + 1;
}

void quickSort(vector<int>& a, int l, int r) {
    if (l < r) {
        int p = partition(a, l, r);
        quickSort(a, l, p - 1);
        quickSort(a, p + 1, r);
    }
}

int main() {
    int n, choice;
    cout << "Enter array size: ";
    cin >> n;

    if (n <= 0) return 0;

    vector<int> a(n);
    cout << "Enter elements: ";
    for (int& x : a) cin >> x;

    cout << "\n1. Bubble Sort\n2. Insertion Sort"
         << "\n3. Selection Sort\n4. Merge Sort"
         << "\n5. Quick Sort\nEnter choice: ";
    cin >> choice;

    switch (choice) {
        case 1: bubble(a); break;
        case 2: insertion(a); break;
        case 3: selection(a); break;
        case 4: mergeSort(a, 0, n - 1); break;
        case 5: quickSort(a, 0, n - 1); break;
        default:
            cout << "Invalid choice!";
            return 0;
    }

    cout << "Sorted array: ";
    for (int x : a) cout << x << " ";

    return 0;
}