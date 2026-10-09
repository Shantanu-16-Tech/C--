#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int k = 2;

    sort(arr, arr + n);

    cout << k << "nd Smallest = " << arr[k - 1] << endl;
    cout << k << "nd Largest = " << arr[n - k] << endl;

    return 0;
}