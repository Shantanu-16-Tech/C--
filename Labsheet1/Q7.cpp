#include <iostream>
using namespace std;

int main() {
    int Arr1[] = {11, 1, 13, 21, 3, 7};
    int Arr2[] = {11, 3, 7, 1};

    int n = 6;
    int m = 4;

    bool subset = true;

    for (int i = 0; i < m; i++) {
        bool found = false;

        for (int j = 0; j < n; j++) {
            if (Arr2[i] == Arr1[j]) {
                found = true;
                break;
            }
        }

        if (found == false) {
            subset = false;
            break;
        }
    }

    if (subset == true) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }

    return 0;
}