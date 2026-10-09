#include <iostream>
using namespace std;

int main() {
    int A[] = {1, 2, 3, 4, 5};
    int B[] = {2, 4, 6, 8, 10};

    int n = 5, m = 5;

    cout << "Union = ";

    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }

    for (int i = 0; i < m; i++) {
        bool found = false;

        for (int j = 0; j < n; j++) {
            if (B[i] == A[j]) {
                found = true;
                break;
            }
        }

        if (found == false) {
            cout << B[i] << " ";
        }
    }

    cout << endl;

    cout << "Intersection = ";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i] == B[j]) {
                cout << A[i] << " ";
                break;
            }
        }
    }

    return 0;
}