#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    int sumEven = 0;
    int sumOdd = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sumEven = sumEven + arr[i];
        }
        else {
            sumOdd = sumOdd + arr[i];
        }
    }

    cout << "SumEven = " << sumEven << endl;
    cout << "SumOdd = " << sumOdd << endl;

    return 0;
}