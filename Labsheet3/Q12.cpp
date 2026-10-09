#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    if (n <= 0) return 0;

    vector<int> a(n);

    cout << "Enter elements: ";
    for (int& x : a) cin >> x;

    vector<int> b = a;

    // Ascending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }
    }

    cout << "Ascending order: ";
    for (int x : a) cout << x << " ";

    // Descending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (b[j] < b[j + 1])
                swap(b[j], b[j + 1]);
        }
    }

    cout << "\nDescending order: ";
    for (int x : b) cout << x << " ";

    return 0;
}