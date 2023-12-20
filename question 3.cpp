#include <iostream>
using namespace std;
int main() {
    const int sizeA = 5;
    int a[sizeA] = { 1, 2, 3, 4, 5 };

    const int sizeB = sizeA + 1;
    int b[sizeB];

    for (int i = 0; i < sizeB; ++i) {
        b[i] = 0;
    }

    cout << "Enter new values for array: ";

    for (int c = 0; c < sizeB; c++) {
        cin >> b[c];
    }

    cout << "New array: ";
    for (int i = 0; i < sizeB; ++i) {
        cout << b[i] << " ";
    }

    return 0;
}





