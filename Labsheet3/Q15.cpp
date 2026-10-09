#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

long long comparisons = 0;
long long recursiveCalls = 0;

int partition(vector<int>& a, int low, int high) {
    int pivot = a[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        comparisons++;

        if (a[j] <= pivot) {
            i++;
            swap(a[i], a[j]);
        }
    }

    swap(a[i + 1], a[high]);
    return i + 1;
}

void quickSort(vector<int>& a, int low, int high) {
    recursiveCalls++;

    if (low < high) {
        int p = partition(a, low, high);
        quickSort(a, low, p - 1);
        quickSort(a, p + 1, high);
    }
}

void testArray(vector<int> a, string name) {
    comparisons = 0;
    recursiveCalls = 0;

    quickSort(a, 0, (int)a.size() - 1);

    cout << "\n" << name << endl;

    cout << "Sorted array: ";
    for (int x : a) cout << x << " ";

    cout << "\nComparisons: " << comparisons;
    cout << "\nRecursive calls: " << recursiveCalls << endl;
}

int main() {
    int n;
    cout << "Enter array size (1 to 10000): ";
    cin >> n;

    if (n < 1 || n > 10000) {
        cout << "Invalid size!";
        return 0;
    }

    vector<int> sorted(n), reversed(n), randomArray(n);

    for (int i = 0; i < n; i++)
        sorted[i] = i + 1;

    reversed = sorted;
    reverse(reversed.begin(), reversed.end());

    randomArray = sorted;
    mt19937 rng(random_device{}());
    shuffle(randomArray.begin(), randomArray.end(), rng);

    testArray(sorted, "Already Sorted Array");
    testArray(reversed, "Reverse-Sorted Array");
    testArray(randomArray, "Randomly Arranged Array");

    return 0;
}