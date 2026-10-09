#include <iostream>
using namespace std;

int main() {
    int A[] = {1, 2, 3, 4, 5};
    int B[] = {2, 4, 6, 8, 10, 12, 14};

    int n = 5;
    int m = 7;

    int Sum[7];

    for (int i = 0; i < m; i++) {
        if (i < n) {
            Sum[i] = A[i] + B[i];
        }
        else {
            Sum[i] = B[i];
        }
    }

    cout << "Sum = ";

    for (int i = 0; i < m; i++) {
        cout << Sum[i] << " ";
    }

    return 0;
}