#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

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

void display(const vector<int>& a) {
    for (int x : a) cout << x << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    if (n <= 0) return 0;

    vector<int> original(n);
    cout << "Enter elements: ";
    for (int& x : original) cin >> x;

    vector<int> a = original;
    mergeSort(a, 0, n - 1);
    cout << "Merge Sort result: ";
    display(a);

    a = original;
    quickSort(a, 0, n - 1);
    cout << "Quick Sort result: ";
    display(a);

    cout << "\nComplexity Comparison\n";
    cout << "Merge Sort: Best/Average/Worst = O(n log n)\n";
    cout << "Merge Sort: Auxiliary space = O(n)\n";
    cout << "Quick Sort: Best/Average = O(n log n)\n";
    cout << "Quick Sort: Worst = O(n^2)\n";
    cout << "Quick Sort: Average auxiliary space = O(log n)\n";
    cout << "Quick Sort: Worst auxiliary space = O(n)\n";

    return 0;
}