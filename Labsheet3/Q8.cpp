#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void display(vector<int> a) {
    for (int x : a)
        cout << x << " ";
    cout << endl;
}

void bubbleSort(vector<int>& a) {
    for (int i = 0; i < (int)a.size() - 1; i++)
        for (int j = 0; j < (int)a.size() - i - 1; j++)
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
}

void insertionSort(vector<int>& a) {
    for (int i = 1; i < (int)a.size(); i++) {
        int key = a[i], j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

void selectionSort(vector<int>& a) {
    for (int i = 0; i < (int)a.size() - 1; i++) {
        int m = i;
        for (int j = i + 1; j < (int)a.size(); j++)
            if (a[j] < a[m])
                m = j;
        swap(a[i], a[m]);
    }
}

void merge(vector<int>& a, int l, int m, int r) {
    vector<int> t;
    int i = l, j = m + 1;

    while (i <= m && j <= r) {
        if (a[i] <= a[j])
            t.push_back(a[i++]);
        else
            t.push_back(a[j++]);
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
        if (a[j] <= pivot)
            swap(a[++i], a[j]);
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
    int n;
    cout << "Enter array size: ";
    cin >> n;

    if (n <= 0) return 0;

    vector<int> original(n);
    cout << "Enter elements: ";
    for (int& x : original) cin >> x;

    vector<int> a;

    a = original;
    bubbleSort(a);
    cout << "Bubble Sort: ";
    display(a);

    a = original;
    insertionSort(a);
    cout << "Insertion Sort: ";
    display(a);

    a = original;
    selectionSort(a);
    cout << "Selection Sort: ";
    display(a);

    a = original;
    mergeSort(a, 0, n - 1);
    cout << "Merge Sort: ";
    display(a);

    a = original;
    quickSort(a, 0, n - 1);
    cout << "Quick Sort: ";
    display(a);

    return 0;
}