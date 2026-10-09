#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int a[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minIndex])
                minIndex = j;
        }

        cout << "Pass " << i + 1
             << ", Minimum selected: " << a[minIndex] << endl;

        swap(a[i], a[minIndex]);
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}